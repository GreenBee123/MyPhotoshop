#pragma once

#include <QWidget>
#include "ui_comic_Strips_class.h"

class comic_Strips_class : public QWidget
{
	Q_OBJECT

public:
	comic_Strips_class(QWidget *parent = Q_NULLPTR);
	~comic_Strips_class();
public slots:
	void comic_Strips_receiveData(QString data);
	void comic_Strips_effect();

private:
	Ui::comic_Strips_class ui;
};
