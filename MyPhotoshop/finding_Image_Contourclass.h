#pragma once

#include <QWidget>
#include "ui_finding_Image_Contourclass.h"

class finding_Image_Contourclass : public QWidget
{
	Q_OBJECT

public:
	finding_Image_Contourclass(QWidget *parent = Q_NULLPTR);
	~finding_Image_Contourclass();

public slots:
	void finding_Image_Contour_receiveData(QString data);

private:
	Ui::finding_Image_Contourclass ui;
};
