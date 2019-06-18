#pragma once

#include <QWidget>
#include "ui_Hue_Saturationclass.h"

class Hue_Saturationclass : public QWidget
{
	Q_OBJECT

public:
	Hue_Saturationclass(QWidget *parent = Q_NULLPTR);
	~Hue_Saturationclass();
public slots:
	void hue_saturation_receiveData(QString data);
	void on_Slider_valueChanged(int value);

private:
	Ui::Hue_Saturationclass ui;
};
