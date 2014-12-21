#ifndef TURBIN_H
#define TURBIN_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include "ruzgar.h"

using namespace std;

#define DEFAULT_VBASE 10

//class Mekanik definition
class Turbin{
	public:
		Turbin();
		Ruzgar* getWind();													//Getter functions
		double getLambda();
		double getR();
		double getWm();
		double getVOutput();
		long double getPm();
		long double getTm();
		double getCp();
		double getBeta();
		double getN();
		double getTA();
		double getTimeRes();
		void setWind(Ruzgar* newWind);
		void setLambda(const double newL);
		void setWm(const double newWm);
		void setVOutput(const double newVOutput);
		void setPm(const long double newPm);
		void setTm(const long double newTm);
		void setCp(const double newCp);
		void setBeta(const double newBeta);								//Beta deðiþimi önemli bir kontrol mekanizmasý olmasý lazým!!!!!!!!!!!!!!!!
		void setN(const double newN);	
		void setR(const double newR);
		void setTA(const double newTA);
		void setTimeRes(const double newTimeRes);
		void calculateLambda();
		void calculateWm();
		void calculateVOutput();
		void calculatePm();
		void calculateTm();
		void calculateCp();
		void controlN();
		void calculateBeta();		


	private:
		Ruzgar* wind;														//Turbinin ruzgari
		double lambda;														//Kanat uc hiz orani		1/3 iken maksimum	vOutput/vWind			
		double R;															//Rotor capi	
		double Wm;															//Kanat dönme hýzý				(2*PI*n)/60     burdaki n rotor devir sayisi
		double vOutput;														//Turbinden çýkan rüzgar hizi		Wm*R
		long double Pm;														//Üretilen mekaniksel guc
		long double Tm;														//Tork								Pm/Wm
		double Cp;															//Turbin verimliliði                %59'u bulmalý sürekli	
		double beta;														//Turbin gövde acýsý				Burdaki deðisim direk verimliliði etkiler.
		double n;															//Rotor devir sayýsý dk da				
		double TA;															//Turbin kanat ivmelenmesi sn'de
		double timeRes;														//Grafik icin time Resolution burdada gerekli

};

////////////////////////////////////////////////////////////////default constructor                      
Turbin::Turbin(){
	this->n = 0;
	this->beta = 0;
	this->Cp = 0;
	this->TA = 1.00;
}
/////////////////////////////////////////////////////////////////getters
Ruzgar* Turbin::getWind(){
	return this->wind;
}
double Turbin::getLambda(){
	return this->lambda;
}
double Turbin::getR(){
	return this->R;
}
double Turbin::getWm(){
	return this->Wm;
}
double Turbin::getVOutput(){
	return this->vOutput;
}		
long double Turbin::getPm(){
	return this->Pm;
}
long double Turbin::getTm(){
	return this->Tm;
}
double Turbin::getCp(){
	return this->Cp;
}
double Turbin::getBeta(){
	return this->beta;
}
double Turbin::getN(){
	return this->n;
}
double Turbin::getTA(){
	return this->TA;
}
double Turbin::getTimeRes(){
	return this->timeRes;
}
//////////////////////////////////////////////////////setters
void Turbin::setWind(Ruzgar* newWind){
	this->wind = newWind;
}
void Turbin::setLambda(const double newL){
	this->lambda = newL;
}
void Turbin::setWm(const double newWm){
	this->Wm = newWm;
}
void Turbin::setVOutput(const double newVOutput){
	this->vOutput = newVOutput;
}
void Turbin::setPm(const long double newPm){
	this->Pm = newPm;
}
void Turbin::setTm(const long double newTm){
	this->Tm = newTm;
}
void Turbin::setCp(const double newCp){
	this->Cp = newCp;
}
void Turbin::setBeta(const double newBeta){											//Beta deðiþimi önemli kontrol mekanizmasý olmasý lazým
	this->beta = newBeta;
}
void Turbin::setN(const double newN){
	this->n = newN;
}
void Turbin::setR(const double newR){
	this->R = newR;
}
void Turbin::setTA(const double newTA){
	this->TA = newTA;
}
void Turbin::setTimeRes(const double newTimeRes){
	this->timeRes = newTimeRes;
}
////////////////////////////////////////////////////////////////////calculate functions
void Turbin::calculateLambda(){
	this->calculateWm();
	this->lambda = (this->Wm * this->R)/this->wind->getVWind();
}		
void Turbin::calculateWm(){
	this->Wm = (2 * PI * n)/60;
}		
void Turbin::calculateVOutput(){
	this->vOutput = Wm * R;
}
void Turbin::calculatePm(){
	this->Pm = (1.0/2) * (this->wind->getP()) * PI * (pow(this->R,2)) * (this->Cp) * (pow(this->wind->getVWind(),3));
}
void Turbin::calculateTm(){
	this->Tm = this->Pm / this->Wm;
}
void Turbin::calculateCp(){
	double param = sin((PI*(lambda-2))/(13));
	this->Cp = ((0.44-(0.0167*beta))*param)-(0.00184*(lambda-2)*beta);
}
void Turbin::controlN(){
	if(this->lambda < 1/3.0){
		n += (60 * TA * timeRes)/ (2 * PI * R); 
	}
	else{
		n -= (60 * TA * timeRes)/ (2 * PI * R); 
	}
}
void Turbin::calculateBeta(){
		
	this->calculateVOutput();

	if(Cp  > (16.0/27)){
		beta-=0.1;
	}
	else{
		beta+=0.1;
	}
}
#endif