#pragma once

#include <QWidget>
#include "ui_Oil_Paintingclass.h"

class Oil_Paintingclass : public QWidget
{
	Q_OBJECT

public:
	Oil_Paintingclass(QWidget *parent = Q_NULLPTR);
	~Oil_Paintingclass();
public slots:
	void oil_Painting_receiveData(QString data);
private:
	Ui::Oil_Paintingclass ui;
};
