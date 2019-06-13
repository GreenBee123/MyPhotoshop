#include "rain_Special_Effectsclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

Mat rain_Special_image1, rain_Special_image2, rain_Special_image3;
QImage rain_Special_img2;

rain_Special_Effectsclass::rain_Special_Effectsclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

rain_Special_Effectsclass::~rain_Special_Effectsclass()
{

}

void rain_Special_Effectsclass::rain_Special_Effects_receiveData(QString data) {
	rain_Special_image1 = imread(data.toStdString());
	rain_Special_image2 = imread("rain.jpg");
	// ��image2ͼ���С����image1ͼ���С
	cv::resize(rain_Special_image2, rain_Special_image3, rain_Special_image1.size());

	// ������Чͼ
	Mat result;

	rain_Special_image3 = rain_Special_image3 * 0.3;
	rain_Special_image1 = rain_Special_image1 * 0.9;
	add(rain_Special_image1, rain_Special_image3, result);

	rain_Special_img2 = cvMat2QImage(result);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(rain_Special_img2));
	ui.label->resize(ui.label->pixmap()->size());
}