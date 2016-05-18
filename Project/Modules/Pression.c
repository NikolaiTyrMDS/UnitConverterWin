#include <stdio.h>

//bar
double bar_to_mbar(double PRESS) {
	PRESS = PRESS * 1000;
	return PRESS;
}

double bar_to_paskal(double PRESS) {
	PRESS = PRESS * 100000;
	return PRESS;
}

double bar_to_kpaskal(double PRESS) {
	PRESS = PRESS * 100;
	return PRESS;
}

double bar_to_Mpaskal(double PRESS) {
	PRESS = PRESS * 0.1;
	return PRESS;
}

double bar_to_gcm(double PRESS) {
	PRESS = PRESS * 1020;
	return PRESS;
}

double bar_to_kgcm(double PRESS) {
	PRESS = PRESS * 1.02;
	return PRESS;
}

double bar_to_toncm(double PRESS) {
	PRESS = PRESS * 0.00102;
	return PRESS;
}

double bar_to_kgm(double PRESS) {
	PRESS = PRESS * 10200;
	return PRESS;
}

double bar_to_tonm(double PRESS) {
	PRESS = PRESS * 10.2;
	return PRESS;
}

double bar_to_newtoncm(double PRESS) {
	PRESS = PRESS * 10;
	return PRESS;
}

double bar_to_newtonm(double PRESS) {
	PRESS = PRESS * 100000;
	return PRESS;
}
//mbar
double mbar_to_bar(double PRESS) {
	PRESS = PRESS / 1000;
	return PRESS;
}

//paskal
double paskal_to_bar(double PRESS) {
	PRESS = PRESS * 0.00001;
	return PRESS;
}

//kpaskal
double kpaskal_to_bar(double PRESS) {
	PRESS = PRESS * 0.01;
	return PRESS;
}
//Mpaskal
double Mpaskal_to_bar(double PRESS) {
	PRESS = PRESS * 10;
	return PRESS;
}
//gcm
double gcm_to_bar(double PRESS) {
	PRESS = PRESS * 0.0009807;
	return PRESS;
}

//kgcm
double kgcm_to_bar(double PRESS) {
	PRESS = PRESS * 0.9807;
	return PRESS;
}

//toncm
double toncm_to_bar(double PRESS) {
	PRESS = PRESS * 980.7;
	return PRESS;
}

//kgm
double kgm_to_bar(double PRESS) {
	PRESS = PRESS * 0.00009807;
	return PRESS;
}

//tonm
double tonm_to_bar(double PRESS) {
	PRESS = PRESS * 0.09807;
	return PRESS;
}

//newtoncm
double newtoncm_to_bar(double PRESS) {
	PRESS = PRESS / 10;
	return PRESS;
}

//newtonm
double newtonm_to_bar(double PRESS) {
	PRESS = PRESS / 100000;
	return PRESS;
}
