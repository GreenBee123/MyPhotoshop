#pragma once

#include <QWidget>
#include "ui_Sobel_Operatorclass.h"

class Sobel_Operatorclass : public QWidget
{
	Q_OBJECT

public:
	Sobel_Operatorclass(QWidget *parent = Q_NULLPTR);
	~Sobel_Operatorclass();

public slots:
	void Sobel_Operator_receiveData(QString data);

private:
	Ui::Sobel_Operatorclass ui;
};
