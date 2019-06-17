#include "Windclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
using namespace std;

QImage Wind_img2;

Windclass::Windclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Windclass::~Windclass()
{
}

void Windclass::wind_receiveData(QString data) {
	int num = 10;//	num：风线密度
	int num1 = 20;//	num1：风线长度
	Mat Wind_img = imread(data.toStdString());
	Mat src = imread(data.toStdString());
	Mat src1u[3];
	split(src, src1u);

	int width = src.cols;
	int heigh = src.rows;
	src.copyTo(Wind_img);

	Point center(width / 2, heigh / 2);

	RNG rng;
	for (int y = 0; y < heigh; y++)
	{

		uchar *imgP = Wind_img.ptr<uchar>(y);

		for (int x=0; x<width; x++)
		{

			for (int i = 0; i < num; i++)		//	num：风线密度
			{
				int newX = rng.uniform(i*width / num, (i + 1)*width / num);
				int newY = y;

				if (newX < 0)newX = 0;
				if (newX > width - 1)newX = width - 1;

				uchar tmp0 = src1u[0].at<uchar>(newY, newX);
				uchar tmp1 = src1u[1].at<uchar>(newY, newX);
				uchar tmp2 = src1u[2].at<uchar>(newY, newX);

				for (int j = 0; j < num1; j++)	//num1：风线长度
				{
					int tmpX = newX - j;//减：风向左；加：风向右

					if (tmpX < 0)tmpX = 0;
					if (tmpX > width - 1)tmpX = width - 1;

					imgP[tmpX * 3] = tmp0;
					imgP[tmpX * 3 + 1] = tmp1;
					imgP[tmpX * 3 + 2] = tmp2;
				}
			}

		}

	}



	Wind_img2 = cvMat2QImage(Wind_img);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Wind_img2));
	ui.label->resize(ui.label->pixmap()->size());
}
