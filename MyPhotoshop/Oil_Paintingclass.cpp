#include "Oil_Paintingclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;
Oil_Paintingclass::Oil_Paintingclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Oil_Paintingclass::~Oil_Paintingclass()
{
}
void Oil_Paintingclass::oil_Painting_receiveData(QString data) {

	Mat gray;
	Mat image = imread(data.toStdString());
	cvtColor(image, gray, CV_BGR2GRAY);
	const int MEDIAN_BLUR_FILTER_SIZE = 7;
	medianBlur(gray, gray, MEDIAN_BLUR_FILTER_SIZE);

	Mat edges;
	const int LAPLACIAN_FILTER_SIZE = 5;
	Laplacian(gray, edges, CV_8U, LAPLACIAN_FILTER_SIZE);

	Mat mask;
	const int EDGE_THRESHOLD = 50;
	threshold(edges, mask, EDGE_THRESHOLD, 255, cv::THRESH_BINARY_INV);
	QImage simg = QImage((const unsigned char*)(mask.data), mask.cols, mask.rows,
		QImage::Format_Indexed8);

	ui.label->setPixmap(QPixmap::fromImage(simg));
	ui.label->resize(ui.label->pixmap()->size());
}