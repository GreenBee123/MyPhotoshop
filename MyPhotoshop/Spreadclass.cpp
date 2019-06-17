#include "Spreadclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

QImage Spread_img2;

Spreadclass::Spreadclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Spreadclass::~Spreadclass()
{
}

void Spreadclass::spread_receiveData(QString data) {
	Mat src = imread(data.toStdString());
	int width = src.cols;
	int heigh = src.rows;
	RNG rng;
	Mat Spread_img(src.size(), CV_8UC3);
	for (int y = 1; y < heigh - 1; y++)
	{
		uchar* P0 = src.ptr<uchar>(y);
		uchar* P1 = Spread_img.ptr<uchar>(y);
		for (int x = 1; x < width - 1; x++)
		{
			int tmp = rng.uniform(0, 9);
			P1[3 * x] = src.at<uchar>(y - 1 + tmp / 3, 3 * (x - 1 + tmp % 3));
			P1[3 * x + 1] = src.at<uchar>(y - 1 + tmp / 3, 3 * (x - 1 + tmp % 3) + 1);
			P1[3 * x + 2] = src.at<uchar>(y - 1 + tmp / 3, 3 * (x - 1 + tmp % 3) + 2);
		}

	}

	Spread_img2 = cvMat2QImage(Spread_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Spread_img2));
	ui.label->resize(ui.label->pixmap()->size());
}
