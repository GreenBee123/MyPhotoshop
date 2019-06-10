#include "Laplacian_Operatorclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

Mat Laplacian_image, Laplacian_image_gray, Laplacian_image_dst;
string Laplacian_str;
QImage Laplacian_img2;

Laplacian_Operatorclass::Laplacian_Operatorclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Laplacian_Operatorclass::~Laplacian_Operatorclass()
{
}

void Laplacian_Operatorclass::Laplacian_Operator_receiveData(QString data)
{
	Laplacian_str = data.toStdString();
	Laplacian_image = imread(data.toStdString());
	/// Laplacian�����õ��Ĳ���
	int kernel_size = 3;
	int scale = 1;
	int delta = 0;
	int ddepth = CV_16S;
	if (!Laplacian_image.data)
		return;

	// ��ԭͼʹ��Gaussianģ����,ʹ��Kernel Size(3, 3)��ȥ������
	GaussianBlur(Laplacian_image, Laplacian_image, Size(3, 3), 0, 0, BORDER_DEFAULT);

	// ת�ɻҶ�
	cvtColor(Laplacian_image, Laplacian_image_gray, COLOR_RGB2GRAY);

	// �½�����

	// ʹ�� Laplace ����
	Mat Laplacian_image_abs_dst;

	Laplacian(Laplacian_image_gray, Laplacian_image_dst, ddepth, kernel_size,
		scale, delta, BORDER_DEFAULT);

	// Laplace ���������ת�ɾ���ֵ
	convertScaleAbs(Laplacian_image_dst, Laplacian_image_abs_dst);

	Laplacian_img2 = cvMat2QImage(Laplacian_image_abs_dst);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(Laplacian_img2));
	ui.label->resize(ui.label->pixmap()->size());
}