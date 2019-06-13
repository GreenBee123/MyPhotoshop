#include "castingclass.h"
#include"MyPhotoshop.h"

Mat src_casting;
QImage dst_casting;



castingclass::castingclass(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

castingclass::~castingclass()
{
}

void castingclass::casting_effect()
{
	Mat img;
	src_casting.copyTo(img);
	int width = src_casting.cols;
	int heigh = src_casting.rows;
	Mat dst(img.size(), CV_8UC3);
	for (int y = 0; y < heigh; y++)
	{
		uchar* imgP = img.ptr<uchar>(y);
		uchar* dstP = dst.ptr<uchar>(y);
		for (int x = 0; x < width; x++)
		{
			float b0 = imgP[3 * x];
			float g0 = imgP[3 * x + 1];
			float r0 = imgP[3 * x + 2];

			float b = b0 * 255 / (g0 + r0 + 1);
			float g = g0 * 255 / (b0 + r0 + 1);
			float r = r0 * 255 / (g0 + b0 + 1);

			r = (r > 255 ? 255 : (r < 0 ? 0 : r));
			g = (g > 255 ? 255 : (g < 0 ? 0 : g));
			b = (b > 255 ? 255 : (b < 0 ? 0 : b));

			dstP[3 * x] = (uchar)b;
			dstP[3 * x + 1] = (uchar)g;
			dstP[3 * x + 2] = (uchar)r;
		}
	}
	
	dst_casting = cvMat2QImage(dst);
	
	ui.label->clear();
	ui.label->setPixmap(QPixmap::fromImage(dst_casting));
	ui.label->resize(ui.label->pixmap()->size());
}

void castingclass::casting_receiveData(QString data) {
	src_casting = imread(data.toStdString());
	casting_effect();
	
}

