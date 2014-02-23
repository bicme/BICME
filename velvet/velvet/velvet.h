#ifndef VELVET_H
#define VELVET_H

#include <QtWidgets/QMainWindow>
#include "ui_velvet.h"

class velvet : public QMainWindow
{
	Q_OBJECT

public:
	velvet(QWidget *parent = 0);
	~velvet();

private:
	Ui::velvetClass ui;
};

#endif // VELVET_H
