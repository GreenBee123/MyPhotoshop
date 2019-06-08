#pragma once

#include <QWidget>
#include "ui_Snow_Special_Effectsclass.h"

class Snow_Special_Effectsclass : public QWidget
{
	Q_OBJECT

public:
	Snow_Special_Effectsclass(QWidget *parent = Q_NULLPTR);
	~Snow_Special_Effectsclass();

private slots:
	void Snow_Special_Effects_receiveData(QString data);
	void on_SnowSpecialEffectsSlider_valueChanged(int value);
private:
	Ui::Snow_Special_Effectsclass ui;
};
