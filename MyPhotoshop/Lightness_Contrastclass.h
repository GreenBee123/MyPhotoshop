#pragma once

#include <QWidget>
#include "ui_Lightness_Contrastclass.h"

class Lightness_Contrastclass : public QWidget
{
	Q_OBJECT

public:
	Lightness_Contrastclass(QWidget *parent = Q_NULLPTR);
	~Lightness_Contrastclass();

private slots:
	void Lightness_Contrast_receiveData(QString data);
	void on_horizontalSlider_valueChanged(int alpha);
	void on_horizontalSlider_2_valueChanged(int beta);

private:
	Ui::Lightness_Contrastclass ui;
};
