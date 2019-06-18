#include "Hue_Saturationclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

#define max2(a, b) ( (a) > (b) ) ?  (a) : (b)
#define max3(a,b,c) ( ( (a) > (b) ) ?  max2( a, c) : max2( b, c ) ) 
#define min2(a, b)  ( (a) < (b) ) ?  (a) : (b)
#define min3(a,b,c) ( ( (a) < (b) ) ?  min2( a, c ) : min2( b, c ) ) 
const int max_Increment = 200;
Mat Hue_image;
Mat Hue_src;
QImage Hue_img2;


Hue_Saturationclass::Hue_Saturationclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Hue_Saturationclass::~Hue_Saturationclass()
{
}

void Hue_Saturationclass::on_Slider_valueChanged(int value)
{
	ui.label_3->clear();
	ui.label_3->setText(QString::number(value));

	float Increment = (value - 100)* 1.0 / max_Increment;
	Hue_image = Hue_src.clone();
	for (int i = 0; i < Hue_image.cols; ++i)
	{
		for (int j = 0; j < Hue_image.rows; ++j)
		{
			uchar b = Hue_image.at<Vec3b>(j, i).val[0];
			uchar g = Hue_image.at<Vec3b>(j, i).val[1];
			uchar r = Hue_image.at<Vec3b>(j, i).val[2];
			float max = max3(r, g, b);
			float min = min3(r, g, b);
			float delta, value;
			uchar R_new, G_new, B_new;
			float L, S, alpha;
			delta = (max - min) / 255;
			if (delta == 0)
				continue;
			value = (max + min) / 255;
			L = value / 2;
			if (L < 0.5)
				S = delta / value;
			else
				S = delta / (2 - value);
			if (Increment >= 0) {
				if ((Increment + S) >= 1)
					alpha = S;
				else
					alpha = 1 - Increment;
				alpha = 1 / alpha - 1;
				R_new = r + (r - L * 255) * alpha;
				G_new = g + (g - L * 255) * alpha;
				B_new = b + (b - L * 255) * alpha;
			}
			else {
				alpha = Increment;
				R_new = L * 255 + (r - L * 255) * (1 + alpha);
				G_new = L * 255 + (g - L * 255) * (1 + alpha);
				B_new = L * 255 + (b - L * 255) * (1 + alpha);
			}
			Hue_image.at<Vec3b>(j, i).val[0] = B_new;
			Hue_image.at<Vec3b>(j, i).val[1] = G_new;
			Hue_image.at<Vec3b>(j, i).val[2] = R_new;
		}
	}
	Hue_img2 = cvMat2QImage(Hue_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Hue_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Hue_Saturationclass::hue_saturation_receiveData(QString data) {
	Hue_image = imread(data.toStdString());
	Hue_src = Hue_image.clone();
	Hue_img2 = cvMat2QImage(Hue_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Hue_img2));
	ui.label->resize(ui.label->pixmap()->size());
}