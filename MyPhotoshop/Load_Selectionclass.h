#pragma once

#include <QWidget>
#include "ui_Load_Selectionclass.h"

class Load_Selectionclass : public QWidget
{
	Q_OBJECT

public:
	Load_Selectionclass(QWidget *parent = Q_NULLPTR);
	~Load_Selectionclass();

public slots:
	void load_Selection_receiveData(QString data);

private:
	Ui::Load_Selectionclass ui;
};
