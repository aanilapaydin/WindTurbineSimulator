//jenerator.h
#ifndef JENERATOR_H
#define JENERATOR_H

#include <cstdio>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include "mil.h"

using namespace std;

class Jenerator{
	public:
		Jenerator();
		long double getPe();
		void calculateIV(double beta);
		void setPe(const long double newPe);
		void calculatePe(const double Pt);	
		
		double Ia;
		double Ib;
		double Ic;
		double Va;
		double Vb;
		double Vc;
		double Lpm;
		double Ld;
		double Lq;
		double Rs;
		double D;
		double J;
		double PKS;
		double DSY;
		long double Pe;
		double Te;
		double Vsd;
		double Vsq;
		double We;

		double id_n;
		double iq_n;
		double id_o;
		double iq_o;
		double lambda_d;
		double lambda_q;
};
//function implementations
Jenerator::Jenerator(){
	
	Lpm = 0.128;
	Ld = 0.002;
	Lq = 0.002;
	Rs = 0.18;
	D = 750; 
	J = 0.48;
	PKS = 8;
	DSY = 4;
	id_o = 0;
	iq_o = 0;

	this->Pe = 0;
}
void Jenerator::calculateIV(double beta){
	Ia = 100 * sin(beta);
	Ib = 100 * sin(beta - 2.094);
	Ic = 100 * sin(beta + 2.094);
	Va = 380 * sin(beta);
	Vb = 380 * sin(beta - 2.094);
	Vc = 380 * sin(beta + 2.094);
	
	Vsd = (253*(((sin(beta))*(cos(beta)))+((sin(beta - 2.094))*(cos(beta -2.094))) + ((sin(beta + 2.094))* (cos(beta + 2.094)))));
	Vsq = (253*((sin(beta)) * (sin(beta)) + (sin(beta - 2.094)) * (sin(beta-2.094)) + (sin(beta + 2.094)) * (sin(beta + 2.094))));

}
long double Jenerator::getPe(){
	return this->Pe;
}
void Jenerator::setPe(const long double newPe){
	this->Pe = newPe;
}
void Jenerator::calculatePe(const double Wm){
	We = Wm * PKS/2;

	id_n = ((Vsd - (Rs * id_o) + (We * Lq * iq_o)) / (Ld*D));
	iq_n = ((Vsq - (Rs * iq_o) - (We * (Ld * id_o - Lpm))) / (Lq*D));

	id_o = id_n;
	iq_o = iq_n;

	lambda_d = (Ld * id_n + Lpm);
	lambda_q = (Lq * iq_n);

	Pe = (1.5 * We * ((lambda_d * iq_n) - (lambda_q * id_n)));
	Te = Pe / Wm;
}

#endif