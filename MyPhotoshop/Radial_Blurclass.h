#pragma once

#include <QWidget>
#include "ui_Radial_Blurclass.h"

class Radial_Blurclass : public QWidget
{
	Q_OBJECT

public:
	Radial_Blurclass(QWidget *parent = Q_NULLPTR);
	~Radial_Blurclass();
public slots:
	void radial_Blur_receiveData(QString data);
private:
	Ui::Radial_Blurclass ui;
};
