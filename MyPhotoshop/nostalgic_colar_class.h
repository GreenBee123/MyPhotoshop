#pragma once

#include <QWidget>
#include "ui_nostalgic_colar_class.h"

class nostalgic_colar_class : public QWidget
{
	Q_OBJECT

public:
	nostalgic_colar_class(QWidget *parent = Q_NULLPTR);
	~nostalgic_colar_class();

public slots:
	void nostalgic_colar_receiveData(QString data);
	void nostalgic_colar_effect();
private:
	Ui::nostalgic_colar_class ui;
};
