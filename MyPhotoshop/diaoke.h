#pragma once

#include <QWidget>
#include "ui_diaoke.h"

class diaoke : public QWidget
{
	Q_OBJECT

public:
	diaoke(QWidget *parent = Q_NULLPTR);
	~diaoke();
public slots:
	void Diao_kereceiveData(QString data);
private:
	Ui::diaoke ui;
};
