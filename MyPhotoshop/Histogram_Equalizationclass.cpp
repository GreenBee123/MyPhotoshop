#include "Histogram_Equalizationclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#define e 2.71828182845
using namespace cv;

Mat histogram_image, histogram_dst;
QImage histogram_img2;
QString histogram_Qstr;

Histogram_Equalizationclass::Histogram_Equalizationclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Histogram_Equalizationclass::~Histogram_Equalizationclass()
{

}

void Histogram_Equalizationclass::histogram_print(Mat src)
{
	Mat dst;

	//加载图形文件

	//分开图的三个色屏( B, G and R )
	vector<Mat> bgr_planes;
	split(src, bgr_planes);

	//设置bins
	int histSize = 256;

	//设置颜色范为值 ( B,G,R )
	float range[] = { 0, 256 };
	const float* histRange = { range };

	bool uniform = true; bool accumulate = false;

	Mat b_hist, g_hist, r_hist;

	//计算色阶分布图(histograms):
	calcHist(&bgr_planes[0], 1, 0, Mat(), b_hist,
		1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[1], 1, 0, Mat(), g_hist,
		1, &histSize, &histRange, uniform, accumulate);
	calcHist(&bgr_planes[2], 1, 0, Mat(), r_hist,
		1, &histSize, &histRange, uniform, accumulate);

	//Draw the histograms for B, G and R
	int hist_w = 512; int hist_h = 400;
	int bin_w = cvRound((double)hist_w / histSize);

	Mat histImage(hist_h, hist_w, CV_8UC3, Scalar(0, 0, 0));

	//Normalize the result to [ 0, histImage.rows ]
	normalize(b_hist, b_hist, 0, histImage.rows,
		NORM_MINMAX, -1, Mat());
	normalize(g_hist, g_hist, 0, histImage.rows,
		NORM_MINMAX, -1, Mat());
	normalize(r_hist, r_hist, 0, histImage.rows,
		NORM_MINMAX, -1, Mat());

	//Draw for each channel
	for (int i = 1; i < histSize; i++)
	{
		line(histImage, Point(bin_w*(i - 1),
			hist_h - cvRound(b_hist.at<float>(i - 1))),
			Point(bin_w*(i), hist_h - cvRound(b_hist.at<float>(i))),
			Scalar(255, 0, 0), 2, 8, 0);
		line(histImage, Point(bin_w*(i - 1),
			hist_h - cvRound(g_hist.at<float>(i - 1))),
			Point(bin_w*(i), hist_h - cvRound(g_hist.at<float>(i))),
			Scalar(0, 255, 0), 2, 8, 0);
		line(histImage, Point(bin_w*(i - 1),
			hist_h - cvRound(r_hist.at<float>(i - 1))),
			Point(bin_w*(i), hist_h - cvRound(r_hist.at<float>(i))),
			Scalar(0, 0, 255), 2, 8, 0);
	}
	histogram_img2 = cvMat2QImage(histImage);
	ui.label_3->clear();
	ui.label_3->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label_3->resize(ui.label->pixmap()->size());
}



void Histogram_Equalizationclass::on_radioBtn_clicked()
{
	Mat imageRGB[3];

	split(histogram_image, imageRGB);

	for (int i = 0; i < 3; i++)
	{
		equalizeHist(imageRGB[i], imageRGB[i]);
	}
	merge(imageRGB, 3, histogram_image);

	histogram_print(histogram_image);

	histogram_img2 = cvMat2QImage(histogram_image);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Histogram_Equalizationclass::on_radioBtn_2_clicked()
{
	Mat imageEnhance;

	Mat kernel = (Mat_<float>(3, 3) << 0, -1, 0, 0, 5, 0, 0, -1, 0);

	filter2D(histogram_image, imageEnhance, CV_8UC3, kernel);
	histogram_print(imageEnhance);
	histogram_img2 = cvMat2QImage(imageEnhance);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Histogram_Equalizationclass::on_radioBtn_3_clicked()
{
	Mat imageLog(histogram_image.size(), CV_32FC3);
	for (int i = 0; i < histogram_image.rows; i++) {
		for (int j = 0; j < histogram_image.cols; j++) {
			imageLog.at<Vec3f>(i, j)[0] = log(1 + histogram_image.at<Vec3b>(i, j)[0]);
			imageLog.at<Vec3f>(i, j)[1] = log(1 + histogram_image.at<Vec3b>(i, j)[1]);
			imageLog.at<Vec3f>(i, j)[2] = log(1 + histogram_image.at<Vec3b>(i, j)[2]);
		}
	}
	//归一化到0~255
	normalize(imageLog, imageLog, 0, 255, CV_MINMAX);
	//转换成8bit图像显示
	convertScaleAbs(imageLog, imageLog);
	histogram_print(imageLog);
	histogram_img2 = cvMat2QImage(imageLog);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());

}

void Histogram_Equalizationclass::on_radioBtn_4_clicked()
{
	Mat imageGamma(histogram_image.size(), CV_32FC3);
	for (int i = 0; i < histogram_image.rows; i++) {
		for (int j = 0; j < histogram_image.cols; j++) {
			imageGamma.at<Vec3f>(i, j)[0] = (histogram_image.at<Vec3b>(i, j)[0])*(histogram_image.at<Vec3b>(i, j)[0])*(histogram_image.at<Vec3b>(i, j)[0]);
			imageGamma.at<Vec3f>(i, j)[1] = (histogram_image.at<Vec3b>(i, j)[1])*(histogram_image.at<Vec3b>(i, j)[1])*(histogram_image.at<Vec3b>(i, j)[1]);
			imageGamma.at<Vec3f>(i, j)[2] = (histogram_image.at<Vec3b>(i, j)[2])*(histogram_image.at<Vec3b>(i, j)[2])*(histogram_image.at<Vec3b>(i, j)[2]);
		}
	}
	//归一化到0~255
	normalize(imageGamma, imageGamma, 0, 255, CV_MINMAX);	//转换成8bit图像显示
	convertScaleAbs(imageGamma, imageGamma);
	histogram_print(imageGamma);
	histogram_img2 = cvMat2QImage(imageGamma);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Histogram_Equalizationclass::on_radioBtn_5_clicked()
{
	histogram_image = imread(histogram_Qstr.toStdString());
	int height = histogram_image.rows;
	int width = histogram_image.cols;
	//浮点变换
	Mat fimg(height, width, CV_32FC3);
	histogram_image.convertTo(fimg, CV_32FC3, 1 / 255.0);
	//将修改后的像素值放入另一个图片中
	Mat fimg2(height, width, CV_32FC3);
	for (int row = 0; row < height; row++) {
		for (int col = 0; col < width; col++)
		{
			fimg2.at<Vec3f>(row, col)[0] = float(pow(fimg.at<Vec3f>(row, col)[0], e));
			fimg2.at<Vec3f>(row, col)[1] = float(pow(fimg.at<Vec3f>(row, col)[1], e));
			fimg2.at<Vec3f>(row, col)[2] = float(pow(fimg.at<Vec3f>(row, col)[2], e));
		}
	}
	normalize(fimg2, fimg2, 0, 255, CV_MINMAX);	//转换成8bit图像显示
	convertScaleAbs(fimg2, fimg2);
	histogram_print(fimg2);
	histogram_img2 = cvMat2QImage(fimg2);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Histogram_Equalizationclass::on_radioBtn_6_clicked()
{
	int R = 5;
	int width = histogram_image.cols;
	int heigh = histogram_image.rows;
	Mat histogram_img;
	histogram_image.copyTo(histogram_img);
	Mat histogram_avg;
	//GaussianBlur(img,avg,Size(R,R),0.0);
	blur(histogram_img, histogram_avg, Size(R, R));
	Mat histogram_dst(histogram_img.size(), CV_8UC3);
	float tmp;
	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = histogram_img.ptr<uchar>(y);
		uchar* avgP = histogram_avg.ptr<uchar>(y);
		uchar* dstP = histogram_dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			float r0 = ((float)imgP[3 * x] - (float)avgP[3 * x]);
			tmp = 128 + abs(r0)*r0 / (2 * R);
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x] = (uchar)(tmp);
			float r1 = ((float)imgP[3 * x + 1] - (float)avgP[3 * x + 1]);
			tmp = 128 + abs(r1)*r1 / (2 * R);
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x + 1] = (uchar)(tmp);
			float r2 = ((float)imgP[3 * x + 2] - (float)avgP[3 * x + 2]);
			tmp = 128 + abs(r2)*r2 / (2 * R);
			tmp = tmp > 255 ? 255 : tmp;
			tmp = tmp < 0 ? 0 : tmp;
			dstP[3 * x + 2] = (uchar)(tmp);
		}
	}
	histogram_print(histogram_dst);
	histogram_img2 = cvMat2QImage(histogram_dst);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());

}

void Histogram_Equalizationclass::on_radioBtn_7_clicked()
{
	Mat Image_out(histogram_image.size(), CV_32FC3);
	histogram_image.convertTo(Image_out, CV_32FC3);

	int nrows = histogram_image.rows;
	int ncols = histogram_image.cols;

	Image_out = -1 * histogram_image + 255;

	cv::min(histogram_image, Image_out, Image_out);
	normalize(Image_out, Image_out, 0, 255, CV_MINMAX);	//转换成8bit图像显示
	convertScaleAbs(Image_out, Image_out);
	histogram_print(Image_out);
	histogram_img2 = cvMat2QImage(Image_out);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}

void Histogram_Equalizationclass::Histogram_Equalization_receiveData(QString data) {
	histogram_image = imread(data.toStdString());
	histogram_Qstr = data;


	histogram_img2 = cvMat2QImage(histogram_image);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(histogram_img2));
	ui.label->resize(ui.label->pixmap()->size());
}