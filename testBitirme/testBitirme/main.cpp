#include "CSE495_Wind_Turbine_Simulator.h"
#include <QtGui/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CSE495_Wind_Turbine_Simulator w;
	w.show();
	return a.exec();
}
