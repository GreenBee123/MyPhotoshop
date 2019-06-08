#include "Snow_Special_Effectsclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include<iostream>
using namespace std;
using namespace cv;

Mat image_Snow_Special_Effectsclass;
QImage img2;
string str_snow;
int i, j;

Snow_Special_Effectsclass::Snow_Special_Effectsclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Snow_Special_Effectsclass::~Snow_Special_Effectsclass()
{
}

void Snow_Special_Effectsclass::on_SnowSpecialEffectsSlider_valueChanged(int value)
{
	ui.label_3->clear();
	ui.label_3->setText(QString::number(value));
	image_Snow_Special_Effectsclass = imread(str_snow);
	for (int k = 0; k < value; k++) {
		// rand() is the MFC random number generator
		// try qrand() with Qt
		i = qrand() % image_Snow_Special_Effectsclass.cols;
		j = qrand() % image_Snow_Special_Effectsclass.rows;
		if (image_Snow_Special_Effectsclass.channels() == 1) { // gray-level image
			image_Snow_Special_Effectsclass.at<uchar>(j, i) = 255;
			if (i < (int)image_Snow_Special_Effectsclass.cols)
				image_Snow_Special_Effectsclass.at<uchar>(j + 1, i) = 255;
			if (j < (int)image_Snow_Special_Effectsclass.rows)
				image_Snow_Special_Effectsclass.at<uchar>(j, i + 1) = 255;
			if (i < (int)image_Snow_Special_Effectsclass.cols && j < (int)image_Snow_Special_Effectsclass.rows)
				image_Snow_Special_Effectsclass.at<uchar>(j + 1, i + 1) = 255;
		}
		else if (image_Snow_Special_Effectsclass.channels() == 3) { // color image
			image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i)[0] = 255;
			image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i)[1] = 255;
			image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i)[2] = 255;
			if (i < (int)image_Snow_Special_Effectsclass.cols - 1)
			{
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i + 1)[0] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i + 1)[1] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j, i + 1)[2] = 255;
			}
			if (j < (int)image_Snow_Special_Effectsclass.rows - 1)
			{
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i)[0] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i)[1] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i)[2] = 255;
			}
			if (j < (int)image_Snow_Special_Effectsclass.rows - 1 && i < (int)image_Snow_Special_Effectsclass.cols - 1)
			{
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i + 1)[0] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i + 1)[1] = 255;
				image_Snow_Special_Effectsclass.at<cv::Vec3b>(j + 1, i + 1)[2] = 255;
			}
		}
	}
	img2 = cvMat2QImage(image_Snow_Special_Effectsclass);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Snow_Special_Effectsclass::Snow_Special_Effects_receiveData(QString data) {
	str_snow = data.toStdString();
	image_Snow_Special_Effectsclass = imread(str_snow);
	img2 = cvMat2QImage(image_Snow_Special_Effectsclass);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2));
	ui.label->resize(ui.label->pixmap()->size());
}