#include "Sketchclass.h"
#include"MyPhotoshop.h"
#include <math.h>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;
QImage Sketch_img2;

Sketchclass::Sketchclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Sketchclass::~Sketchclass()
{
}

void Sketchclass::sketch_receiveData(QString data) {
	Mat src = imread(data.toStdString());
	int width = src.cols;
	int heigh = src.rows;
	Mat gray0, gray1;
	//ȥɫ
	cvtColor(src, gray0, CV_BGR2GRAY);
	//��ɫ
	addWeighted(gray0, -1, NULL, 0, 255, gray1);
	//��˹ģ��,��˹�˵�Size������Ч���й�
	GaussianBlur(gray1, gray1, Size(11, 11), 0);

	//�ںϣ���ɫ����
	Mat Sketch_img(gray1.size(), CV_8UC1);
	for (int y = 0; y < heigh; y++)
	{

		uchar* P0 = gray0.ptr<uchar>(y);
		uchar* P1 = gray1.ptr<uchar>(y);
		uchar* P = Sketch_img.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			int tmp0 = P0[x];
			int tmp1 = P1[x];
			P[x] = (uchar)min((tmp0 + (tmp0*tmp1) / (256 - tmp1)), 255);
		}

	}

	Sketch_img2 = cvMat2QImage(Sketch_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Sketch_img2));
	ui.label->resize(ui.label->pixmap()->size());
}
