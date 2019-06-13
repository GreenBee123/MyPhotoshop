#include "comic_Strips_class.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
Mat src_comic_Strips;
QImage dst_comic_Strips;
comic_Strips_class::comic_Strips_class(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

comic_Strips_class::~comic_Strips_class()
{
}

void comic_Strips_class::comic_Strips_receiveData(QString data) {
	src_comic_Strips = imread(data.toStdString());
	comic_Strips_effect();
}

void comic_Strips_class::comic_Strips_effect() {
	int width = src_comic_Strips.cols;
	int heigh = src_comic_Strips.rows;
	RNG rng;
	Mat dst(src_comic_Strips.size(), CV_8UC3);
	for (int y = 0; y < heigh; y++)
	{
		uchar* P0 = src_comic_Strips.ptr<uchar>(y);
		uchar* P1 = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			float B = P0[3 * x];
			float G = P0[3 * x + 1];
			float R = P0[3 * x + 2];
			float newB = abs(B - G + B + R)*G / 256;
			float newG = abs(B - G + B + R)*R / 256;
			float newR = abs(G - B + G + R)*R / 256;
			if (newB < 0)newB = 0;
			if (newB > 255)newB = 255;
			if (newG < 0)newG = 0;
			if (newG > 255)newG = 255;
			if (newR < 0)newR = 0;
			if (newR > 255)newR = 255;
			P1[3 * x] = (uchar)newB;
			P1[3 * x + 1] = (uchar)newG;
			P1[3 * x + 2] = (uchar)newR;
		}

	}
	dst_comic_Strips = cvMat2QImage(dst);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(dst_comic_Strips));
	ui.label->resize(ui.label->pixmap()->size());
}