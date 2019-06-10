#include "Sobel_Operatorclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

Mat Sobel_image, Sobel_image_gray, Sobel_image_grad;
string Sobel_str;
QImage Sobel_img2;

Sobel_Operatorclass::Sobel_Operatorclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Sobel_Operatorclass::~Sobel_Operatorclass()
{

}


void Sobel_Operatorclass::Sobel_Operator_receiveData(QString data) {
	// Sobel函数用到的参数
	int scale = 1;
	int delta = 0;
	int ddepth = CV_16S;

	Sobel_str = data.toStdString();
	Sobel_image = imread(data.toStdString());
	
	if (!Sobel_image.data)
		return;

	// 于原图使用Gaussian模糊法,使用Kernel Size(3, 3)先去除噪声
	GaussianBlur(Sobel_image, Sobel_image, Size(3, 3), 0, 0, BORDER_DEFAULT);

	/// 转换成灰度
	cvtColor(Sobel_image, Sobel_image_gray, COLOR_RGB2GRAY);

	/// 建立 grad_x 与 grad_y
	Mat grad_x, grad_y;
	Mat abs_grad_x, abs_grad_y;

	/// 倾斜度 (Gradient) X
	/*
	Scharr( src_gray, grad_x, ddepth, 1, 0,
		scale, delta, BORDER_DEFAULT );
	*/
	Sobel(Sobel_image_gray, grad_x, ddepth, 1, 0, 3,
		scale, delta, BORDER_DEFAULT);
	/*
	int kernel_size = 3;
	Laplacian(src_gray, grad_x, ddepth, kernel_size, scale, delta, BORDER_DEFAULT);
	*/
	/// 转成绝对值8位图像
	convertScaleAbs(grad_x, abs_grad_x);

	/// 倾斜度 Y
	/*
	Scharr( src_gray, grad_y, ddepth, 0, 1,
		scale, delta, BORDER_DEFAULT );
	*/

	Sobel(Sobel_image_gray, grad_y, ddepth, 0, 1, 3,
		scale, delta, BORDER_DEFAULT);
	/*
	Laplacian(src_gray, grad_y, ddepth, kernel_size, scale, delta, BORDER_DEFAULT);
	*/

	convertScaleAbs(grad_y, abs_grad_y);

	// 总倾斜度 (大约的)
	addWeighted(abs_grad_x, 0.5, abs_grad_y, 0.5, 0, Sobel_image_grad);
	
	Sobel_img2 = cvMat2QImage(Sobel_image_grad);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Sobel_img2));
	ui.label->resize(ui.label->pixmap()->size());
}