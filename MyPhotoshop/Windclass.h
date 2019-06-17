#pragma once

#include <QWidget>
#include "ui_Windclass.h"

class Windclass : public QWidget
{
	Q_OBJECT

public:
	Windclass(QWidget *parent = Q_NULLPTR);
	~Windclass();

public slots:
	void wind_receiveData(QString data);

private:
	Ui::Windclass ui;
};
