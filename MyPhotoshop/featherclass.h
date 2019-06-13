#pragma once

#include <QWidget>
#include "ui_featherclass.h"

class featherclass : public QWidget
{
	Q_OBJECT

public:
	featherclass(QWidget *parent = Q_NULLPTR);
	~featherclass();

public slots:
	void feather_receiveData(QString data);
	void on_featherhorizontalSlider_valueChanged(int value);

private:
	Ui::featherclass ui;
};
