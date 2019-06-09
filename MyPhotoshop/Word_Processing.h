#pragma once

#include <QWidget>
#include "ui_Word_Processing.h"

class Word_Processing : public QWidget
{
	Q_OBJECT

public:
	Word_Processing(QWidget *parent = Q_NULLPTR);
	~Word_Processing();

private slots:
	void Word_Processing_receiveData(QString data);

private:
	Ui::Word_Processing ui;
};
