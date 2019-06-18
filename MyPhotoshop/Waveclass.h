#pragma once

#include <QWidget>
#include "ui_Waveclass.h"

class Waveclass : public QWidget
{
	Q_OBJECT

public:
	Waveclass(QWidget *parent = Q_NULLPTR);
	~Waveclass();
public slots:
	void wave_receiveData(QString data);
	void on_Slider_valueChanged(int value);
	void on_Slider_2_valueChanged(int value);
private:
	Ui::Waveclass ui;
};
