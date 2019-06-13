#pragma once

#include <QWidget>
#include "ui_frozenclass.h"

class frozenclass : public QWidget
{
	Q_OBJECT

public:
	frozenclass(QWidget *parent = Q_NULLPTR);
	~frozenclass();
public slots:
	void frozen_receiveData(QString data);
	void frozen_effect();
private:
	Ui::frozenclass ui;
};
