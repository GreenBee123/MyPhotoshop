#pragma once

#include <QWidget>
#include "ui_Image_Transformationclass.h"

class Image_Transformationclass : public QWidget
{
	Q_OBJECT

public:
	Image_Transformationclass(QWidget *parent = Q_NULLPTR);
	~Image_Transformationclass();

private slots:
	void Image_Transformation_receiveData(QString data);
	void on_horizontalSlider_valueChanged(int value);
	void on_horizontalSlider_2_valueChanged(int value);
	void on_BtnpushButton_3_clicked();
	void on_BtnpushButton_4_clicked();
	void on_radioBtn_clicked();
	void on_radioBtn_2_clicked();
	void on_radioBtn_3_clicked();


private:
	Ui::Image_Transformationclass ui;
};
