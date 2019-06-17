#include "Vortexclass.h"
#include"MyPhotoshop.h"
#include<math.h>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include <opencv/cv.h>
#include <opencv/highgui.h>

using namespace cv;
using namespace std;

QImage Vortex_img2;
template<typename T> T sqr(T x) { return x * x; }

Vortexclass::Vortexclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Vortexclass::~Vortexclass()
{
}

void Vortexclass::vortex_receiveData(QString data) {

	double Pi = 3.14;
	double Para = 20;

	Mat Vortex_img = imread(data.toStdString());
	Mat src = imread(data.toStdString());
	int heigh = src.rows;
	int width = src.cols;
	Point center(width / 2, heigh / 2);
	src.copyTo(Vortex_img);
	Mat src1u[3];
	split(src, src1u);

	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = Vortex_img.ptr<uchar>(y);
		uchar* srcP = src.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			int R = norm(Point(x, y) - center);
			double angle = atan2((double)(y - center.y), (double)(x - center.x));
			double delta = Pi * Para / sqrtf(R + 1);
			int newX = R * cos(angle + delta) + center.x;
			int newY = R * sin(angle + delta) + center.y;

			if (newX < 0) newX = 0;
			if (newX > width - 1) newX = width - 1;
			if (newY < 0) newY = 0;
			if (newY > heigh - 1) newY = heigh - 1;

			imgP[3 * x] = src1u[0].at<uchar>(newY, newX);
			imgP[3 * x + 1] = src1u[1].at<uchar>(newY, newX);
			imgP[3 * x + 2] = src1u[2].at<uchar>(newY, newX);
		}
	}

	Vortex_img2 = cvMat2QImage(Vortex_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Vortex_img2));
	ui.label->resize(ui.label->pixmap()->size());
}