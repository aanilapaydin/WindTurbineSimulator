//cse495_wind_turbine_simulator.cpp
#include <QMessageBox>
#include "CSE495_Wind_Turbine_Simulator.h"
#include "jenerator.h"
#include <string>
#include <iostream>
#include <cstdio>

using namespace std;

//Turbin tanımlama************************************
Ruzgar tmp;
Turbin m_turbine;
Mil m_mile;
Jenerator m_jenerator;
int graphReso1;
double graphReso2;
int graphReso3;
double timeRes=0.3;
int selection=1;
double iter=1;

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
	//Burda ekranın ilk hali
	m_turbine.getWind()->setVBase(12);
	//Screen init
	this->ui.vBaseEdit->setText(doubleToQStr(m_turbine.getWind()->getVBase()));
	this->ui.vGustEdit->setText(doubleToQStr(m_turbine.getWind()->getVGust()));
	this->ui.pEdit->setText(doubleToQStr(m_turbine.getWind()->getP()));
	this->ui.IuEdit->setText(doubleToQStr(m_turbine.getWind()->getIu()));
	this->ui.timeEdit->setText(doubleToQStr(m_turbine.getWind()->getTime()));
	this->ui.turbinAcceEdit->setText(doubleToQStr(m_turbine.getTA()));
	this->ui.timeResEdit->setText(doubleToQStr(timeRes*1000));
	this->ui.nmEdit->setText(doubleToQStr(m_mile.getNm()));

	this->ui.LpmEdit->setText(doubleToQStr(m_jenerator.Lpm));
	this->ui.LdEdit->setText(doubleToQStr(m_jenerator.Ld));
	this->ui.LqEdit->setText(doubleToQStr(m_jenerator.Lq));
	this->ui.RsEdit->setText(doubleToQStr(m_jenerator.Rs));
	this->ui.DEdit->setText(doubleToQStr(m_jenerator.D));
	this->ui.JEdit->setText(doubleToQStr(m_jenerator.J));
	this->ui.PKSEdit->setText(doubleToQStr(m_jenerator.PKS));
	this->ui.DSYEdit->setText(doubleToQStr(m_jenerator.DSY));

	this->ui.startButton->setEnabled(true);
	this->ui.saveButton->setEnabled(false);
}
//Burda turbin değerleri yenilenip
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

	
	this->ui.nmEdit->setText(doubleToQStr(m_mile.getNm()));
	this->ui.LpmEdit->setText(doubleToQStr(m_jenerator.Lpm));
	this->ui.LdEdit->setText(doubleToQStr(m_jenerator.Ld));
	this->ui.LqEdit->setText(doubleToQStr(m_jenerator.Lq));
	this->ui.RsEdit->setText(doubleToQStr(m_jenerator.Rs));
	this->ui.DEdit->setText(doubleToQStr(m_jenerator.D));
	this->ui.JEdit->setText(doubleToQStr(m_jenerator.J));
	this->ui.PKSEdit->setText(doubleToQStr(m_jenerator.PKS));
	this->ui.DSYEdit->setText(doubleToQStr(m_jenerator.DSY));
	this->ui.VaEdit->setText(doubleToQStr(m_jenerator.Va));
	this->ui.VbEdit->setText(doubleToQStr(m_jenerator.Vb));
	this->ui.VcEdit->setText(doubleToQStr(m_jenerator.Vc));
	this->ui.IaEdit->setText(doubleToQStr(m_jenerator.Ia));
	this->ui.IbEdit->setText(doubleToQStr(m_jenerator.Ib));
	this->ui.IcEdit->setText(doubleToQStr(m_jenerator.Ic));

	if(m_turbine.getCp() >= 0){
		this->ui.PtEdit->setText(ldoubleToQStr(m_mile.getPt()));
		this->ui.PeEdit->setText(ldoubleToQStr(m_jenerator.getPe()));
	}
}

//Start button click
void CSE495_Wind_Turbine_Simulator::startButton_click()
{	
	if(this->ui.rEdit->text()==""){
		QMessageBox msgBox;
		msgBox.setWindowTitle("Warning!");
		msgBox.setText("Analiz için V Type rüzgar tipini,\n");
		msgBox.setText(msgBox.text() + "VBase ruzgar hizini (default=12), \n");
		msgBox.setText(msgBox.text() + "p hava yogunlugunu (default=1.225 kg/m^3), \n");
		msgBox.setText(msgBox.text() + "R rotor capini (metre cinsinden)\n");
		msgBox.setText(msgBox.text() + "ta saniyedeki turbin kanat ivmelenmesini m/sn^2 (default=1 m/sn^2) \n");
		msgBox.setText(msgBox.text() + "nm disli verimini %100 için 1 (default=1.00) \n");
		msgBox.setText(msgBox.text() + "Sagda verilen PMSG jenerator parametrelerini (default degerler idealdir)\n");
		msgBox.setText(msgBox.text() + "ve simulator zaman olcusunu (Time Resolution) milisaniye cinsinden (default=300 ms) giriniz...");
		
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
		m_turbine.setR(QStrToDouble(ui.rEdit->text())/2.00);
		m_turbine.setTA(QStrToDouble(ui.turbinAcceEdit->text()));
		m_mile.setNm(QStrToDouble(ui.nmEdit->text()));
		timeRes = QStrToDouble(ui.timeResEdit->text());
		selection = ui.ruzgarComboBox->currentIndex();

		m_jenerator.Lpm= QStrToDouble(ui.LpmEdit->text());
		m_jenerator.Ld= QStrToDouble(ui.LdEdit->text());
		m_jenerator.Lq= QStrToDouble(ui.LqEdit->text());
		m_jenerator.Rs= QStrToDouble(ui.RsEdit->text());
		m_jenerator.D= QStrToDouble(ui.DEdit->text());
		m_jenerator.J= QStrToDouble(ui.JEdit->text());
		m_jenerator.PKS= QStrToDouble(ui.PKSEdit->text());
		m_jenerator.DSY= QStrToDouble(ui.DSYEdit->text());
		//change the graph resolution according to the time
		timeRes /= 1000;
		m_turbine.setTimeRes(timeRes);
		graphReso1 = timeRes *1000;
		graphReso2 = timeRes *1000;
		graphReso3 = timeRes *1000;
		setupWindDatas();
	}
	
}
// Help Kısmı
void CSE495_Wind_Turbine_Simulator::helpButton_click(){

	this->ui.helpButton->setEnabled(false);
	QMessageBox msgBox;
	msgBox.setWindowTitle("Wind Turbine Simulator Help");
	msgBox.setText("---------Wind Turbine Simulator---------\n\n");
	msgBox.setText(msgBox.text() + "Analiz için V Type rüzgar tipini,\n");
	msgBox.setText(msgBox.text() + "VBase ruzgar hizini (default=12), \n");
	msgBox.setText(msgBox.text() + "p hava yogunlugunu (default=1.225 kg/m^3), \n");
	msgBox.setText(msgBox.text() + "R rotor capini (metre cinsinden)\n");
	msgBox.setText(msgBox.text() + "ta saniyedeki turbin kanat ivmelenmesini m/sn^2 (default=1 m/sn^2) \n");
	msgBox.setText(msgBox.text() + "nm disli verimini %100 için 1 (default=1.00) \n");
	msgBox.setText(msgBox.text() + "Sagda verilen PMSG jenerator parametrelerini (default degerler idealdir)\n");
	msgBox.setText(msgBox.text() + "ve simulator zaman olcusunu (Time Resolution) milisaniye cinsinden (default=300 ms) giriniz.\n");
	msgBox.setText(msgBox.text() + "Ardindan Start Analys butonuna basiniz.");
	msgBox.setText(msgBox.text() + "\n\n\n");
	msgBox.setText(msgBox.text() + "Isterseniz olusan datalari Save Datas butonuyla txt dosya formati\n");
	msgBox.setText(msgBox.text() + "ile kaydedebilirsiniz...");
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
	 
	QString fileName("VTS_SaveFile_0_to_");
	QString time = doubleToQStr(m_turbine.getWind()->getTime());
	fileName+= time;
	fileName += ".txt";
	QFile file(fileName);
    
	file.open(QIODevice::WriteOnly | QIODevice::Text);
    QTextStream out(&file);
	out << ui.detailedLabel->text();
 
    file.close(); 

	QMessageBox msgBox;
	msgBox.setWindowTitle("File Saved!");
	msgBox.setText("File Saved in named '");
	msgBox.setText(msgBox.text() + fileName);
	msgBox.setText(msgBox.text() + "'");
	msgBox.exec();
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
  ui.ruzgarPlot->addGraph(); // blue line   for vWind
  ui.ruzgarPlot->graph(0)->setPen(QPen(Qt::blue));
  ui.ruzgarPlot->graph(0)->setAntialiasedFill(true);
  ui.ruzgarPlot->addGraph(); // blue dot  for vWind
  ui.ruzgarPlot->graph(1)->setPen(QPen(Qt::blue));
  ui.ruzgarPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.ruzgarPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.ruzgarPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.ruzgarPlot->xAxis->setNumberFormat("b");
  ui.ruzgarPlot->xAxis->setAutoTickStep(true);
  ui.ruzgarPlot->xAxis->setTickStep(1);
  ui.ruzgarPlot->axisRect()->setupFullAxesBox();

  ui.rotorPlot->addGraph(); // blue line   for Wm
  ui.rotorPlot->graph(0)->setPen(QPen(Qt::blue));
  ui.rotorPlot->graph(0)->setAntialiasedFill(true);
  ui.rotorPlot->addGraph(); // blue dot  for Wm
  ui.rotorPlot->graph(1)->setPen(QPen(Qt::blue));
  ui.rotorPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.rotorPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.rotorPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.rotorPlot->xAxis->setNumberFormat("b");
  ui.rotorPlot->xAxis->setAutoTickStep(true);
  ui.rotorPlot->xAxis->setTickStep(1);
  ui.rotorPlot->axisRect()->setupFullAxesBox();

  ui.CpLambdaPlot->addGraph(); // red line     for Cp
  ui.CpLambdaPlot->graph(0)->setPen(QPen(Qt::red));
  ui.CpLambdaPlot->graph(0)->setAntialiasedFill(true);
  ui.CpLambdaPlot->addGraph(); // red dot   for Cp
  ui.CpLambdaPlot->graph(1)->setPen(QPen(Qt::red));
  ui.CpLambdaPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.CpLambdaPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.CpLambdaPlot->addGraph(); // green line   for lambda
  ui.CpLambdaPlot->graph(2)->setPen(QPen(Qt::green));
  ui.CpLambdaPlot->graph(2)->setAntialiasedFill(true);
  ui.CpLambdaPlot->addGraph(); // green dot   for lambda
  ui.CpLambdaPlot->graph(3)->setPen(QPen(Qt::green));
  ui.CpLambdaPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  ui.CpLambdaPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.CpLambdaPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.CpLambdaPlot->xAxis->setNumberFormat("b");
  ui.CpLambdaPlot->xAxis->setAutoTickStep(true);
  ui.CpLambdaPlot->xAxis->setTickStep(1);
  ui.CpLambdaPlot->axisRect()->setupFullAxesBox();

  ui.betaPlot->addGraph(); // red line  for beta
  ui.betaPlot->graph(0)->setPen(QPen(Qt::red));
  ui.betaPlot->graph(0)->setAntialiasedFill(true);
  ui.betaPlot->addGraph(); // red dot   for beta
  ui.betaPlot->graph(1)->setPen(QPen(Qt::red));
  ui.betaPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.betaPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.betaPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.betaPlot->xAxis->setNumberFormat("b");
  ui.betaPlot->xAxis->setAutoTickStep(true);
  ui.betaPlot->xAxis->setTickStep(1);
  ui.betaPlot->axisRect()->setupFullAxesBox();

  ui.PmaxPlot->addGraph(); // magenta line    for Pm
  ui.PmaxPlot->graph(0)->setPen(QPen(Qt::magenta));
  ui.PmaxPlot->graph(0)->setAntialiasedFill(true);
  ui.PmaxPlot->addGraph(); // magenta dot	  for Pm
  ui.PmaxPlot->graph(1)->setPen(QPen(Qt::magenta));
  ui.PmaxPlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.PmaxPlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.PmaxPlot->addGraph(); // yellow line	for Pt
  ui.PmaxPlot->graph(2)->setPen(QPen(Qt::yellow));
  ui.PmaxPlot->graph(2)->setAntialiasedFill(true);
  ui.PmaxPlot->addGraph(); // yellow dot	for Pt
  ui.PmaxPlot->graph(3)->setPen(QPen(Qt::yellow));
  ui.PmaxPlot->graph(3)->setLineStyle(QCPGraph::lsNone);
  ui.PmaxPlot->graph(3)->setScatterStyle(QCPScatterStyle::ssNone);

  ui.PmaxPlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.PmaxPlot->xAxis->setNumberFormat("b");
  ui.PmaxPlot->xAxis->setAutoTickStep(true);
  ui.PmaxPlot->xAxis->setTickStep(1);
  ui.PmaxPlot->axisRect()->setupFullAxesBox();

  ui.PePlot->addGraph(); // green line    for Pm
  ui.PePlot->graph(0)->setPen(QPen(Qt::green));
  ui.PePlot->graph(0)->setAntialiasedFill(true);
  ui.PePlot->addGraph(); // green dot	  for Pm
  ui.PePlot->graph(1)->setPen(QPen(Qt::green));
  ui.PePlot->graph(1)->setLineStyle(QCPGraph::lsNone);
  ui.PePlot->graph(1)->setScatterStyle(QCPScatterStyle::ssNone);
  ui.PePlot->xAxis->setTickLabelType(QCPAxis::ltNumber);
  ui.PePlot->xAxis->setNumberFormat("b");
  ui.PePlot->xAxis->setAutoTickStep(true);
  ui.PePlot->xAxis->setTickStep(1);
  ui.PePlot->axisRect()->setupFullAxesBox();

  connect(ui.ruzgarPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.ruzgarPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.rotorPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.rotorPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.CpLambdaPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.CpLambdaPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.PmaxPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.PmaxPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.betaPlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.betaPlot->xAxis2, SLOT(setRange(QCPRange)));
  connect(ui.PePlot->xAxis, SIGNAL(rangeChanged(QCPRange)), ui.PePlot->xAxis2, SLOT(setRange(QCPRange)));

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
		controlJenerator();

		//Do works on ruzgarPlot
		ui.ruzgarPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getWind()->getVWind());
		ui.ruzgarPlot->graph(1)->clearData();
		ui.ruzgarPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getWind()->getVWind());
		//ui.ruzgarPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso1);
		ui.ruzgarPlot->graph(0)->rescaleValueAxis();

		//Do works on rotorPlot
		ui.rotorPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getWm());
		ui.rotorPlot->graph(1)->clearData();
		ui.rotorPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getWm());
		//ui.rotorPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso1);
		ui.rotorPlot->graph(0)->rescaleValueAxis();

		//Do works on CpLambdaPlot
		ui.CpLambdaPlot->graph(2)->addData(m_turbine.getWind()->getTime(), m_turbine.getLambda());
		ui.CpLambdaPlot->graph(3)->clearData();
		ui.CpLambdaPlot->graph(3)->addData(m_turbine.getWind()->getTime(), m_turbine.getLambda());
		//ui.CpLambdaPlot->graph(2)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso2);
		ui.CpLambdaPlot->graph(2)->rescaleValueAxis();
		
		ui.betaPlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_turbine.getBeta());
		ui.betaPlot->graph(1)->clearData();
		ui.betaPlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_turbine.getBeta());
		//ui.betaPlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso2);
		ui.betaPlot->graph(0)->rescaleValueAxis();

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

			ui.PePlot->graph(0)->addData(m_turbine.getWind()->getTime(), m_jenerator.getPe());
			ui.PePlot->graph(1)->clearData();
			ui.PePlot->graph(1)->addData(m_turbine.getWind()->getTime(), m_jenerator.getPe());
			//ui.PePlot->graph(0)->removeDataBefore(m_turbine.getWind()->getTime()-graphReso3);
			ui.PePlot->graph(0)->rescaleValueAxis();
		}
		lastPointKey = key;
		

		writeToDetailedView();
		iter++;
  
  }
  ui.ruzgarPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso1/3, Qt::AlignRight);
  ui.ruzgarPlot->replot();
  ui.rotorPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso1/3, Qt::AlignRight);
  ui.rotorPlot->replot();
  ui.CpLambdaPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso2/3, Qt::AlignRight);
  ui.CpLambdaPlot->replot();
  ui.betaPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso2/3, Qt::AlignRight);
  ui.betaPlot->replot();
  ui.PmaxPlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso3/3, Qt::AlignRight);
  ui.PmaxPlot->replot();
  ui.PePlot->xAxis->setRange((m_turbine.getWind()->getTime()+0.25), graphReso3/3, Qt::AlignRight);
  ui.PePlot->replot();

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
}
void CSE495_Wind_Turbine_Simulator::controlJenerator(){
	m_jenerator.calculateIV(m_turbine.getBeta());
	m_jenerator.calculatePe(m_turbine.getWm());
	refreshElectricityScreen();
}
void CSE495_Wind_Turbine_Simulator::writeToDetailedView(){


	QString iteration("Iteration=");
	QString tmp = doubleToQStr(iter);
	iteration += tmp;
	iteration += ", ";
	QString QStr_tmp("Time=");
	tmp = doubleToQStr(m_turbine.getWind()->getTime());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Wind Speed=";
	tmp = doubleToQStr(m_turbine.getWind()->getVWind());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "R=";
	tmp = doubleToQStr(m_turbine.getR());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "n=";
	tmp = doubleToQStr(m_turbine.getN());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Lambda=";
	tmp = doubleToQStr(m_turbine.getLambda());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Cp=";
	tmp = doubleToQStr(m_turbine.getCp());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Beta=";
	tmp = doubleToQStr(m_turbine.getBeta());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Pm=";
	tmp = ldoubleToQStr(m_turbine.getPm());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Pt=";
	tmp = ldoubleToQStr(m_mile.getPt());
	QStr_tmp += tmp;
	QStr_tmp += ", ";
	iteration += QStr_tmp;
	QStr_tmp = "Pe=";
	tmp = ldoubleToQStr(m_jenerator.getPe());
	QStr_tmp += tmp;
	iteration += QStr_tmp;
	iteration += "\n";
	ui.detailedLabel->setText(ui.detailedLabel->text()+iteration);
}