#include "Image_Transformationclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

Mat image_transformation_image, image_transformation_image2, image_transformation_image3,image_transformation_image4;
QImage image_transformation_img2;
QString image_transformation_str;

Image_Transformationclass::Image_Transformationclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Image_Transformationclass::~Image_Transformationclass()
{
}

void Image_Transformationclass::on_horizontalSlider_valueChanged(int value)
{
	//image_transformation_image = imread(image_transformation_str.toStdString());
	ui.label_3->clear();
	ui.label_3->setText(QString::number((double)value / 10));
	cv::resize(image_transformation_image, image_transformation_image2, Size(), (double)value / 10, (double)value / 10);

	image_transformation_img2 = cvMat2QImage(image_transformation_image2);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Image_Transformationclass::on_horizontalSlider_2_valueChanged(int value)
{
	ui.label_4->clear();
	ui.label_4->setText(QString::number(value));

	//根据图的中心计算旋转矩阵
	Point center = Point(image_transformation_image.cols / 2, image_transformation_image.rows / 2);
	double angle = -value;
	double scale = 0.6;

	//取得旋转矩阵
	Mat rot_mat(2, 3, CV_32FC1);
	rot_mat = getRotationMatrix2D(center, angle, scale);

	//旋转图
	warpAffine(image_transformation_image, image_transformation_image3, rot_mat, image_transformation_image.size());

	image_transformation_img2 = cvMat2QImage(image_transformation_image3);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());

}

void Image_Transformationclass::on_BtnpushButton_3_clicked()
{

}

void Image_Transformationclass::on_BtnpushButton_4_clicked()
{
	image_transformation_image = imread(image_transformation_str.toStdString());
	image_transformation_img2 = cvMat2QImage(image_transformation_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Image_Transformationclass::on_radioBtn_clicked()
{
	flip(image_transformation_image, image_transformation_image4, 1);
	image_transformation_img2 = cvMat2QImage(image_transformation_image4);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Image_Transformationclass::on_radioBtn_2_clicked()
{
	flip(image_transformation_image, image_transformation_image4, 0);
	image_transformation_img2 = cvMat2QImage(image_transformation_image4);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Image_Transformationclass::on_radioBtn_3_clicked()
{
	flip(image_transformation_image, image_transformation_image4, -1);
	image_transformation_img2 = cvMat2QImage(image_transformation_image4);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Image_Transformationclass::Image_Transformation_receiveData(QString data) {
	image_transformation_str = data;
	image_transformation_image = imread(image_transformation_str.toStdString());
	image_transformation_img2 = cvMat2QImage(image_transformation_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(image_transformation_img2));
	ui.label->resize(ui.label->pixmap()->size());
}
