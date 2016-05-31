#include <stdio.h>
// DONE;
/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ ПЛОЩАДИ */

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
