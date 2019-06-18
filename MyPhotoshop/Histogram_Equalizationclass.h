#pragma once

#include <QWidget>
#include "ui_Histogram_Equalizationclass.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
using namespace cv;

class Histogram_Equalizationclass : public QWidget
{
	Q_OBJECT

public:
	Histogram_Equalizationclass(QWidget *parent = Q_NULLPTR);
	~Histogram_Equalizationclass();
	void histogram_print(Mat src);

private slots:
	void Histogram_Equalization_receiveData(QString data);
	void on_radioBtn_clicked();
	void on_radioBtn_2_clicked();
	void on_radioBtn_3_clicked();
	void on_radioBtn_4_clicked();
	void on_radioBtn_5_clicked();
	void on_radioBtn_6_clicked();
	void on_radioBtn_7_clicked();

private:
	Ui::Histogram_Equalizationclass ui;
};
