#include "Load_Selectionclass.h"
#include"MyPhotoshop.h"
#include <math.h>
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

Load_Selectionclass::Load_Selectionclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Load_Selectionclass::~Load_Selectionclass()
{
}

void Load_Selectionclass::load_Selection_receiveData(QString data) {
	int R = 11;
	Mat src = imread(data.toStdString());
	int width = src.cols; 
	int heigh = src.rows; 
	Mat img(heigh / 2, width / 2, CV_8UC3); 
	cv::resize(src, img, img.size());
	Scalar avg = mean(src); 
	Mat dst(img.size(), CV_8UC3); 
	Mat mask1u[3]; 
	float avg0 = avg[0] * 2 > 127.5 ? 127.5 : avg[0] * 2; 
	float avg1 = avg[1] * 2 > 127.5 ? 127.5 : avg[1] * 2; 
	float avg2 = avg[2] * 2 > 127.5 ? 127.5 : avg[2] * 2; 
	float tmp, r;
	for (int y = 0; y < heigh / 2; y++) 
	{ 
		uchar* imgP = img.ptr<uchar>(y); 
		uchar* dstP = dst.ptr<uchar>(y); 
		for (int x = 0; x < width / 2; x++) 
		{ 
			r = (float)imgP[3 * x]; 
			if (r > avg0) tmp = 255; 
			else tmp = 0; dstP[3 * x] = (uchar)(tmp);
			r = (float)imgP[3 * x + 1]; 
			if (r > avg1) tmp = 255; 
			else tmp = 0; 
			dstP[3 * x + 1] = (uchar)(tmp);
			r = (float)imgP[3 * x + 2];
			if (r > avg2) tmp = 255; 
			else tmp = 0; dstP[3 * x + 2] = (uchar)(tmp);
		}
	}
	split(dst, mask1u);


	QImage Load_Selection_img1 = cvMat2QImage(mask1u[0]);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Load_Selection_img1));
	ui.label->resize(ui.label->pixmap()->size());
	QImage Load_Selection_img2 = cvMat2QImage(mask1u[1]);
	ui.label_2->clear();
	ui.label_2->setPixmap(QPixmap::fromImage(Load_Selection_img2));
	ui.label_2->resize(ui.label->pixmap()->size());
	QImage Load_Selection_img3 = cvMat2QImage(mask1u[2]);
	ui.label_3->clear();
	ui.label_3->setPixmap(QPixmap::fromImage(Load_Selection_img3));
	ui.label_3->resize(ui.label->pixmap()->size());
	QImage Load_Selection_img4 = cvMat2QImage(dst);
	ui.label_4->clear();
	ui.label_4->setPixmap(QPixmap::fromImage(Load_Selection_img4));
	ui.label_4->resize(ui.label->pixmap()->size());
}
