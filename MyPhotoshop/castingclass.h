#pragma once

#include <QWidget>
#include "ui_castingclass.h"
#include<opencv2/core/core.hpp>
class castingclass : public QWidget
{
	Q_OBJECT

public:
	castingclass(QWidget *parent = Q_NULLPTR);
	~castingclass();
	void casting_effect();
public slots:
	void casting_receiveData(QString data);
	
private:
	Ui::castingclass ui;
};
