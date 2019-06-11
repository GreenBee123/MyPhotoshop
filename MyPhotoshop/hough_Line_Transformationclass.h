#pragma once

#include <QWidget>
#include "ui_hough_Line_Transformationclass.h"

class hough_Line_Transformationclass : public QWidget
{
	Q_OBJECT

public:
	hough_Line_Transformationclass(QWidget *parent = Q_NULLPTR);
	~hough_Line_Transformationclass();

public slots:
	void hough_Line_Transformation_receiveData(QString data);
	void on_Canny_EdgeDetectionSlider_valueChanged(int value);

private:
	Ui::hough_Line_Transformationclass ui;
};
