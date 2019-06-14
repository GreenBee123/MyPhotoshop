#include "Lightness_Contrastclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

Mat Lightness_Contrast_image, Lightness_Contrast_newimage;
QImage Lightness_Contrast_img2;
double Alpha;
int Beta;

Lightness_Contrastclass::Lightness_Contrastclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Lightness_Contrastclass::~Lightness_Contrastclass()
{
	
}

void Lightness_Contrastclass::on_horizontalSlider_valueChanged(int alpha)
{
	Alpha = (double)alpha / 10;
	ui.label_3->clear();
	ui.label_3->setText(QString::number(Alpha));

	// 转换公式 new_image(i,j) = alpha*image(i,j) + beta
	for (int y = 0; y < Lightness_Contrast_image.rows; y++)
	{
		for (int x = 0; x < Lightness_Contrast_image.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				// 针对像素的每个色屏做转换
				Lightness_Contrast_newimage.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(Alpha*(Lightness_Contrast_image.at<Vec3b>(y, x)[c]) + Beta);
			}
		}
	}
	Lightness_Contrast_img2 = cvMat2QImage(Lightness_Contrast_newimage);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Lightness_Contrast_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Lightness_Contrastclass::on_horizontalSlider_2_valueChanged(int beta)
{
	Beta = beta;
	ui.label_6->clear();
	ui.label_6->setText(QString::number(Beta));

	/// 转换公式 new_image(i,j) = alpha*image(i,j) + beta
	for (int y = 0; y < Lightness_Contrast_image.rows; y++)
	{
		for (int x = 0; x < Lightness_Contrast_image.cols; x++)
		{
			for (int c = 0; c < 3; c++)
			{
				// 针对像素的每个色屏做转换
				Lightness_Contrast_newimage.at<Vec3b>(y, x)[c] =
					saturate_cast<uchar>(Alpha*(Lightness_Contrast_image.at<Vec3b>(y, x)[c]) + Beta);
			}
		}
	}
	Lightness_Contrast_img2 = cvMat2QImage(Lightness_Contrast_newimage);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Lightness_Contrast_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Lightness_Contrastclass::Lightness_Contrast_receiveData(QString data) {
	Lightness_Contrast_image = imread(data.toStdString());

	Lightness_Contrast_newimage = Mat::zeros(Lightness_Contrast_image.size(), Lightness_Contrast_image.type());

	Lightness_Contrast_img2 = cvMat2QImage(Lightness_Contrast_image);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Lightness_Contrast_img2));
	ui.label->resize(ui.label->pixmap()->size());
}