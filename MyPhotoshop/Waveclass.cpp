#include "Waveclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;
using namespace std;

Waveclass::Waveclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Waveclass::~Waveclass()
{
}
double angle = 0.0;
int deltaI;	//波浪周期;
int A = 10;		//波浪振幅;
int src_width;
int src_heigh;
Mat wa_src;
Mat wa_img;
QImage wa_imgout;
QString Qstr;

void Waveclass::on_Slider_valueChanged(int value)
{
	ui.label_3->clear();
	ui.label_3->setText(QString::number(value));
	Mat wa_src = imread(Qstr.toStdString());
	angle = 0.0;
	wa_src.copyTo(wa_img);
	//src_width = wa_src.cols;
	//src_heigh = wa_src.rows;
	deltaI = value;
	for (int y = 0; y < src_heigh; y++)
	{
		int changeX = A * sin(angle);
		uchar *srcP = wa_src.ptr<uchar>(y);
		uchar *imgP = wa_img.ptr<uchar>(y);
		for (int x = 0; x < src_width; x++)
		{
			if (changeX + x < src_width && changeX + x>0)		//正弦分布（-1,1）
			{
				imgP[3 * x] = srcP[3 * (x + changeX)];
				imgP[3 * x + 1] = srcP[3 * (x + changeX) + 1];
				imgP[3 * x + 2] = srcP[3 * (x + changeX) + 2];
			}
			//每行开始和结束的空白区;
			else if (x <= changeX)
			{
				imgP[3 * x] = srcP[0];
				imgP[3 * x + 1] = srcP[1];
				imgP[3 * x + 2] = srcP[2];
			}
			else if (x >= src_width - changeX)
			{
				imgP[3 * x] = srcP[3 * (src_width - 1)];
				imgP[3 * x + 1] = srcP[3 * (src_width - 1) + 1];
				imgP[3 * x + 2] = srcP[3 * (src_width - 1) + 2];
			}
		}
		angle += ((double)deltaI) / 100;
	}
	wa_imgout = cvMat2QImage(wa_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(wa_imgout));
	ui.label->resize(ui.label->pixmap()->size());
}

void Waveclass::on_Slider_2_valueChanged(int value)
{

	ui.label_5->clear();
	ui.label_5->setText(QString::number(value));
	Mat wa_src = imread(Qstr.toStdString());
	angle = 0.0;
	wa_src.copyTo(wa_img);
	A = value;
	cout << A;
	for (int y = 0; y < src_heigh; y++)
	{
		int changeX = A * sin(angle);
		uchar *srcP = wa_src.ptr<uchar>(y);
		uchar *imgP = wa_img.ptr<uchar>(y);
		for (int x = 0; x < src_width; x++)
		{
			if (changeX + x < src_width && changeX + x>0)		//正弦分布（-1,1）
			{
				imgP[3 * x] = srcP[3 * (x + changeX)];
				imgP[3 * x + 1] = srcP[3 * (x + changeX) + 1];
				imgP[3 * x + 2] = srcP[3 * (x + changeX) + 2];
			}
			//每行开始和结束的空白区;
			else if (x <= changeX)
			{
				imgP[3 * x] = srcP[0];
				imgP[3 * x + 1] = srcP[1];
				imgP[3 * x + 2] = srcP[2];
			}
			else if (x >= src_width - changeX)
			{
				imgP[3 * x] = srcP[3 * (src_width - 1)];
				imgP[3 * x + 1] = srcP[3 * (src_width - 1) + 1];
				imgP[3 * x + 2] = srcP[3 * (src_width - 1) + 2];
			}
		}
		angle += ((double)deltaI) / 100;
	}
	wa_imgout = cvMat2QImage(wa_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(wa_imgout));
	ui.label->resize(ui.label->pixmap()->size());
}

void Waveclass::wave_receiveData(QString data) {
	Mat wa_src = imread(data.toStdString());
	Qstr = data;
	src_width = wa_src.cols;
	src_heigh = wa_src.rows;
	angle = 0.0;
	wa_src.copyTo(wa_img);

	wa_imgout = cvMat2QImage(wa_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(wa_imgout));
	ui.label->resize(ui.label->pixmap()->size());
}