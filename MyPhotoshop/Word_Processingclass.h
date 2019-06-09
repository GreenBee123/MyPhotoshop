#pragma once

#include <QWidget>
#include "ui_Word_Processingclass.h"
#include<qlabel.h>

class Word_Processingclass : public QWidget
{
	Q_OBJECT

public:
	Word_Processingclass(QWidget *parent = Q_NULLPTR);
	~Word_Processingclass();

private slots:
	void Word_Processing_receiveData(QString data);
	void on_Slider_valueChanged(int value);
	void on_chkBoxframe_clicked(bool checked);
	void on_chkBoxunderline_clicked(bool checked);
	void on_Btnchange_clicked();

private:
	Ui::Word_Processingclass ui;


};
