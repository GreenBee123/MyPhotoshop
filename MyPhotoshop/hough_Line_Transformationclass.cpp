#include "hough_Line_Transformationclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

//声明全局变量
Mat hough_Line_src, hough_Line_edges;
Mat hough_Line_src_gray;
Mat hough_Line_standard_hough, hough_Line_probabilistic_hough;
string hough_Line_str;
QImage hough_Line_img2;
int hough_Line_min_threshold = 50;
int hough_Line_max_trackbar = 150;
int s_trackbar = hough_Line_max_trackbar;
int p_trackbar = hough_Line_max_trackbar;


hough_Line_Transformationclass::hough_Line_Transformationclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

hough_Line_Transformationclass::~hough_Line_Transformationclass()
{
}

void hough_Line_Transformationclass::on_Canny_EdgeDetectionSlider_valueChanged(int value)
{
	ui.label_3->clear();
	ui.label_3->setText(QString::number(value));

	vector<Vec4i> p_lines;
	cvtColor(hough_Line_edges, hough_Line_probabilistic_hough, CV_GRAY2BGR);

	HoughLinesP(hough_Line_edges, p_lines, 1, CV_PI / 180,
		value + p_trackbar, 30, 10);

	/// 2. 用机率的 Hough 转换
	for (size_t i = 0; i < p_lines.size(); i++)
	{
		Vec4i l = p_lines[i];
		line(hough_Line_probabilistic_hough, Point(l[0], l[1]),
			Point(l[2], l[3]), Scalar(255, 0, 0), 3, CV_AA);
	}

	hough_Line_img2 = cvMat2QImage(hough_Line_probabilistic_hough);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(hough_Line_img2));
	ui.label->resize(ui.label->pixmap()->size());
}


void hough_Line_Transformationclass::hough_Line_Transformation_receiveData(QString data) {

	hough_Line_src = imread(data.toStdString());

	if (!hough_Line_src.data)
		return;

	// 转成灰度
	cvtColor(hough_Line_src, hough_Line_src_gray, COLOR_RGB2GRAY);

	// 用 Canny 座图边检测
	Canny(hough_Line_src_gray, hough_Line_edges, 50, 200, 3);


	hough_Line_img2 = cvMat2QImage(hough_Line_edges);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(hough_Line_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

