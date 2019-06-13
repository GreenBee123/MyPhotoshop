#pragma once

#include <QWidget>
#include "ui_rain_Special_Effectsclass.h"

class rain_Special_Effectsclass : public QWidget
{
	Q_OBJECT

public:
	rain_Special_Effectsclass(QWidget *parent = Q_NULLPTR);
	~rain_Special_Effectsclass();

public slots:
	void rain_Special_Effects_receiveData(QString data);

private:
	Ui::rain_Special_Effectsclass ui;
};
