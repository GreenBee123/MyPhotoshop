#include "featherclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
Mat src_feather;
QImage dst_feather;
featherclass::featherclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

featherclass::~featherclass()
{
}
void featherclass::feather_receiveData(QString data) {
	src_feather = imread(data.toStdString());
	dst_feather = cvMat2QImage(src_feather);

	ui.label_3->clear();
	ui.label_3->setPixmap(QPixmap::fromImage(dst_feather));
	ui.label_3->resize(ui.label_3->pixmap()->size());
}

void featherclass::on_featherhorizontalSlider_valueChanged(int value) {
	
	ui.label_5->clear();
	ui.label_5->setText(QString::number(value));

	int width = src_feather.cols;
	int heigh = src_feather.rows;
	int centerX = width >> 1;
	int centerY = heigh >> 1;

	int maxV = centerX * centerX + centerY * centerY;
	int minV = (int)(maxV*(1 - value));
	int diff = maxV - minV;
	float ratio = width > heigh ? (float)heigh / (float)width : (float)width / (float)heigh;

	Mat img;
	src_feather.copyTo(img);

	Scalar avg = mean(src_feather);
	Mat dst(img.size(), CV_8UC3);
	Mat mask1u[3];
	float tmp, r;
	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = img.ptr<uchar>(y);
		uchar* dstP = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			int b = imgP[3 * x];
			int g = imgP[3 * x + 1];
			int r = imgP[3 * x + 2];

			float dx = centerX - x;
			float dy = centerY - y;

			if (width > heigh)
				dx = (dx*ratio);
			else
				dy = (dy*ratio);

			int dstSq = dx * dx + dy * dy;

			float v = ((float)dstSq / diff) * 255;

			r = (int)(r + v);
			g = (int)(g + v);
			b = (int)(b + v);
			r = (r > 255 ? 255 : (r < 0 ? 0 : r));
			g = (g > 255 ? 255 : (g < 0 ? 0 : g));
			b = (b > 255 ? 255 : (b < 0 ? 0 : b));

			dstP[3 * x] = (uchar)b;
			dstP[3 * x + 1] = (uchar)g;
			dstP[3 * x + 2] = (uchar)r;
		}
	}
	dst_feather = cvMat2QImage(dst);
	ui.label_3->clear();
	ui.label_3->setPixmap(QPixmap::fromImage(dst_feather));
	ui.label_3->resize(ui.label_3->pixmap()->size());
}
