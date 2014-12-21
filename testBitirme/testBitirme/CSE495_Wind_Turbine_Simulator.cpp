#include <QMessageBox>
#include "CSE495_Wind_Turbine_Simulator.h"
#include "mil.h"
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

//Turbine tanýmlama************************************
Ruzgar tmp;
Turbin m_turbine;
Mil m_mile;
int graphReso1;
double graphReso2;
int graphReso3;
double timeRes=0.3;
int selection=1;

CSE495_Wind_Turbine_Simulator::CSE495_Wind_Turbine_Simulator(QWidget *parent, Qt::WFlags flags)
	: QMainWindow(parent, flags)
{
	ui.setupUi(this);
	connect(this->ui.startButton, SIGNAL(released()), this, SLOT(startButton_click()));
	connect(this->ui.helpButton, SIGNAL(released()), this, SLOT(helpButton_click()));
	connect(this->ui.minus1, SIGNAL(released()), this, SLOT(minus1_click()));
	connect(this->ui.plus1, SIGNAL(released()), this, SLOT(plus1_click()));
	connect(this->ui.bigminus1, SIGNAL(released()), this, SLOT(bigminus1_click()));
	connect(this->ui.bigplus1, SIGNAL(released()), this, SLOT(bigplus1_click()));
	connect(this->ui.fit1, SIGNAL(released()), this, SLOT(fit1_click()));
	connect(this->ui.minus2, SIGNAL(released()), this, SLOT(minus2_click()));
	connect(this->ui.plus2, SIGNAL(released()), this, SLOT(plus2_click()));
	connect(this->ui.bigminus2, SIGNAL(released()), this, SLOT(bigminus2_click()));
	connect(this->ui.bigplus2, SIGNAL(released()), this, SLOT(bigplus2_click()));
	connect(this->ui.fit2, SIGNAL(released()), this, SLOT(fit2_click()));
	connect(this->ui.minus3, SIGNAL(released()), this, SLOT(minus3_click()));
	connect(this->ui.plus3, SIGNAL(released()), this, SLOT(plus3_click()));
	connect(this->ui.bigminus3, SIGNAL(released()), this, SLOT(bigminus3_click()));
	connect(this->ui.bigplus3, SIGNAL(released()), this, SLOT(bigplus3_click()));
	connect(this->ui.fit3, SIGNAL(released()), this, SLOT(fit3_click()));
	connect(this->ui.saveButton, SIGNAL(released()), this, SLOT(saveButton_click()));
	initialization();
}
//destructor
CSE495_Wind_Turbine_Simulator::~CSE495_Wind_Turbine_Simulator()
{}
void CSE495_Wind_Turbine_Simulator::initialization(){
	
	m_turbine.setWind(&tmp);
	//Burda ekranýn ilk hali olcak
	m_turbine.getWind()->setVBase(12);
	
	//Ruzgar kýsmý init
	this->ui.vBaseEdit->setText(doubleToQStr(m_turbine.getWind()->getVBase()));
	this->ui.vGustEdit->setText(doubleToQStr(m_turbine.getWind()->getVGust()));
	this->ui.pEdit->setText(doubleToQStr(m_turbine.getWind()->getP()));
	this->ui.IuEdit->setText(doubleToQStr(m_turbine.getWind()->getIu()));
	this->ui.timeEdit->setText(doubleToQStr(m_turbine.getWind()->getTime()));
	this->ui.turbinAcceEdit->setText(doubleToQStr(m_turbine.getTA()));
	this->ui.timeResEdit->setText(doubleToQStr(timeRes*1000));
	this->ui.nmEdit->setText(doubleToQStr(m_mile.getNm()));

	this->ui.startButton->setEnabled(true);
	this->ui.saveButton->setEnabled(false);
}
//Burda turbin deðerleri yenilenip basýlcak
void CSE495_Wind_Turbine_Simulator::refreshWindScreen(){

	this->ui.vBaseEdit->setText(doubleToQStr(m_turbine.getWind()->getVBase()));
	this->ui.vGustEdit->setText(doubleToQStr(m_turbine.getWind()->getVGust()));
	this->ui.vNoiseEdit->setText(doubleToQStr(m_turbine.getWind()->getVNoise()));
	this->ui.vRampEdit->setText(doubleToQStr(m_turbine.getWind()->getVRamp()));
	this->ui.vWindLCD->display(m_turbine.getWind()->getVWind());
	this->ui.pEdit->setText(doubleToQStr(m_turbine.getWind()->getP()));
	this->ui.IuEdit->setText(doubleToQStr(m_turbine.getWind()->getIu()));
	this->ui.timeEdit->setText(doubleToQStr(m_turbine.getWind()->getTime()));
	
}
void CSE495_Wind_Turbine_Simulator::refreshTurbineScreen(){
	
	this->ui.lambdaEdit->setText(doubleToQStr(m_turbine.getLambda()));
	this->ui.rEdit->setText(doubleToQStr(m_turbine.getR()));
	this->ui.WmEdit->setText(doubleToQStr(m_turbine.getWm()));
	this->ui.nEdit->setText(doubleToQStr(m_turbine.getN()));
	if(m_turbine.getCp() >= 0){
		this->ui.CpEdit->setText(doubleToQStr(m_turbine.getCp()));
		this->ui.turbineEffLcd->display(m_turbine.getCp());
	}
	this->ui.betaEdit->setText(doubleToQStr(m_turbine.getBeta()));
	this->ui.PmEdit->setText(ldoubleToQStr(m_turbine.getPm()));
	this->ui.TmEdit->setText(ldoubleToQStr(m_turbine.getTm()));
	this->ui.PidealEdit->setText(ldoubleToQStr(m_turbine.getPm()/m_turbine.getCp()));
	
}
void CSE495_Wind_Turbine_Simulator::refreshElectricityScreen(){

	//daha eklenecek yerler var
	this->ui.nmEdit->setText(doubleToQStr(m_mile.getNm()));
	if(m_turbine.getCp() >= 0){
		this->ui.PtEdit->setText(ldoubleToQStr(m_mile.getPt()));
	}
}

//Start button click
void CSE495_Wind_Turbine_Simulator::startButton_click()
{	
	if(this->ui.rEdit->text()==""){
		QMessageBox msgBox;
		msgBox.setWindowTitle("Warning!");
		msgBox.setText("Analiz için R rotor capini metre,Vbase ruzgar hizini m/sn, p hava yogunlugunu kg/m^3, ta saniyedeki turbin kanat ivmelenmesini m/sn^2 ve zaman olcusunu milisaniye cinslerinden giriniz...");
		msgBox.exec();
		this->ui.startButton->setEnabled(true);
		this->ui.saveButton->setEnabled(false);
	}
	else{
		this->ui.startButton->setEnabled(false);
		this->ui.saveButton->setEnabled(true);

		//change the start variables
		m_turbine.getWind()->setVBase(QStrToDouble(ui.vBaseEdit->text()));
		m_turbine.getWind()->setP(QStrToDouble(ui.pEdit->text()));
		m_turbine.setR(QStrToDouble(ui.rEdit->text()));
		m_turbine.setTA(QStrToDouble(ui.turbinAcceEdit->text()));
		m_mile.setNm(QStrToDouble(ui.nmEdit->text()));
		timeRes = QStrToDouble(ui.timeResEdit->text());
		selection = ui.ruzgarComboBox->currentIndex();
		//change the graph resolution according to the time
		timeRes /= 1000;
		m_turbine.setTimeRes(timeRes);
		graphReso1 = timeRes *1000;
		graphReso2 = timeRes *1000;
		graphReso3 = timeRes *1000;
		setupWindDatas();
	}
	
}
// Help Kýsmý
void CSE495_Wind_Turbine_Simulator::helpButton_click(){

	this->ui.helpButton->setEnabled(false);
	QMessageBox msgBox;
	msgBox.setWindowTitle("Wind Turbine Simulator Help");
	msgBox.setText("---------Wind Turbine Simulator---------\n\nAnaliz için V Type rüzgar tipini,\nVBase ruzgar hizini (default=12), \np hava yogunlugunu (default=1.225 kg/m^3), \nR rotor capini (metre cinsinden)\nta saniyedeki turbin kanat ivmelenmesini m/sn^2 (default=1 m/sn^2) \nve simulator zaman olcusunu (Time Resolution) milisaniye cinsinden (default=300 ms) giriniz.\nArdindan Start Analys butonuna basiniz.");
	msgBox.exec();
	this->ui.helpButton->setEnabled(true);
}
void CSE495_Wind_Turbine_Simulator::minus1_click(){
	graphReso1+=10;
}
void CSE495_Wind_Turbine_Simulator::plus1_click(){
	graphReso1-=10;
}
void CSE495_Wind_Turbine_Simulator::bigminus1_click(){
	graphReso1+=100;
}
void CSE495_Wind_Turbine_Simulator::bigplus1_click(){
	if(graphReso1-100 > 0)
		graphReso1-=100;
	else{};
}
void CSE495_Wind_Turbine_Simulator::fit1_click(){
	graphReso1=1000*timeRes;
}
void CSE495_Wind_Turbine_Simulator::minus2_click(){
	graphReso2+=10;
}
void CSE495_Wind_Turbine_Simulator::plus2_click(){
	graphReso2-=10;
}
void CSE495_Wind_Turbine_Simulator::bigminus2_click(){
	graphReso2+=100;
}
void CSE495_Wind_Turbine_Simulator::bigplus2_click(){
	if(graphReso2-100 > 0)
		graphReso2-=100;
	else{};
}
void CSE495_Wind_Turbine_Simulator::fit2_click(){
	graphReso2=1000*timeRes;
}
void CSE495_Wind_Turbine_Simulator::minus3_click(){
	graphReso3+=10;
}
void CSE495_Wind_Turbine_Simulator::plus3_click(){
	graphReso3-=10;
}
void CSE495_Wind_Turbine_Simulator::bigminus3_click(){
	graphReso3+=100;
}
void CSE495_Wind_Turbine_Simulator::bigplus3_click(){
	if(graphReso3-100 > 0)
		graphReso3-=100;
	else{}
}
void CSE495_Wind_Turbine_Simulator::fit3_click(){
	graphReso3=1000*timeRes;
}
void CSE495_Wind_Turbine_Simulator::saveButton_click(){
	///////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////SAVE BUTTON CLICK

}
QString CSE495_Wind_Turbine_Simulator::ldoubleToQStr(long double d){

	char arr[20];
	sprintf(arr , "%lf" , d);
	QString tmp = QString::fromUtf8(arr);
	
	return tmp;
}
QString CSE495_Wind_Turbine_Simulator::doubleToQStr(double d){

	char arr[10];
	sprintf(arr , "%lf" , d);
	QString tmp = QString::fromUtf8(arr);
	
	return tmp;
}
double CSE495_Wind_Turbine_Simulator::QStrToDouble(QString str){
	return str.toDouble();
}

void CSE495_Wind_Turbine_Simulator::setupWindDatas()
{	
  ui.ruzgarPlot->addGraph(); // blue line
  ui.ruzgarPlot->graph(0)->setPen(QPen(Qt::blue));
  ui.ruzgarPlot->graph(0)->setAntialiasedFill(true);
  ui.ruzgarPlot->addGraph(); // blue dot
  ui.ruzgarPlot->graph(1)->setPen(QPen(Qt::blue));
  ui.ruzgarPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.ruzgarPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.ruzgarPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.ruzgarPlot->xAxis->setNumberFormat("b");
  ui.ruzgarPlot->xAxis->setAutoTickStep(true);
  ui.ruzgarPlot->xAxis->setTickStep(1);
  ui.ruzgarPlot->axisRect()->setupFullAxesBox();

  ui.CpLambdaPlot->addGraph(); // red line
  ui.CpLambdaPlot->graph(0)->setPen(QPen(Qt::red));
  ui.CpLambdaPlot->graph(0)->setAntialiasedFill(true);
  ui.CpLambdaPlot->addGraph(); // red dot
  ui.CpLambdaPlot->graph(1)->setPen(QPen(Qt::red));
  ui.CpLambdaPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.CpLambdaPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.CpLambdaPlot->addGraph(); // green line
  ui.CpLambdaPlot->graph(2)->setPen(QPen(Qt::green));
  ui.CpLambdaPlot->graph(2)->setAntialiasedFill(true);
  ui.CpLambdaPlot->addGraph(); // green dot
  ui.CpLambdaPlot->graph(3)->setPen(QPen(Qt::green));
  ui.CpLambdaPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  ui.CpLambdaPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.CpLambdaPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.CpLambdaPlot->xAxis->setNumberFormat("b");
  ui.CpLambdaPlot->xAxis->setAutoTickStep(true);
  ui.CpLambdaPlot->xAxis->setTickStep(1);
  ui.CpLambdaPlot->axisRect()->setupFullAxesBox();

  ui.PmaxPlot->addGraph(); // magenta line
  ui.PmaxPlot->graph(0)->setPen(QPen(Qt::magenta));
  ui.PmaxPlot->graph(0)->setAntialiasedFill(true);
  ui.PmaxPlot->addGraph(); // magenta dot
  ui.PmaxPlot->graph(1)->setPen(QPen(Qt::magenta));
  ui.PmaxPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.PmaxPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.PmaxPlot->addGraph(); // yellow line
  ui.PmaxPlot->graph(2)->setPen(QPen(Qt::yellow));
  ui.PmaxPlot->graph(2)->setAntialiasedFill(true);
  ui.PmaxPlot->addGraph(); // yellow dot
  ui.PmaxPlot->graph(3)->setPen(QPen(Qt::yellow));
  ui.PmaxPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  ui.PmaxPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.PmaxPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.PmaxPlot->xAxis->setNumberFormat("b");
  ui.PmaxPlot->xAxis->setAutoTickStep(true);
  ui.PmaxPlot->xAxis->setTickStep(1);
  ui.PmaxPlot->axisRect()->setupFullAxesBox();

  connect(ui.ruzgarPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.ruzgarPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.CpLambdaPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.CpLambdaPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.PmaxPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.PmaxPlot->xAxis2, SLOT(setRange(QCPRange)));
  
  connect(&dataTimer, SIGNAL(timeout()), this, SLOT(windDatasSlot()));
  dataTimer.start(0); // Interval 0 means to refresh as fast as possible
}

void CSE495_Wind_Turbine_Simulator::windDatasSlot()
{

  // calculate two new data points:
  double key = QDateTime::currentDateTime().toMSecsSinceEpoch()/1000.0;
  static double lastPointKey = 0;

  if (key-lastPointKey >= timeRes) // at most add point everytime resolution time
  {  
		//Call Control functions
		controlWind();
		controlTurbine();
		controlMile();
		
		//Do works on ruzgarPlot
		ui.ruzgarPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getWind()->getVWind());
		ui.ruzgarPlot->graph(1)->clearData();
		ui.ruzgarPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getWind()->getVWind());
		//ui.ruzgarPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso1);
		ui.ruzgarPlot->graph(0)->rescaleValueAxis();
		
		//Do works on CpLambdaPlot
		ui.CpLambdaPlot->graph(2)->addData(m_turbine.getWind()->getTime(), m_turbine.getLambda());
		ui.CpLambdaPlot->graph(3)->clearData();
		ui.CpLambdaPlot->graph(3)->addData(m_turbine.getWind()->getTime(), m_turbine.getLambda());
		//ui.CpLambdaPlot->graph(2)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso2);
		ui.CpLambdaPlot->graph(2)->rescaleValueAxis();
		
		if(m_turbine.getCp()>=0){
			ui.CpLambdaPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getCp());
			ui.CpLambdaPlot->graph(1)->clearData();
			ui.CpLambdaPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getCp());
			//ui.CpLambdaPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso2);
			ui.CpLambdaPlot->graph(0)->rescaleValueAxis();
		
			//Do works on PmaxPlot
			ui.PmaxPlot->graph(2)->addData(m_turbine.getWind()->getTime(), m_mile.getPt());
			ui.PmaxPlot->graph(3)->clearData();
			ui.PmaxPlot->graph(3)->addData(m_turbine.getWind()->getTime(), m_mile.getPt());
			//ui.PmaxPlot->graph(2)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso3);
			ui.PmaxPlot->graph(2)->rescaleValueAxis();
		
			ui.PmaxPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getPm());
			ui.PmaxPlot->graph(1)->clearData();
			ui.PmaxPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getPm());
			//ui.PmaxPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso3);
			ui.PmaxPlot->graph(0)->rescaleValueAxis();
		}
		lastPointKey = key;
  }
  ui.ruzgarPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso1/3, Qt::AlignRight);
  ui.ruzgarPlot->replot();
  ui.CpLambdaPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso2/3, Qt::AlignRight);
  ui.CpLambdaPlot->replot();
  ui.PmaxPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso3/3, Qt::AlignRight);
  ui.PmaxPlot->replot();

  static double lastFpsKey;
  static int frameCount;
  ++frameCount;
  if (key-lastFpsKey > 2) // average fps over 2 seconds
  {
    ui.statusBar->showMessage(
          QString("%1 FPS, Total Data points: %2")
          .arg(frameCount/(key-lastFpsKey), 0, 'f', 0)
		  .arg(m_turbine.getWind()->getTime()/timeRes)
          ,0);
    lastFpsKey = key;
    frameCount = 0;
  }
}
void CSE495_Wind_Turbine_Simulator::controlWind(){
	m_turbine.getWind()->refreshTime(timeRes);
	m_turbine.getWind()->refreshVWind(selection);
	refreshWindScreen();
}
void CSE495_Wind_Turbine_Simulator::controlTurbine(){
	m_turbine.getWind()->refreshVWind(selection);
	m_turbine.calculateLambda();
	m_turbine.calculateBeta();
	m_turbine.controlN();
	m_turbine.calculateCp();
	m_turbine.calculatePm();
	m_turbine.calculateTm();
	refreshTurbineScreen();
}
void CSE495_Wind_Turbine_Simulator::controlMile(){
	m_mile.calculatePt(m_turbine.getPm());
	refreshElectricityScreen();
}