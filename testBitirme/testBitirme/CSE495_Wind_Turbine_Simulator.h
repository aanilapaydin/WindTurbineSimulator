//cse495_wind_turbine_simulator.h
#ifndef CSE495_WIND_TURBINE_SIMULATOR_H
#define CSE495_WIND_TURBINE_SIMULATOR_H

#include <QTimer>
#include <QtGui/QMainWindow>
#include <QtGui>
#include "ui_testbitirme.h"


class CSE495_Wind_Turbine_Simulator : public QMainWindow
{
	Q_OBJECT

public:
	CSE495_Wind_Turbine_Simulator(QWidget *parent = 0, Qt::WFlags flags = 0);
	~CSE495_Wind_Turbine_Simulator();
	void initialization();
	void refreshWindScreen();
	void refreshTurbineScreen();
	void refreshElectricityScreen();
	QString doubleToQStr(double d);
	QString ldoubleToQStr(long double d);
	double QStrToDouble(QString str);
	void setupWindDatas();
	void controlWind();
	void controlTurbine();
	void controlMile();
	void controlJenerator();
	void writeToDetailedView();

private slots:
    void startButton_click();
	void helpButton_click();
	void minus1_click();
	void plus1_click();
	void bigminus1_click();
	void bigplus1_click();
	void fit1_click();
	void minus2_click();
	void plus2_click();
	void bigminus2_click();
	void bigplus2_click();
	void fit2_click();
	void minus3_click();
	void plus3_click();
	void bigminus3_click();
	void bigplus3_click();
	void fit3_click();
	void windDatasSlot();
	void saveButton_click();

private:
	QTimer dataTimer;
	Ui::testBitirmeClass ui;

};

#endif // CSE495_Wind_Turbine_Simulator_H
