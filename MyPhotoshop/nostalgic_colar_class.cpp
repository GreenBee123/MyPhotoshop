#include "nostalgic_colar_class.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
Mat src_nostalgic_colar;
QImage dst_nostalgic_colar;
nostalgic_colar_class::nostalgic_colar_class(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

nostalgic_colar_class::~nostalgic_colar_class()
{
}

void nostalgic_colar_class::nostalgic_colar_receiveData(QString data) {
	src_nostalgic_colar = imread(data.toStdString());
	nostalgic_colar_effect();
}



void nostalgic_colar_class::nostalgic_colar_effect() {
	int width = src_nostalgic_colar.cols;
	int heigh = src_nostalgic_colar.rows;
	RNG rng;
	Mat dst(src_nostalgic_colar.size(), CV_8UC3);
	for (int y = 0; y < heigh; y++)
	{
		uchar* P0 = src_nostalgic_colar.ptr<uchar>(y);
		uchar* P1 = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			float B = P0[3 * x];
			float G = P0[3 * x + 1];
			float R = P0[3 * x + 2];
			float newB = 0.272*R + 0.534*G + 0.131*B;
			float newG = 0.349*R + 0.686*G + 0.168*B;
			float newR = 0.393*R + 0.769*G + 0.189*B;
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
	dst_nostalgic_colar = cvMat2QImage(dst);
		ui.label->clear();
		ui.label->setPixmap(QPixmap::fromImage(dst_nostalgic_colar));
		ui.label->resize(ui.label->pixmap()->size());
}