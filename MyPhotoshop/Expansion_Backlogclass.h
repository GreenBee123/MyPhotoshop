#pragma once

#include <QWidget>
#include "ui_Expansion_Backlogclass.h"

class Expansion_Backlogclass : public QWidget
{
	Q_OBJECT

public:
	Expansion_Backlogclass(QWidget *parent = Q_NULLPTR);
	~Expansion_Backlogclass();
public slots:
	void expansion_Backlog_receiveData(QString data);
private:
	Ui::Expansion_Backlogclass ui;
};
