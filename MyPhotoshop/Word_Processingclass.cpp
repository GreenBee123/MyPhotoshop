#include "Word_Processingclass.h"
#include"MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include"opencv2/imgproc/imgproc.hpp"
#include<iostream>
using namespace std;
using namespace cv;

int img_longth, img_width;
int R, G, B;
bool is_underline, is_frame;
int x_location, y_location;
int fontFace, fontScale, thickness;

int fontFace_check(QString fontFace) {
	if (fontFace=="simplex") {
		return CV_FONT_HERSHEY_SIMPLEX;
	}
	else if (fontFace == "plain") {
		return CV_FONT_HERSHEY_PLAIN;
	}
	else if (fontFace == "duplex") {
		return CV_FONT_HERSHEY_DUPLEX;
	}
	else if (fontFace == "complex") {
		return CV_FONT_HERSHEY_COMPLEX;
	}
	else if (fontFace == "triplex") {
		return CV_FONT_HERSHEY_TRIPLEX;
	}
	else if (fontFace == "complex_small") {
		return CV_FONT_HERSHEY_COMPLEX_SMALL;
	}
	else if (fontFace == "script_simplex") {
		return CV_FONT_HERSHEY_SCRIPT_SIMPLEX;
	}
	else if (fontFace == "script_complex") {
		return CV_FONT_HERSHEY_SCRIPT_COMPLEX;
	}
	return 0;
}	

Mat image_word_processing;
Mat after_image_word_processing;
QImage img2_word_processing;
string text;

Word_Processingclass::Word_Processingclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

Word_Processingclass::~Word_Processingclass()
{
}

void Word_Processingclass::on_Slider_valueChanged(int value)
{
	Q_UNUSED(value);
	QColor color;
	R = ui.red_horizontalSlider->value();
	G = ui.green_horizontalSlider->value();
	B = ui.blue_horizontalSlider->value();
	color.setRgb(R, G, B, 255);
	QPalette pal = ui.textEdit_2->palette();
	pal.setColor(QPalette::Base, color);
	ui.textEdit_2->setPalette(pal);
}

void Word_Processingclass::on_chkBoxframe_clicked(bool checked)
{
	is_frame = checked;
}

void Word_Processingclass::on_chkBoxunderline_clicked(bool checked)
{
	is_underline = checked;
}

void Word_Processingclass::on_Btnchange_clicked()
{
	after_image_word_processing = image_word_processing.clone();
	text = (ui.textEdit->toPlainText()).toStdString();
	x_location = (ui.x_img_location->toPlainText()).toInt();
	y_location = (ui.y_img_location->toPlainText()).toInt();
	fontFace = fontFace_check(ui.fontFace_comboBox_2->currentText());
	thickness = (ui.thickness_comboBox->currentText()).toInt();
	fontScale = (ui.fontScale_comboBox_3->currentText()).toInt();
	int baseline = 0;
	Size textSize = getTextSize(text, fontFace,
		fontScale, thickness, &baseline);
	baseline += thickness;

	// center the text
	Point textOrg(((after_image_word_processing.cols - textSize.width) / 2) + x_location,
		((after_image_word_processing.rows + textSize.height) / 2) + y_location);

	// draw the box
	if (is_frame) {
		rectangle(after_image_word_processing, textOrg + Point(0, baseline),
			textOrg + Point(textSize.width, -textSize.height),
			Scalar(B, G, R));
	}
	// ... and the baseline first
	if (is_underline) {
		line(after_image_word_processing, textOrg + Point(0, thickness),
			textOrg + Point(textSize.width, thickness),
			Scalar(B, G, R));
	}

	// then put the text itself
	putText(after_image_word_processing, text, textOrg, fontFace, fontScale,
		Scalar(B, G, R), thickness, 8);

	//imshow("getText", after_image_word_processing);

	img2_word_processing = cvMat2QImage(after_image_word_processing);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2_word_processing));
	ui.label->resize(ui.label->pixmap()->size());

}

void Word_Processingclass::Word_Processing_receiveData(QString data) {
	string str_word = data.toStdString();
	image_word_processing = imread(str_word);
	img2_word_processing = cvMat2QImage(image_word_processing);

	img_longth = image_word_processing.cols;
	img_width = image_word_processing.rows;

	ui.label_img_longth->setText(QString::number(img_longth));
	ui.label_img_width->setText(QString::number(img_width));
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2_word_processing));
	ui.label->resize(ui.label->pixmap()->size());
}