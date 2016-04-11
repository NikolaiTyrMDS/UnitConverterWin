#include <stdio.h>
// DONE;
/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ ПЛОТНОСТИ */

// <Квадратные метры> ---> <Гектары> //
double SquareMeter2Hectare(double AREA) {
	AREA = AREA / 10000;
	return AREA;
}

// <Гектары> ---> <Квадратные метры> //
double Hectare2SquareMeter(double AREA) {
	AREA = AREA * 10000;
	return AREA;
}

// <Квадратные метры> ---> <Ары> //
double SquareMeter2Ar(double AREA) {
	AREA = AREA / 100;
	return AREA;
}

// <Ары> ---> <Квадратные метры> //
double Ar2SquareMeter(double AREA) {
	AREA = AREA * 100;
	return AREA;
}

// <Гектары> ---> <Ары> //
double Hectare2Ar(double AREA) {
	AREA = AREA / 100;
	return AREA;
}

// <Ары> ---> <Гектары> //
double Ar2Hectare(double AREA) {
	AREA = AREA * 100;
	return AREA;
}

// <Квадратные километры> ---> <Квадратные метры> //
double SquarekMeter2SquareMeter(double AREA) {
	AREA = AREA * 1000000;
	return AREA;
}

// <Квадратные метры> ---> <Квадратные километры> //
double SquareMeter2SquarekMeter(double AREA) {
	AREA = AREA / 1000000;
	return AREA;
}

// <Квадратные километры> ---> <Гектары> //
double SquarekMeter2Hectare(double AREA) {
	AREA = AREA * 100;
	return AREA;
}

// <Гектары> ---> <Квадратные километры> //
double Hectare2SquarekMeter(double AREA) {
	AREA = AREA / 100;
	return AREA;
}

// <Квадратные километры> ---> <Ары> //
double SquarekMeter2Ar(double AREA) {
	AREA = AREA * 10000;
	return AREA;
}

// <Ары> ---> <Квадратные километры> //
double Ar2SquarekMeter(double AREA) {
	AREA = AREA / 10000;
	return AREA;
}

// <Квадратные метры> ---> <Акры> //
double SquareMeter2Acr(double AREA) {
	AREA = AREA / 4046.854;
	return AREA;
}

// <Акры> ---> <Квадратные метры> //
double Acr2SquareMeter(double AREA) {
	AREA = AREA * 4046.854;
	return AREA;
}

// <Квадратные километры> ---> <Акры> //
double SquarekMeter2Acr(double AREA) {
	AREA = AREA / 0.004;
	return AREA;
}

// <Акры> ---> <Квадратные километры> //
double Acr2SquarekMeter(double AREA) {
	AREA = AREA * 0.004;
	return AREA;
}

// <Гектары> ---> <Акры> //
double Hectare2Acr(double AREA) {
	AREA = AREA / 0.405;
	return AREA;
}

// <Акры> ---> <Гектары> //
double Acr2Hectare(double AREA) {
	AREA = AREA * 0.405;
	return AREA;
}

// <Ары> ---> <Акры> //
double Ar2Acr(double AREA) {
	AREA = AREA / 40.469;
	return AREA;
}

// <Акры> ---> <Ары> //
double Acr2Ar(double AREA) {
	AREA = AREA * 40.469;
	return AREA;
}

// <Квадратный сантиметр> ---> <Квадратный метр> //
double SquaresMeter2SquareMeter(double AREA) {
	AREA = AREA / 10000;
	return AREA;
}

// <Квадратный метр> ---> <Квадратный сантиметр> //
double SquareMeter2SquaresMeter(double AREA) {
	AREA = AREA * 10000;
	return AREA;
}

// <Квадратный сантиметр> ---> <Квадратный миллиметр> //
double SquaresMeter2SquaremMeter(double AREA) {
	AREA = AREA / 100;
	return AREA;
}

// <Квадратный миллиметр> ---> <Квадратный сантиметр> //
double SquaremMeter2SquaressMeter(double AREA) {
	AREA = AREA * 100;
	return AREA;
}

// <Квадратный сантиметр> ---> <Квадратный дюйм> //
double SquaressMeter2SquareInch(double AREA) {
	AREA = AREA / 0.155;
	return AREA;
}

// <Квадратный дюйм> ---> <Квадратный сантиметр> //
double SquaremInch2SquaressMeter(double AREA) {
	AREA = AREA * 0.155;
	return AREA;
}

// <Квадратный сантиметр> ---> <Квадратный метр> //
double SquaressMeter2SquareMeter(double AREA) {
	AREA = AREA / 10000;
	return AREA;
}

// <Квадратный метр> ---> <Квадратный сантиметр> //
double SquareMeter2SquaressMeter(double AREA) {
	AREA = AREA * 10000;
	return AREA;
}

// <Квадратный сантиметр> ---> <Ар> //
double SquaressMeter2Ar(double AREA) {
	AREA = AREA / 1000000;
	return AREA;
}

// <Ар> ---> <Квадратный сантиметр> //
double Ar2SquaressMeter(double AREA) {
	AREA = AREA * 1000000;
	return AREA;
}

// <Квадратный сантиметр> ---> <Гектар> //
double SquaressMeter2Hectare(double AREA) {
	AREA = AREA / 100000000;
	return AREA;
}

// <Гектар> ---> <Квадратный сантиметр> //
double Hectare2SquaressMeter(double AREA) {
	AREA = AREA * 100000000;
	return AREA;
}

// <Квадратный сантиметр> ---> <Квадратный километр> //
double SquaressMeter2SquarekMeter(double AREA) {
	AREA = AREA / 10000000000;
	return AREA;
}

// <Квадратный километр> ---> <Квадратный сантиметр> //
double SquarekMeter2SquaressMeter(double AREA) {
	AREA = AREA * 10000000000;
	return AREA;
}

// <Квадратный сантиметр> ---> <Акр> //
double SquaressMeter2Acr(double AREA) {
	AREA = AREA / 40468544,812;
	return AREA;
}

// <Акр> ---> <Квадратный сантиметр> //
double Acr2SquaressMeter(double AREA) {
	AREA = AREA * 40468544,812;
	return AREA;
}

// <Квадратный дюйм> ---> <Квадратный метр> //
double SquareInch2SquareMeter(double AREA) {
	AREA = AREA / 1550,003;
	return AREA;
}

// <Квадратный метр> ---> <Квадратный дюйм> //
double SquareMeter2SquareInch(double AREA) {
	AREA = AREA * 1550,003;
	return AREA;
}

// <Квадратный дюйм> ---> <Ар> //
double SquareInch2Ar(double AREA) {
	AREA = AREA / 155000,3;
	return AREA;
}

// <Ар> ---> <Квадратный дюйм> //
double Ar2SquareInch(double AREA) {
	AREA = AREA * 155000,3;
	return AREA;
}

// <Квадратный дюйм> ---> <Гектар> //
double SquareInch2Hectare(double AREA) {
	AREA = AREA / 15500030;
	return AREA;
}

// <Гектар> ---> <Квадратный дюйм> //
double Hectare2SquareInch(double AREA) {
	AREA = AREA * 15500030;
	return AREA;
}

// <Квадратный дюйм> ---> <Квадратный километр> //
double SquareInch2SquarekMeter(double AREA) {
	AREA = AREA / 15500030000;
	return AREA;
}

// <Квадратный километр> ---> <Квадратный дюйм> //
double SquarekMeter2SquareInch(double AREA) {
	AREA = AREA * 15500030000;
	return AREA;
}

// <Квадратный миллиметр> ---> <Квадратный метр> //
double SquaremMeter2SquareMeter(double AREA) {
	AREA = AREA / 1000000;
	return AREA;
}

// <Квадратный метр> ---> <Квадратный миллиметр> //
double SquareMeter2SquaremMeter(double AREA) {
	AREA = AREA * 1000000;
	return AREA;
}

// <Квадратный миллиметр> ---> <Ар> //
double SquaremMeter2Ar(double AREA) {
	AREA = AREA / 100000000;
	return AREA;
}

// <Ар> ---> <Квадратный миллиметр> //
double Ar2SquaremMeter(double AREA) {
	AREA = AREA * 100000000;
	return AREA;
}

// <Квадратный миллиметр> ---> <Гектар> //
double SquaremMeter2Hectare(double AREA) {
	AREA = AREA / 10000000000;
	return AREA;
}

// <Гектар> ---> <Квадратный миллиметр> //
double Hectare2SquaremMeter(double AREA) {
	AREA = AREA * 10000000000;
	return AREA;
}

// <Квадратный миллиметр> ---> <Квадратный километр> //
double SquaremMeter2SquarekMeter(double AREA) {
	AREA = AREA / 1000000000000;
	return AREA;
}

// <Квадратный километр> ---> <Квадратный миллиметр> //
double SquarekMeter2SquaremMeter(double AREA) {
	AREA = AREA * 1000000000000;
	return AREA;
}

// <Квадратный миллиметр> ---> <Квадратный дюйм> //
double SquaremMeter2SquareInch(double AREA) {
	AREA = AREA / 6,452;
	return AREA;
}

// <Квадратный дюйм> ---> <Квадратный миллиметр> //
double SquareInch2SquaremMeter(double AREA) {
	AREA = AREA * 6,452;
	return AREA;
}
