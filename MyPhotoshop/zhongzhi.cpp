#include "zhongzhi.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
Mat src1;
QString filter ;
QString gray ;
QString twovalue ;
QString  Gaussian ;
QString  median ;
QString  mean1 ;
QString  box ;

zhongzhi::zhongzhi(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
	QTextCodec *codec = QTextCodec::codecForName("GBK"); 
	ui.comboBox->addItem(codec->toUnicode("�ҶȻ�")); 
	ui.comboBox->addItem(codec->toUnicode("��ֵ��")); 
	ui.comboBox->addItem(codec->toUnicode("��˹�˲�"));  
	ui.comboBox->addItem(codec->toUnicode("��ֵ�˲�"));  
	ui.comboBox->addItem(codec->toUnicode("��ֵ�˲�"));  
	ui.comboBox->addItem(codec->toUnicode("�����˲�"));
	
	gray = QString::fromLocal8Bit("�ҶȻ�");
	twovalue = QString::fromLocal8Bit("��ֵ��");
	Gaussian = QString::fromLocal8Bit("��˹�˲�");
	median = QString::fromLocal8Bit("��ֵ�˲�");
	mean1 = QString::fromLocal8Bit("��ֵ�˲�");
	box = QString::fromLocal8Bit("�����˲�");
}

zhongzhi::~zhongzhi()
{

}
void zhongzhi::on_horizontalSlider_valueChanged(int value)
{
	if (filter == median)
	{
		Mat dstImage;
		medianBlur(src1, dstImage, 2 * value + 1);

		QImage img3 = cvMat2QImage(dstImage);
		ui.label_4->clear();
		ui.label_4->setPixmap(QPixmap::fromImage(img3));
		ui.label_4->resize(ui.label_4->pixmap()->size());
	}
	else if (filter == Gaussian)
	{
		Mat dstImage1;
		GaussianBlur(src1, dstImage1, Size(2 * value + 1, 2 * value + 1), 0, 0);

		QImage img4 = cvMat2QImage(dstImage1);
		ui.label_4->clear();
		ui.label_4->setPixmap(QPixmap::fromImage(img4));
		ui.label_4->resize(ui.label_4->pixmap()->size());
	}
	else if (filter == mean1)
	{
		Mat blurImage;
		blur(src1, blurImage, Size(2 * value + 1, 2 * value + 1));

		QImage img4 = cvMat2QImage(blurImage);
		ui.label_4->clear();
		ui.label_4->setPixmap(QPixmap::fromImage(img4));
		ui.label_4->resize(ui.label_4->pixmap()->size());
	}
	else if (filter == box)
	{
		Mat out;
		boxFilter(src1, out, -1, Size(2 * value + 1, 2 * value + 1));

		QImage img5 = cvMat2QImage(out);
		ui.label_4->clear();
		ui.label_4->setPixmap(QPixmap::fromImage(img5));
		ui.label_4->resize(ui.label_4->pixmap()->size());
	}
}
void zhongzhi::Zhong_zhireceiveData(QString data)
{
	QString str1 = data;
	src1 = imread(str1.toStdString());


	QImage img2 = cvMat2QImage(src1);
	ui.label->clear(); 
	ui.label->setPixmap(QPixmap::fromImage(img2));  
	ui.label->resize(ui.label->pixmap()->size());

}
void zhongzhi::on_comboBox_currentTextChanged() 
{
	filter = ui.comboBox->currentText();
	if (src1.empty())
	{

	}
	else
	{
		//�ҶȻ�
		if (filter == gray)
		{
			Mat dst1;
			cvtColor(src1, dst1, CV_BGR2GRAY);  	
			QImage img2 = cvMat2QImage(dst1);  	 	
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img2));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
		else if (filter == twovalue)
		{
			Mat dst2;
			Mat image2;
			cvtColor(src1, image2, CV_BGR2GRAY);  	
			int blockSize = 25;  	 	
			int constValue = 10;  	 
			Mat local;
			adaptiveThreshold(image2, dst2, 255, CV_ADAPTIVE_THRESH_MEAN_C,
				CV_THRESH_BINARY_INV, blockSize, constValue);
			QImage img2 = cvMat2QImage(dst2);  	 	
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img2));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
		else if (filter == Gaussian)
		{
			Mat dstImage1;
			GaussianBlur(src1, dstImage1, Size(5, 5), 0, 0);

			QImage img4 = cvMat2QImage(dstImage1);
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img4));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
		//��ֵ�˲� 
		else if (filter == median)
		{
			Mat dstImage;
			medianBlur(src1, dstImage, 1);

			QImage img3 = cvMat2QImage(dstImage);
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img3));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
		//��ֵ�˲� 
		else if (filter == mean1)
		{
			Mat blurImage;
			blur(src1, blurImage, Size(3, 3));

			QImage img4 = cvMat2QImage(blurImage);
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img4));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
		//�����˲� 
		else if (filter == box)
		{
			Mat out;
			boxFilter(src1, out, -1, Size(3, 3));

			QImage img5 = cvMat2QImage(out);
			ui.label_4->clear();
			ui.label_4->setPixmap(QPixmap::fromImage(img5));
			ui.label_4->resize(ui.label_4->pixmap()->size());
		}
	}
}


