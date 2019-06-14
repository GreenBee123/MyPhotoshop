#include "finding_Image_Contourclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

int thresh = 50, N = 11;
Mat finding_Image_Contour_img;
QImage finding_Image_Contour_img2;
static double angle(Point pt1, Point pt2, Point pt0);
static void findSquares(const Mat& image, vector<vector<Point> >& squares);
static void drawSquares(Mat& image, const vector<vector<Point> >& squares);

finding_Image_Contourclass::finding_Image_Contourclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

finding_Image_Contourclass::~finding_Image_Contourclass()
{
}

void finding_Image_Contourclass::finding_Image_Contour_receiveData(QString data) {
	finding_Image_Contour_img = imread(data.toStdString());
	vector<vector<Point> > squares;
	findSquares(finding_Image_Contour_img, squares);
	drawSquares(finding_Image_Contour_img, squares);

	finding_Image_Contour_img2 = cvMat2QImage(finding_Image_Contour_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(finding_Image_Contour_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

// helper function:
// finds a cosine of angle between vectors
// from pt0->pt1 and from pt0->pt2
//������������Ѱ�����ҽ�
//pt0->pt1�� pt0->pt2
static double angle(Point pt1, Point pt2, Point pt0)
{
	double dx1 = pt1.x - pt0.x;
	double dy1 = pt1.y - pt0.y;
	double dx2 = pt2.x - pt0.x;
	double dy2 = pt2.y - pt0.y;
	return (dx1*dx2 + dy1 * dy2) / sqrt((dx1*dx1 + dy1 * dy1)*(dx2*dx2 + dy2 * dy2) + 1e-10);
}

// returns sequence of squares detected on the image.
// the sequence is stored in the specified memory storage
//��������⵽�ķ��δ洢��squares��
static void findSquares(const Mat& image, vector<vector<Point> >& squares)
{
	squares.clear();

	Mat pyr, timg, gray0(image.size(), CV_8U), gray;

	// down-scale and upscale the image to filter out the noise
	//ͨ��������ȥ������
	pyrDown(image, pyr, Size(image.cols / 2, image.rows / 2));
	pyrUp(pyr, timg, image.size());
	vector<vector<Point> > contours;

	// find squares in every color plane of the image
	//��ÿ����ɫͨ��Ѱ���ı���
	for (int c = 0; c < 3; c++)
	{
		int ch[] = { c, 0 };
		mixChannels(&timg, 1, &gray0, 1, ch, 1);

		// try several threshold levels
		//����ÿ���ٽ�ȼ�
		for (int l = 0; l < N; l++)
		{
			// hack: use Canny instead of zero threshold level.
			// Canny helps to catch squares with gradient shading
			if (l == 0)
			{
				// apply Canny. Take the upper threshold from slider
				// and set the lower to 0 (which forces edges merging)
				Canny(gray0, gray, 0, thresh, 5);
				//������ȥ����Ե�Ŀն�
				// dilate canny output to remove potential
				// holes between edge segments
				dilate(gray, gray, Mat(), Point(-1, -1));
			}
			else
			{
				//ʹ����ֵ
				// apply threshold if l!=0:
				//     tgray(x,y) = gray(x,y) < (l+1)*255/N ? 255 : 0
				gray = gray0 >= (l + 1) * 255 / N;
			}

			// find contours and store them all as a list
			//���ҵ��������洢���嵥��
			findContours(gray, contours, CV_RETR_LIST, CV_CHAIN_APPROX_SIMPLE);

			vector<Point> approx;

			// test each contour
			//����ÿ������
			for (size_t i = 0; i < contours.size(); i++)
			{
				// approximate contour with accuracy proportional
				// to the contour perimeter
				//�������ܱ���ȷ�ȱ�uqde��������
				approxPolyDP(Mat(contours[i]), approx, arcLength(Mat(contours[i]), true)*0.02, true);

				// square contours should have 4 vertices after approximation
				// relatively large area (to filter out noisy contours)
				// and be convex.
				// Note: absolute value of an area is used because
				// area may be positive or negative - in accordance with the
				// contour orientation
				//�����ķ�������Ӧ���Ǿ����ĸ����㲢����͹���
				//���������������ת�������Ǿ���ֵ
				if (approx.size() == 4 &&
					fabs(contourArea(Mat(approx))) > 1000 &&
					isContourConvex(Mat(approx)))
				{
					double maxCosine = 0;

					for (int j = 2; j < 5; j++)
					{
						// find the maximum cosine of the angle between joint edges
						//�����ӵ�������Ѱ���������ҽ�
						double cosine = fabs(angle(approx[j % 4], approx[j - 2], approx[j - 1]));
						maxCosine = MAX(maxCosine, cosine);
					}

					// if cosines of all angles are small
					// (all angles are ~90 degree) then write quandrange
					// vertices to resultant sequence
					//����������ҽǺ�С�ͽ����ε��ĸ�����д��������
					//���������ı���Ӧ���ǽ���ֱ��90��
					if (maxCosine < 0.3)
						squares.push_back(approx);
				}
			}
		}
	}
}

//�����ı���
// the function draws all the squares in the image
static void drawSquares(Mat& image, const vector<vector<Point> >& squares)
{
	for (size_t i = 0; i < squares.size() / 2; i++)
	{
		const Point* p = &squares[i][0];
		int n = (int)squares[i].size();
		polylines(image, &p, &n, 1, true, Scalar(0, 255, 0), 3, CV_AA);
	}
	
}
