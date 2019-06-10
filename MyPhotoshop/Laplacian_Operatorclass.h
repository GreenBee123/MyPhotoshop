#pragma once

#include <QWidget>
#include "ui_Laplacian_Operatorclass.h"

class Laplacian_Operatorclass : public QWidget
{
	Q_OBJECT

public:
	Laplacian_Operatorclass(QWidget *parent = Q_NULLPTR);
	~Laplacian_Operatorclass();

public slots:
	void Laplacian_Operator_receiveData(QString data);

private:
	Ui::Laplacian_Operatorclass ui;
};
