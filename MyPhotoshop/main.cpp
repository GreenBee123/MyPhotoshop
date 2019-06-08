#include "MyPhotoshop.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyPhotoshop w;
	w.show();
	return a.exec();
}
