#include "Radial_Blurclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include <math.h>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;
Radial_Blurclass::Radial_Blurclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Radial_Blurclass::~Radial_Blurclass()
{
}
void Radial_Blurclass::radial_Blur_receiveData(QString data) {
	int num = 40;//num：均值力度;
	Mat suof_img = imread(data.toStdString());
	Mat src = imread(data.toStdString());
	Mat src1u[3];
	split(src, src1u);

	int width = src.cols;
	int heigh = src.rows;
	src.copyTo(suof_img);
	Point center(width / 2, heigh / 2);

	for (int y = 0; y < heigh; y++)
	{

		uchar *imgP = suof_img.ptr<uchar>(y);

		for (int x = 0; x < width; x++)
		{
			int R = norm(Point(x, y) - center);
			double angle = atan2((double)(y - center.y), (double)(x - center.x));

			int tmp0 = 0, tmp1 = 0, tmp2 = 0;

			for (int i = 0; i < num; i++)		//num：均值力度 ，i为变化幅度;
			{
				int tmpR = (R - i) > 0 ? (R - i) : 0;

				int newX = tmpR * cos(angle) + center.x;
				int newY = tmpR * sin(angle) + center.y;

				if (newX < 0)newX = 0;
				if (newX > width - 1)newX = width - 1;
				if (newY < 0)newY = 0;
				if (newY > heigh - 1)newY = heigh - 1;

				tmp0 += src1u[0].at<uchar>(newY, newX);
				tmp1 += src1u[1].at<uchar>(newY, newX);
				tmp2 += src1u[2].at<uchar>(newY, newX);

			}
			imgP[3 * x] = (uchar)(tmp0 / num);
			imgP[3 * x + 1] = (uchar)(tmp1 / num);
			imgP[3 * x + 2] = (uchar)(tmp2 / num);
		}

	}
	QImage ra_im = cvMat2QImage(suof_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(ra_im));
	ui.label->resize(ui.label->pixmap()->size());

}