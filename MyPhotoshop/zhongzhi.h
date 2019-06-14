#pragma once

#include <QWidget>
#include "ui_zhongzhi.h"
class zhongzhi : public QWidget
{
	Q_OBJECT

public:
	zhongzhi(QWidget *parent = Q_NULLPTR);
	~zhongzhi();
private slots:
	void Zhong_zhireceiveData(QString data);
	void on_horizontalSlider_valueChanged(int value);
	void on_comboBox_currentTextChanged();
private:
	Ui::zhongzhi ui;
};
