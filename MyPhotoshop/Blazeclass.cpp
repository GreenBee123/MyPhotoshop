#include "Blazeclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

Blazeclass::Blazeclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Blazeclass::~Blazeclass()
{
}

void Blazeclass::blaze_receiveData(QString data) {
	Mat src = imread(data.toStdString());

	int width = src.cols;
	int heigh = src.rows;
	Mat img;
	src.copyTo(img);

	Mat dst(img.size(), CV_8UC3);
	Mat dst1u[3];

	int R = 11;
	float tmp, r;
	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = img.ptr<uchar>(y);
		uchar* dstP = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			r = (float)imgP[3 * x];
			if (r > 127.5)
				tmp = r + (255 - r)*(r - 127.5) / 127.5;
			else
				tmp = r * r / 127.5;
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x] = (uchar)(tmp);

			r = (float)imgP[3 * x + 1];
			if (r > 127.5)
				tmp = r + (255 - r)*(r - 127.5) / 127.5;
			else
				tmp = r * r / 127.5;
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x + 1] = (uchar)(tmp);

			r = (float)imgP[3 * x + 2];
			if (r > 127.5)
				tmp = r + (255 - r)*(r - 127.5) / 127.5;
			else
				tmp = r * r / 127.5;
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x + 2] = (uchar)(tmp);
		}
	}
	QImage blaze_src = cvMat2QImage(dst);
	ui.label->setPixmap(QPixmap::fromImage(blaze_src));
	ui.label->resize(ui.label->pixmap()->size());
	split(dst, dst1u);
	QImage blaze_img = cvMat2QImage(dst1u[0]);
	ui.label_2->setPixmap(QPixmap::fromImage(blaze_img));
	ui.label_2->resize(ui.label->pixmap()->size());
	QImage blaze_img1 = cvMat2QImage(dst1u[1]);
	ui.label_3->setPixmap(QPixmap::fromImage(blaze_img1));
	ui.label_3->resize(ui.label_3->pixmap()->size());
	QImage blaze_img2 = cvMat2QImage(dst1u[2]);
	ui.label_4->setPixmap(QPixmap::fromImage(blaze_img2));
	ui.label_4->resize(ui.label_3->pixmap()->size());
}