#include "frozenclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<math.h>
Mat src_frozen;
QImage dst_frozen;
frozenclass::frozenclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

frozenclass::~frozenclass()
{
}
void frozenclass::frozen_receiveData(QString data) {
	src_frozen = imread(data.toStdString());
	frozen_effect();
}

void frozenclass::frozen_effect() {
	Mat img;
	src_frozen.copyTo(img);
	int width = src_frozen.cols;
	int heigh = src_frozen.rows;
	Mat dst(img.size(), CV_8UC3);
	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = img.ptr<uchar>(y);
		uchar* dstP = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			int b0 = imgP[3 * x];
			int g0 = imgP[3 * x + 1];
			int r0 = imgP[3 * x + 2];

			int b = (b0 - g0 - r0) * 3 / 2;
			int g = (g0 - b0 - r0) * 3 / 2;
			int r = (r0 - g0 - b0) * 3 / 2;

			r = (r > 255 ? 255 : (r < 0 ? -r : r));
			g = (g > 255 ? 255 : (g < 0 ? -g : g));
			b = (b > 255 ? 255 : (b < 0 ? -b : b));
			//r = (r > 255 ? 255 : (r < 0 ? 0 : r));
			//g = (g > 255 ? 255 : (g < 0 ? 0 : g));
			//b = (b > 255 ? 255 : (b < 0 ? 0 : b));

		/*	r = static_cast<int>(abs(r - g - b) * 3 >> 1);
			g = static_cast<int>(abs(g - r - b) * 3 >> 1);
			b = static_cast<int>(abs(b - g - r) * 3 >> 1);*/
	
			dstP[3 * x] = (uchar)max(0, min(b, 255));
			dstP[3 * x + 1] = (uchar)max(0, min(g, 255));;
			dstP[3 * x + 2] = (uchar)max(0, min(r, 255));;
		}
	}
	dst_frozen = cvMat2QImage(dst);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(dst_frozen));
	ui.label->resize(ui.label->pixmap()->size());
}