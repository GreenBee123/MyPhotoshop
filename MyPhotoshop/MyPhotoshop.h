#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_MyPhotoshop.h"
#include"QR_Codeclass.h"
#include"ScreenShotclass.h"
#include"Snow_Special_Effectsclass.h"
#include"Word_Processingclass.h"
#include"Sobel_Operatorclass.h"
#include"Laplacian_Operatorclass.h"
#include"Canny_EdgeDetectionclass.h"
#include"hough_Line_Transformationclass.h"
#include"hough_Circle_Transformationclass.h"
#include"finding_Image_Contourclass.h"
#include"Trademark_Watermarkclass.h"
#include"Image_Transformationclass.h"
#include"Lightness_Contrastclass.h"
#include"rain_Special_Effectsclass.h"
#include"castingclass.h"
#include"nostalgic_colar_class.h"
#include"comic_Strips_class.h"
#include"frozenclass.h"
#include"featherclass.h"
#include<opencv2/opencv.hpp>
#include<qtextcodec.h>
#include<qfiledialog.h>
#include<qmessagebox.h>
#include<qdebug.h>
#include<iostream>
#include<qsavefile.h>
#include<qscreen.h>
using namespace std;
using namespace cv;

void suofang(Mat & image, int & size);
void no_ImageData();
QImage cvMat2QImage(const cv::Mat& mat);
cv::Mat QImage2cvMat(QImage image);

class MyPhotoshop : public QMainWindow
{
	Q_OBJECT

public:
	MyPhotoshop(QWidget *parent = Q_NULLPTR);
	void addMenubar();
	void addConncet();
signals:
	void QR_Code_MyPhotoshop_sendData(QString);
	void ScreenShot_MyPhotoshop_sendData(QString);
	void Snow_Special_Effects_sendData(QString);
	void Word_Processing_sendData(QString);
	void Sobel_Operator_sendData(QString);
	void Laplacian_Operator_sendData(QString);
	void Canny_EdgeDetection_sendData(QString);
	void hough_Line_Transformation_sendData(QString);
	void hough_Circle_Transformation_sendData(QString);
	void finding_Image_Contour_sendData(QString);
	void trademark_Watermark_sendData(QString);
	void Image_Transformation_sendData(QString);
	void Lightness_Contrastclass_sendData(QString);
	void rain_Special_Effects_sendData(QString);
	void casting_sendData(QString);
	void nostalgic_colar_sendData(QString);
	void comic_Strips_sendData(QString);
	void frozen_sendData(QString);
	void feather_sendData(QString);

private slots:

	void OpenFile();
	void SaveFile();
	void EixtMyPhotoshop();

	void Snow_Special_Effects();
	void Rain_Special_Effects();
	void Mixing_Graphic_File();
	void Image_Transformation();
	void Histogram_Equalization();
	void Lightness_Contrast();
	void Trademark_Watermark();
	void Word_Processing();
	void Discrete_Fourier_Transform();

	void Sobel_Operator();//sobel算子
	void Laplacian_Operator();//拉普拉斯算子
	void Canny_EdgeDetection();
	void Hough_Line_Transformation();//霍夫线变换
	void Hough_Circle_Transformation();//霍夫圆变换
	void Finding_Image_Contour();//寻找图像轮廓
	void Create_RectanglesAndEllipses();//为图像建立矩阵或者椭圆形
	void Image_Moments();//图像矩


	void Gray();
	void Binaryzation();
	void Gaussion_Filter();
	void Mean_Filter();
	void Meadian_Filter();
	void Box_Filter();
	void Carve_Relief();
	void Expansion_Backlog();
	void Color_Change();
	void Radial_Blur();
	void Wave();
	void Wind();
	void Vortex();
	void Sketch();
	void Spread();
	void Nostalgic_color();
	void Comic_Strips();
	void Casting();
	void Frozen();
	void Feather();

	void Screenshot();
	void Image_EncryptionAndDecryption();
	void QR_Code();

private:
	Ui::MyPhotoshopClass ui;

	QMenu *fileMenu;//文件菜单
	QMenu *imageMenu;//编辑菜单
	QMenu *filterMenu;//滤镜菜单
	QMenu *edgeDetectionMenu;//边缘检测
	QMenu *aboratory_FunctionMenu;//实验室功能

	QAction *openFile;//打开文件
	QAction *saveFile;//保存文件
	QAction *eixtMyPhotoshop;//退出程序

	QAction *snow_Special_Effects;//下雪特效
	QAction *rain_Special_Effects;//下雨特效
	QAction *mixing_Graphic_File;//图文件混合
	QAction *image_Transformation;//图像变换
	QAction *histogram_Equalization;//直方图均衡化
	QAction *lightness_Contrast;//明度/对比度
	QAction *trademark_Watermark;//商标/水印
	QAction *word_Processing;//文字处理
	QAction *discrete_Fourier_Transform;//离散傅里叶变换

	QAction *sobel_Operator;//sobel算子
	QAction *laplacian_Operator;//拉普拉斯算子
	QAction *canny_EdgeDetection;
	QAction *hough_Line_Transformation;//霍夫线变换
	QAction *hough_Circle_Transformation;//霍夫圆变换
	QAction *finding_Image_Contour;//寻找图像轮廓
	QAction *create_RectanglesAndEllipses;//为图像建立矩阵或者椭圆形
	QAction *image_Moments;//图像矩

	QAction *gray;//灰度化
	QAction *binaryzation;//二值化
	QAction *gaussion_Filter;//高斯滤波
	QAction *mean_Filter;//均值滤波
	QAction *meadian_Filter;//中值滤波
	QAction *box_Filter;//方框滤波
	QAction *carve_Relief;//雕刻/浮雕
	QAction *expansion_Backlog;//扩张/挤压
	QAction *color_Change;//颜色变换
	QAction *radial_Blur;//径向模糊
	QAction *wave;//波浪
	QAction *wind;//风
	QAction *vortex;//漩涡
	QAction *sketch;//素描
	QAction *spread;//扩散
	QAction *nostalgic_color;//怀旧色
	QAction *comic_Strips;//连环画
	QAction *casting;//熔铸
	QAction *frozen;//冰冻
	QAction *feather;//羽化

	QAction *screenshot;//屏幕截图
	QAction *image_EncryptionAndDecryption;//图像加密/图像解密
	QAction *QR_code;//二维码检测

	QR_Codeclass *Pqr_Code = new QR_Codeclass;
	ScreenShotclass *Pscreenshot = new ScreenShotclass;
	Snow_Special_Effectsclass *Psnow_special_effects = new Snow_Special_Effectsclass;
	Word_Processingclass *Pword_processing = new Word_Processingclass;
	Sobel_Operatorclass *Psobel_operator = new Sobel_Operatorclass;
	Laplacian_Operatorclass *Plaplacian_operator = new Laplacian_Operatorclass;
	Canny_EdgeDetectionclass *Pcanny_edgedetection = new Canny_EdgeDetectionclass;
	hough_Line_Transformationclass *Phough_line_rransformation = new hough_Line_Transformationclass;
	hough_Circle_Transformationclass *Phough_circle_transformation = new hough_Circle_Transformationclass;
	finding_Image_Contourclass *Pfinding_image_contour = new finding_Image_Contourclass;
	Trademark_Watermarkclass *Ptrademark_watermark = new Trademark_Watermarkclass;
	Image_Transformationclass *Pimage_transformation = new Image_Transformationclass;
	Lightness_Contrastclass *Plightness_contrast = new Lightness_Contrastclass;
	rain_Special_Effectsclass *Prain_special_effect = new rain_Special_Effectsclass;
	castingclass*Pcasting = new castingclass;
	nostalgic_colar_class *Pnostalgic_colar = new nostalgic_colar_class;
	comic_Strips_class * Pcomic_Strips = new comic_Strips_class;
	frozenclass * Pfrozen = new frozenclass;
	featherclass * Pfeather = new featherclass;
};
