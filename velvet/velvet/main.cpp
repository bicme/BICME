#include "stdafx.h"
#include "velvet.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	velvet w;
	w.show();
	return a.exec();
}
