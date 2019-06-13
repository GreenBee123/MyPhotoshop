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

	void Sobel_Operator();//sobel����
	void Laplacian_Operator();//������˹����
	void Canny_EdgeDetection();
	void Hough_Line_Transformation();//�����߱任
	void Hough_Circle_Transformation();//����Բ�任
	void Finding_Image_Contour();//Ѱ��ͼ������
	void Create_RectanglesAndEllipses();//Ϊͼ�������������Բ��
	void Image_Moments();//ͼ���


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

	QMenu *fileMenu;//�ļ��˵�
	QMenu *imageMenu;//�༭�˵�
	QMenu *filterMenu;//�˾��˵�
	QMenu *edgeDetectionMenu;//��Ե���
	QMenu *aboratory_FunctionMenu;//ʵ���ҹ���

	QAction *openFile;//���ļ�
	QAction *saveFile;//�����ļ�
	QAction *eixtMyPhotoshop;//�˳�����

	QAction *snow_Special_Effects;//��ѩ��Ч
	QAction *rain_Special_Effects;//������Ч
	QAction *mixing_Graphic_File;//ͼ�ļ����
	QAction *image_Transformation;//ͼ��任
	QAction *histogram_Equalization;//ֱ��ͼ���⻯
	QAction *lightness_Contrast;//����/�Աȶ�
	QAction *trademark_Watermark;//�̱�/ˮӡ
	QAction *word_Processing;//���ִ���
	QAction *discrete_Fourier_Transform;//��ɢ����Ҷ�任

	QAction *sobel_Operator;//sobel����
	QAction *laplacian_Operator;//������˹����
	QAction *canny_EdgeDetection;
	QAction *hough_Line_Transformation;//�����߱任
	QAction *hough_Circle_Transformation;//����Բ�任
	QAction *finding_Image_Contour;//Ѱ��ͼ������
	QAction *create_RectanglesAndEllipses;//Ϊͼ�������������Բ��
	QAction *image_Moments;//ͼ���

	QAction *gray;//�ҶȻ�
	QAction *binaryzation;//��ֵ��
	QAction *gaussion_Filter;//��˹�˲�
	QAction *mean_Filter;//��ֵ�˲�
	QAction *meadian_Filter;//��ֵ�˲�
	QAction *box_Filter;//�����˲�
	QAction *carve_Relief;//���/����
	QAction *expansion_Backlog;//����/��ѹ
	QAction *color_Change;//��ɫ�任
	QAction *radial_Blur;//����ģ��
	QAction *wave;//����
	QAction *wind;//��
	QAction *vortex;//����
	QAction *sketch;//����
	QAction *spread;//��ɢ
	QAction *nostalgic_color;//����ɫ
	QAction *comic_Strips;//������
	QAction *casting;//����
	QAction *frozen;//����
	QAction *feather;//��

	QAction *screenshot;//��Ļ��ͼ
	QAction *image_EncryptionAndDecryption;//ͼ�����/ͼ�����
	QAction *QR_code;//��ά����

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
