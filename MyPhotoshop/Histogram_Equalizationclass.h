#pragma once

#include <QWidget>
#include "ui_Histogram_Equalizationclass.h"

class Histogram_Equalizationclass : public QWidget
{
	Q_OBJECT

public:
	Histogram_Equalizationclass(QWidget *parent = Q_NULLPTR);
	~Histogram_Equalizationclass();

private:
	Ui::Histogram_Equalizationclass ui;
};
