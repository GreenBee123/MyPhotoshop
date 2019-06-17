#pragma once

#include <QWidget>
#include "ui_Sketchclass.h"

class Sketchclass : public QWidget
{
	Q_OBJECT

public:
	Sketchclass(QWidget *parent = Q_NULLPTR);
	~Sketchclass();

public slots:
	void sketch_receiveData(QString data);

private:
	Ui::Sketchclass ui;
};
