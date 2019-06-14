#include "ScreenShotclass.h"
#include "MyPhotoshop.h"
#include<opencv2/core/core.hpp>
#include<opencv2/highgui/highgui.hpp>
#include<opencv2/imgproc/imgproc.hpp>
using namespace cv;

// ��������
void my_mouse_callback(int event, int x, int y,
	int flags, void* param);
// ����ȫ�ֱ���
Mat ScreenShot_image;
Rect box;
bool drawing_box = false;
string str;
Mat temp;

ScreenShotclass::ScreenShotclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);

}

ScreenShotclass::~ScreenShotclass()
{
}

void ScreenShotclass::ScreenShot_receiveData(QString data) {
	str = data.toStdString();
	ScreenShot_image = imread(data.toStdString());
	if (ScreenShot_image.empty()) {
		qDebug() << "empty";
	}
	namedWindow("Box Example", CV_WINDOW_AUTOSIZE);
	imshow("Box Example", ScreenShot_image);
	setMouseCallback("Box Example", my_mouse_callback);

	while (1)
	{
		if (waitKey(15) == 27)
			break;
	}
	ScreenShot_image = imread(data.toStdString());
	QImage img2 = cvMat2QImage(ScreenShot_image);
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(img2));
	ui.label->resize(ui.label->pixmap()->size());
}

// ���ظ�����
void my_mouse_callback(int event, int x, int y,
	int flags, void* parm)
{
	switch (event)
	{
		// �ƶ����
	case EVENT_MOUSEMOVE:
	{
		if (drawing_box)
		{
			box.width = x - box.x;
			box.height = y - box.y;
			temp = ScreenShot_image.clone();
			// ����ѡȡ����
			rectangle(temp, Point(box.x, box.y),
				Point(box.x + box.width, box.y + box.height),
				Scalar(0, 0xff, 0), 3);
			imshow("Box Example", temp);
		}
	}
	break;
	// ����������
	case EVENT_LBUTTONDOWN:
	{
		drawing_box = true;
		box = Rect(x, y, 0, 0);
	}
	break;
	// �ͷ�������
	case EVENT_LBUTTONUP:
	{
		drawing_box = false;
		if (box.width < 0)
		{
			box.x += box.width;
			box.width *= -1;
		}
		if (box.height < 0)
		{
			box.y += box.height;
			box.height *= -1;
		}
		// �ɼ�ͼ��
		Mat temp(ScreenShot_image, box);
		//imshow("Crop", temp);
		imwrite(str, temp);
		// ����ѡȡ����
		rectangle(ScreenShot_image, Point(box.x, box.y),
			Point(box.x + box.width, box.y + box.height),
			Scalar(0, 0xff, 0), 3);
		imshow("Box Example", ScreenShot_image);
	}
	break;
	}
}