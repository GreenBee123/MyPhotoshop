#pragma once

#include <QWidget>
#include "ui_hough_Circle_Transformationclass.h"

class hough_Circle_Transformationclass : public QWidget
{
	Q_OBJECT

public:
	hough_Circle_Transformationclass(QWidget *parent = Q_NULLPTR);
	~hough_Circle_Transformationclass();

public slots:
	void hough_Circle_Transformation_receiveData(QString data);

private:
	Ui::hough_Circle_Transformationclass ui;
};
