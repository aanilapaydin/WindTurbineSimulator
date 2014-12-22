#ifndef MIL_H
#define MIL_H

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "turbin.h"

using namespace std;

class Mil{
	public:
		Mil();
		double getNm();
		double getPt();
		void setNm(const double newNm);
		void setPt(const double newPt);
		void calculatePt(const double Pm);	
	private:
		double nm;
		double Pt;
};

//function implementations
Mil::Mil(){
	this->nm = 0.9;
	this->Pt = 0;
}
double Mil::getNm(){
	return this->nm;
}
double Mil::getPt(){
	return this->Pt;
}
void Mil::setNm(const double newNm){
	this->nm = newNm;
}
void Mil::setPt(const double newPt){
	this->Pt = newPt;
}
void Mil::calculatePt(const double Pm){
	this->Pt = Pm * nm;
}

#endif