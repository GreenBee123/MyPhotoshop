#pragma once

#include <QWidget>
#include "ui_Blazeclass.h"

class Blazeclass : public QWidget
{
	Q_OBJECT

public:
	Blazeclass(QWidget *parent = Q_NULLPTR);
	~Blazeclass();

public slots:
	void blaze_receiveData(QString data);
private:
	Ui::Blazeclass ui;
};
