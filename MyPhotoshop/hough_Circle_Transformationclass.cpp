#include "hough_Circle_Transformationclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

Mat hough_Circle_img;
Mat hough_Circle_cimg;
QImage hough_Circle_img2;

hough_Circle_Transformationclass::hough_Circle_Transformationclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

hough_Circle_Transformationclass::~hough_Circle_Transformationclass()
{

}

void hough_Circle_Transformationclass::hough_Circle_Transformation_receiveData(QString data) {
	hough_Circle_img = imread(data.toStdString(), 0);

	medianBlur(hough_Circle_img, hough_Circle_img, 5);
	cvtColor(hough_Circle_img, hough_Circle_cimg, COLOR_GRAY2BGR);

	vector<Vec3f> circles;
	HoughCircles(hough_Circle_img, circles, CV_HOUGH_GRADIENT, 1, 10,
		100, 30, 1, 30);
	for (size_t i = 0; i < circles.size(); i++)
	{
		Vec3i c = circles[i];
		circle(hough_Circle_cimg, Point(c[0], c[1]),
			c[2], Scalar(0, 0, 255), 3, CV_AA);
		circle(hough_Circle_cimg, Point(c[0], c[1]),
			2, Scalar(0, 255, 0), 3, CV_AA);
	}


	hough_Circle_img2 = cvMat2QImage(hough_Circle_cimg);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(hough_Circle_img2));
	ui.label->resize(ui.label->pixmap()->size());
}