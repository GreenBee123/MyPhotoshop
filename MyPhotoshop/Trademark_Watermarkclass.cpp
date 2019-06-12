#include "Trademark_Watermarkclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include<vector>
using namespace cv;

Mat Trademark_Watermark_image, 
Trademark_Watermark_logo, 
Trademark_Watermark_imageROI;

QString watermark_filename, watermark_str;
string watermark_name;
QImage watermark_image2, Trademark_Watermark_img2;


Trademark_Watermarkclass::Trademark_Watermarkclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Trademark_Watermarkclass::~Trademark_Watermarkclass()
{

}

void Trademark_Watermarkclass::on_BtnpushButton_3_clicked()
{
	watermark_filename = QFileDialog::getOpenFileName(this, tr("Open Image"), "", tr("Image File(*.bmp *.jpg *.jpeg *.png)"));
	QTextCodec *code = QTextCodec::codecForName("gb18030");
	watermark_name = code->fromUnicode(watermark_filename.data());
	Trademark_Watermark_logo = imread(/*filename.toLocal8Bit().data()*/watermark_name);
	if (!Trademark_Watermark_logo.data) {
		QMessageBox box(QMessageBox::Warning, QString::fromLocal8Bit("提示"), QStringLiteral("请选择图像！"));
		box.setStandardButtons(QMessageBox::Ok);
		box.setButtonText(QMessageBox::Ok, QString::fromLocal8Bit("确定"));
		box.exec();
	}
	else {
		int size2 = 600;
		//suofang(image, size2);
		cvtColor(Trademark_Watermark_logo, Trademark_Watermark_logo, CV_BGR2RGB);
		watermark_image2 = QImage((const unsigned char*)(Trademark_Watermark_logo.data), Trademark_Watermark_logo.cols, Trademark_Watermark_logo.rows, Trademark_Watermark_logo.cols*Trademark_Watermark_logo.channels(), QImage::Format_RGB888);
		ui.label_3->clear();
		ui.label_3->setPixmap(QPixmap::fromImage(watermark_image2));
		ui.label_3->resize(ui.label_3->pixmap()->size());
	
	}
}

void Trademark_Watermarkclass::on_BtnpushButton_4_clicked()
{
	Trademark_Watermark_image = imread(watermark_str.toStdString());
	//编译器要求使用前要给初始值
	Mat Trademark_Watermark_iamge1 = Trademark_Watermark_image, opencvlogo;
	// 缩小原图成Size(80, 64)
	cv::resize(Trademark_Watermark_logo, opencvlogo, Size((ui.textEdit->toPlainText()).toInt(), (ui.textEdit_2->toPlainText()).toInt()));

	// Rect(x, y, col, row)
	Trademark_Watermark_imageROI = Trademark_Watermark_iamge1(Rect((ui.textEdit_3->toPlainText()).toInt(), (ui.textEdit_4->toPlainText()).toInt(), (ui.textEdit->toPlainText()).toInt(), (ui.textEdit_2->toPlainText()).toInt()));

	// 加入商标
	addWeighted(Trademark_Watermark_imageROI, 1.0, opencvlogo, 0.3, 0., Trademark_Watermark_imageROI);

	Trademark_Watermark_img2 = cvMat2QImage(Trademark_Watermark_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Trademark_Watermark_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void  Trademark_Watermarkclass::Trademark_Watermark_receiveData(QString data) {

	watermark_str = data;
	Trademark_Watermark_image = imread(watermark_str.toStdString());
	Trademark_Watermark_img2 = cvMat2QImage(Trademark_Watermark_image);

	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Trademark_Watermark_img2));
	ui.label->resize(ui.label->pixmap()->size());
}