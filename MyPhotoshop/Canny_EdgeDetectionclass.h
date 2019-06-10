#pragma once

#include <QWidget>
#include "ui_Canny_EdgeDetectionclass.h"

class Canny_EdgeDetectionclass : public QWidget
{
	Q_OBJECT

public:
	Canny_EdgeDetectionclass(QWidget *parent = Q_NULLPTR);
	~Canny_EdgeDetectionclass();

public slots:
	void Canny_EdgeDetection_receiveData(QString data);
	void on_Canny_EdgeDetectionSlider_valueChanged(int value);
private:
	Ui::Canny_EdgeDetectionclass ui;
};
