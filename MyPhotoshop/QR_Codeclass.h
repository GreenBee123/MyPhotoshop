#pragma once

#include <QWidget>
#include "ui_QR_Codeclass.h"

class QR_Codeclass : public QWidget
{
	Q_OBJECT

public:
	QR_Codeclass(QWidget *parent = Q_NULLPTR);
	~QR_Codeclass();

private slots:
	void QR_Code_receiveData(QString data);

private:
	Ui::QR_Codeclass ui;
};
