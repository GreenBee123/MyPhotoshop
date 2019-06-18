#pragma once

#include <QWidget>
#include "ui_histogramclass.h"

class histogramclass : public QWidget
{
	Q_OBJECT

public:
	histogramclass(QWidget *parent = Q_NULLPTR);
	~histogramclass();

private:
	Ui::histogramclass ui;
};
