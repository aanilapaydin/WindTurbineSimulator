#ifndef RUZGAR_H
#define RUZGAR_H

#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cmath>
#include <ctime>


using namespace std;

#define PI 3.141592

//class Ruzgar definition
class Ruzgar{

public:
	Ruzgar();
	Ruzgar(const double newVBase);
	~Ruzgar();
	double getVBase();
	double getVGust();
	double getVRamp();
	double getTRamp1();
	double getTRamp2();
	double getVNoise();
	double getVWind();
	double getP();
	double getMaxVRamp();
	double getIu();
	double getTime();

	void setVBase(const double newVBase);
	void setVGust(const double newVGust);
	void setVRamp(const double newVRamp);
	void setTRamp1(const double newTRamp1);
	void setTRamp2(const double newTRamp2);
	void setVNoise(const double newVNoise);
	void setP(const double newP);
	void setMaxVRamp(const double newMaxVRamp);
	void setIu(const double newIu);
	void setTime(const double newTime);

	void refreshVGust();
	void refreshVRamp();
	void refreshVNoise();
	void refreshVWind(int selection);
	void refreshTime(double timeRes);

private:
	double vBase;							//Rüzgarýn sabit hýzý m/sn
	double vGust;							//Belirli zaman aralýðýnda beklenen maksimum rüzgar hýzý m/sn
	double vRamp;							//Rampa fonksiyonu þeklindeki deðiþim
	double tRamp1;							//Rampa fonksiyonu baþlangýç zamaný   (sn)
	double tRamp2;							//Rampa fonksiyonu en yüksek olduðu zaman    (sn)
	double maxVRamp;						//Maksimum rampa hýzý tRamp2 için tutulcak
	double vNoise;							//Sisteme etki eden dýþ etkenler m/sn
	double vWind;                           //Süperpozisyona göre Hesaplanan rüzgar hýzý
	double Iu;								//Yer eksenine paralel hava akýmý þiddeti
	double timeSoFar;						//Geçen süre   (sn)
    static const int vBaseDef=10;			//dafeult vBase hýzý
	double p;								//hava yoðunluðu

};

Ruzgar::Ruzgar(){

	this->vBase = 0;
	this->timeSoFar = 0.0;
	this->p = 1.225;
	this->maxVRamp = 0;
	this->tRamp1 = 0.0;
	this->Iu = 1;
}
Ruzgar::Ruzgar(const double newVBase){
	
	if(newVBase>=0 && newVBase<=50){
		
		this->vBase=newVBase;
	}
	else {this->vBase=vBaseDef;}

	this->timeSoFar = 0.0;
}
Ruzgar::~Ruzgar(){

}
double Ruzgar::getVBase(){
	return this->vBase;
}
double Ruzgar::getVGust(){
	return this->vGust;
}
double Ruzgar::getVRamp(){
	return this->vRamp;
}
double Ruzgar::getTRamp1(){
	return this->tRamp1;
}
double Ruzgar::getTRamp2(){
	return this->tRamp2;
}
double Ruzgar::getVNoise(){
	return this->vNoise;
}
double Ruzgar::getVWind(){
	return this->vWind;
}
double Ruzgar::getP(){
	return this->p;
}
double Ruzgar::getMaxVRamp(){
	return this->maxVRamp;
}
double Ruzgar::getIu(){
	return this->Iu;
}
double Ruzgar::getTime(){
	return this->timeSoFar;
}
void Ruzgar::setVBase(const double newVBase){
	if(newVBase>=0 && newVBase<=50){	
		this->vBase=newVBase;
	}
}
void Ruzgar::setVGust(const double newVGust){
	this->vGust = newVGust;
}
void Ruzgar::setVRamp(const double newVRamp){
	this->vRamp = newVRamp;
}
void Ruzgar::setTRamp1(const double newTRamp1){
	this->tRamp1 = newTRamp1;
}
void Ruzgar::setTRamp2(const double newTRamp2){
	this->tRamp2 = newTRamp2;
}
void Ruzgar::setVNoise(const double newVNoise){
	this->vNoise = newVNoise;
}
void Ruzgar::setP(const double newP){
	this->p = newP;
}
void Ruzgar::setMaxVRamp(const double newMaxVRamp){
	this->maxVRamp = newMaxVRamp;
}
void Ruzgar::setIu(const double newIu){
	this->Iu = newIu;
}
void Ruzgar::setTime(const double newTime){
	this->timeSoFar = newTime;
}
void Ruzgar::refreshVGust(){
	this->vGust = 1 + (0.42 * Iu * log(3600/timeSoFar));
}
void Ruzgar::refreshVRamp(){
	
	double tmpVRamp = (1-((timeSoFar-tRamp2)/(tRamp1-tRamp2)));

	this->setVRamp(tmpVRamp);
	this->setTRamp2(timeSoFar);
}
void Ruzgar::refreshVNoise(){
	this->vNoise=((double)((rand()%1000)+1)/1000);
}
void Ruzgar::refreshVWind(int selection){
	if(selection==0){
		this->vWind = vBase + sin(timeSoFar * 10 * (PI / 180.0));
	}
	else if(selection==1){
		this->refreshVNoise();
		this->refreshVGust();
		this->refreshVRamp();
		this->vWind = vBase + vGust + vNoise + vRamp;
	}
	else{
		this->vWind = vBase;
	}
}
void Ruzgar::refreshTime(double timeRes){
	this->timeSoFar+=timeRes;
}

#endif // RUZGAR_H