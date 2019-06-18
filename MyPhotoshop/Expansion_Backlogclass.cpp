#include "Expansion_Backlogclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include <math.h>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>

Expansion_Backlogclass::Expansion_Backlogclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Expansion_Backlogclass::~Expansion_Backlogclass()
{
}

void Expansion_Backlogclass::expansion_Backlog_receiveData(QString data) {
	Mat src = imread(data.toStdString());
	int width = src.cols;
	int heigh = src.rows;
	Point center(width / 2, heigh / 2);
	Mat ex_ba_img1(src.size(), CV_8UC3);
	Mat ex_ba_img2(src.size(), CV_8UC3);
	src.copyTo(ex_ba_img1);
	src.copyTo(ex_ba_img2);

	//【1】放大
	int R1 = sqrtf(width*width + heigh * heigh) / 2; //直接关系到放大的力度,与R1成正比;

	for (int y = 0; y < heigh; y++)
	{
		uchar *img1_p = ex_ba_img1.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			int dis = norm(Point(x, y) - center);
			if (dis < R1)
			{
				int newX = (x - center.x)*dis / R1 + center.x;
				int newY = (y - center.y)*dis / R1 + center.y;

				img1_p[3 * x] = src.at<uchar>(newY, newX * 3);
				img1_p[3 * x + 1] = src.at<uchar>(newY, newX * 3 + 1);
				img1_p[3 * x + 2] = src.at<uchar>(newY, newX * 3 + 2);
			}
		}
	}

	//【2】挤压
	for (int y = 0; y < heigh; y++)
	{
		uchar *img2_p = ex_ba_img2.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			double theta = atan2((double)(y - center.y), (double)(x - center.x));//使用atan出现问题~


			int R2 = sqrtf(norm(Point(x, y) - center)) * 8; //直接关系到挤压的力度，与R2成反比;

			int newX = center.x + (int)(R2*cos(theta));

			int newY = center.y + (int)(R2*sin(theta));

			if (newX < 0) newX = 0;
			else if (newX >= width) newX = width - 1;
			if (newY < 0) newY = 0;
			else if (newY >= heigh) newY = heigh - 1;


			img2_p[3 * x] = src.at<uchar>(newY, newX * 3);
			img2_p[3 * x + 1] = src.at<uchar>(newY, newX * 3 + 1);
			img2_p[3 * x + 2] = src.at<uchar>(newY, newX * 3 + 2);
		}
	}


	QImage ex_ba_imgout = cvMat2QImage(ex_ba_img1);
	QImage ex_ba_imgout2 = cvMat2QImage(ex_ba_img2);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(ex_ba_imgout));
	ui.label->resize(ui.label->pixmap()->size());
	ui.label_2->clear();
	ui.label_2->setPixmap(QPixmap::fromImage(ex_ba_imgout2));
	ui.label_2->resize(ui.label->pixmap()->size());
}
