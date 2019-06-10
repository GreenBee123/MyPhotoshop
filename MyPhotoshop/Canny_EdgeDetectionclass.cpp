#include "Canny_EdgeDetectionclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

Mat Canny_src, Canny_src_gray;
Mat Canny_dst, Canny_detected_edges;
string Canny_str;
QImage Canny_img2;

int edgeThresh = 1;
int lowThreshold;
int const max_lowThreshold = 100;
int ratio = 3;
int kernel_size = 3;

Canny_EdgeDetectionclass::Canny_EdgeDetectionclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Canny_EdgeDetectionclass::~Canny_EdgeDetectionclass()
{

}

void Canny_EdgeDetectionclass::on_Canny_EdgeDetectionSlider_valueChanged(int value)
{

	ui.label_3->clear();
	ui.label_3->setText(QString::number(value));

	blur(Canny_src_gray, Canny_detected_edges, Size(3, 3));

	/// Canny 检测器
	Canny(Canny_detected_edges, Canny_detected_edges, value,
		value*3, kernel_size);

	/// 用 Canny 的输出作掩码, 
	Canny_dst = Scalar::all(0);

	/// 将src以detected_edges为掩码复制到dst
	Canny_src.copyTo(Canny_dst, Canny_detected_edges);

	Canny_img2 = cvMat2QImage(Canny_dst);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Canny_img2));
	ui.label->resize(ui.label->pixmap()->size());
	//imshow("123", Canny_dst);
}

void Canny_EdgeDetectionclass::Canny_EdgeDetection_receiveData(QString data) {
	Canny_str = data.toStdString();
	Canny_src = imread(data.toStdString());
	Canny_dst.create(Canny_src.size(), Canny_src.type());
	cvtColor(Canny_src, Canny_src_gray, COLOR_BGR2GRAY);

	Canny_img2 = cvMat2QImage(Canny_src);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Canny_img2));
	ui.label->resize(ui.label->pixmap()->size());
}
