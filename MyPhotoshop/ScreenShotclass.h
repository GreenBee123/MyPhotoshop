#pragma once

#include <QWidget>
#include "ui_ScreenShotclass.h"

class ScreenShotclass : public QWidget
{
	Q_OBJECT

public:
	ScreenShotclass(QWidget *parent = Q_NULLPTR);
	~ScreenShotclass();

private slots:
	void ScreenShot_receiveData(QString data);

private:
	Ui::ScreenShotclass ui;
};
