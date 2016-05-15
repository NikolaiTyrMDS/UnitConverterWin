#include <stdio.h>
#include <math.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ОБЪЕМА  */

/*
кубический километр (км³)
кубический метр (м³)
кубический дециметр (дм³)
кубический сантиметр (см³)
кубический миллиметр (mm³)
литр (л)
миллилитр (мл)
галлон (gal)
баррель (нефтяной)
кварта (qt)
пинта (pt)
жидкая унция (oz)
 */

/*------------------------Единица измерения Кубический метр и её перевод в выше перечисленные единицы измерения и соответственно из перечисленных единиц измерения  в Кубический метр-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------ИЗ КУБИЧЕСКОГО МЕТРА--------------*/
// <кубический метр> ---> <кубический километр> //
double squaredmeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT /  (pow(10, -9));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический метр> ---> <кубический дециметр> //
double squaredmeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <кубический сантиметр> //
double squaredmeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <кубический миллиметр > //
double squaredmeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <литр> //
double squaredmeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <миллилитр> //
double squaredmeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <галлон> //
double squaredmeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 264.1720523581;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <баррель> //
double squaredmeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6.289810770432;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <пинта> //
double squaredmeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 1056.688209433;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <кварта> //
double squaredmeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <жидкая унция> //
double squaredmeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33814.02270184;  // Формула для перевода
	return AMOUNT;
}


/*------------В КУБИЧЕСКИЕ МЕТРЫ--------------*/

// <кубический километр> ---> <кубический метр> //
double squaredkilometers_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <кубический метр> //
double squareddecimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кубический метр> //
double squaredcentimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <кубический метр> //
double squaredmillimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-9));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <литр> ---> <кубический метр> //
double liters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический метр> //
double mililiters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический метр> //
double gallons_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.003785411784;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический метр> //
double barrels_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.158987294928;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический метр> //
double quarts_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000946352946;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический метр> //
double pints_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000473176473;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический метр> //
double flozs_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0000295735295625;  // Формула для перевода
	return AMOUNT;
}

