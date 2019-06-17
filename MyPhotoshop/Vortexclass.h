#pragma once

#include <QWidget>
#include "ui_Vortexclass.h"

class Vortexclass : public QWidget
{
	Q_OBJECT

public:
	Vortexclass(QWidget *parent = Q_NULLPTR);
	~Vortexclass();

public slots:
	void vortex_receiveData(QString data);

private:
	Ui::Vortexclass ui;
};
