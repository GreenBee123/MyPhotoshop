#pragma once

#include <QWidget>
#include "ui_Spreadclass.h"

class Spreadclass : public QWidget
{
	Q_OBJECT

public:
	Spreadclass(QWidget *parent = Q_NULLPTR);
	~Spreadclass();

public slots:
	void spread_receiveData(QString data);

private:
	Ui::Spreadclass ui;
};
