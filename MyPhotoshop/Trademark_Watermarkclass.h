#pragma once

#include <QWidget>
#include "ui_Trademark_Watermarkclass.h"

class Trademark_Watermarkclass : public QWidget
{
	Q_OBJECT

public:
	Trademark_Watermarkclass(QWidget *parent = Q_NULLPTR);
	~Trademark_Watermarkclass();

private slots:
	void Trademark_Watermark_receiveData(QString data);
	void on_BtnpushButton_3_clicked();
	void on_BtnpushButton_4_clicked();



private:
	Ui::Trademark_Watermarkclass ui;
};
