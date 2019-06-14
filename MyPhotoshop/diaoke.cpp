#include "diaoke.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
Mat src2;
diaoke::diaoke(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

diaoke::~diaoke()
{
}
void diaoke::Diao_kereceiveData(QString data)
{
	QString str1 = data;
	src2 = imread(str1.toStdString());

	Mat img0(src2.size(), CV_8UC3);
	Mat img1(src2.size(), CV_8UC3);
	for (int y = 1; y < src2.rows - 1; y++)
	{
		uchar *p0 = src2.ptr<uchar>(y);
		uchar *p1 = src2.ptr<uchar>(y + 1);

		uchar *q0 = img0.ptr<uchar>(y);
		uchar *q1 = img1.ptr<uchar>(y);
		for (int x = 1; x < src2.cols - 1; x++)
		{
			for (int i = 0; i < 3; i++)
			{
				int tmp0 = p1[3 * (x + 1) + i] - p0[3 * (x - 1) + i] + 128;//¸¡µñ
				if (tmp0 < 0)
					q0[3 * x + i] = 0;
				else if (tmp0 > 255)
					q0[3 * x + i] = 255;
				else
					q0[3 * x + i] = tmp0;

				int tmp1 = p0[3 * (x - 1) + i] - p1[3 * (x + 1) + i] + 128;//µñ¿Ì
				if (tmp1 < 0)
					q1[3 * x + i] = 0;
				else if (tmp1 > 255)
					q1[3 * x + i] = 255;
				else
					q1[3 * x + i] = tmp1;
			}
		}

	}
	QImage img2 = cvMat2QImage(img0);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2));
	ui.label->resize(ui.label->pixmap()->size());

	QImage img3 = cvMat2QImage(img1);
	ui.label_2->clear();
	ui.label_2->setPixmap(QPixmap::fromImage(img3));
	ui.label_2->resize(ui.label_2->pixmap()->size());


}
