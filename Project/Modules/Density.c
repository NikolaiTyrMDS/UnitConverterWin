#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ ПЛОТНОСТИ */

// <Килограмм на кубический метр> ---> <Килограмм на кубический сантиметр> //
double KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(double DENSITY) {
	DENSITY = DENSITY / 1000000;
	return DENSITY;
}

// <Килограмм на кубический сантиметр> ---> <Килограмм на кубический метр> //
double KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY * 1000000;
	return DENSITY;
}

// <Килограмм на кубический метр> ---> <Грамм на кубический метр> //
double KilogramsPerCubicMeter2GramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY * 1000;
	return DENSITY;
}

// <Грамм на кубический метр> ---> <Килограмм на кубический метр> //
double GramsPerCubicMeter2KilogramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY / 1000;
	return DENSITY;
}

// <Килограмм на кубический метр> ---> <Грамм на кубический сантиметр> //
double KilogramsPerCubicMeter2GramsPerCubicSantimeter(double DENSITY) {
	DENSITY = DENSITY / 1000;
	return DENSITY;
}

// <Грамм на кубический сантиметр> ---> <Килограмм на кубический метр> //
double GramsPerCubicSantimeter2KilogramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY * 1000;
	return DENSITY;
}

// <Килограмм на кубический метр> ---> <Грамм на кубический миллиметр> //
double KilogramsPerCubicMeter2GramsPerCubicMillimeter(double DENSITY) {
	DENSITY = DENSITY / 1000000;
	return DENSITY;
}

// <Грамм на кубический миллиметр> ---> <Килограмм на кубический метр> //
double GramsPerCubicMillimeter2KilogramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY * 1000000;
	return DENSITY;
}

// <Килограмм на кубический метр> ---> <Миллиграмм на кубический метр> //
double KilogramsPerCubicMeter2MilligramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY / 1000000;
	return DENSITY;
}

// <Миллиграмм на кубический метр> ---> <Килограмм на кубический метр> //
double MilligramsPerCubicMeter2KilogramsPerCubicMeter(double DENSITY) {
	DENSITY = DENSITY * 1000000;
	return DENSITY;
}
