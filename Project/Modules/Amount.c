#include <stdio.h>
#include <math.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ОБЪЕМА  */

/*
кубический километр (км³)
кубический метр (м³)
кубический дециметр (дм³)
кубический сантиметр (см³)
кубический миллиметр (mm³)
литр (л)!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
миллилитр (мл)
галлон (gal)
баррель (нефтяной)
кварта (qt)
пинта (pt)
жидкая унция (oz)
 */

/*------------------------Единица измерения Кубический километр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кубический километр> ---> <кубический метр> //
double squaredkilometers_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <кубический дециметр> //
double squaredkilometers_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <кубический сантиметр> //
double squaredkilometers_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,15));  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <кубический миллиметр> //
double squaredkilometers_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,18));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический километр> ---> <литр> //
double squaredkilometers_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <миллилитр> //
double squaredkilometers_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10, 15));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический километр> ---> <галлон> //
double squaredkilometers_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 264172052358.1;  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <баррель> //
double squaredkilometers_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6289810770.432;  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <кварта> //
double squaredkilometers_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433 * (pow(10, 12));  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <пинта> //
double squaredkilometers_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865(pow(10,12));  // Формула для перевода
	return AMOUNT;
}

// <кубический километр> ---> <жидкая унция> //
double squaredkilometers_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 3.381402270184(pow(10,13)).;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения Кубический метр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кубический метр> ---> <кубический километр> //
double squaredmeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT /  (pow(10, -9);  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
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
double squaredmeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1056.688209433;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <кварта> //
double squaredmeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический метр> ---> <жидкая унция> //
double squaredmeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33814.02270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения кубический дециметр  и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кубический дециметр> ---> <кубический метр> //
double squareddecimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <кубический километр> //
double squareddecimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10, -12));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический дециметр> ---> <кубический сантиметр> //
double squareddecimeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <кубический миллиметр> //
double squareddecimeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <литр> //
double squareddecimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <миллилитр> //
double squareddecimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <галлон> //
double squareddecimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.2199692482991;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <баррель> //
double squareddecimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.006289810770432;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <пинта> //
double squareddecimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <кварта> //
double squareddecimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <жидкая унция> //
double squareddecimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33.81402270184;  // Формула для перевода
	return AMOUNT;
}
/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения кубический сантиметр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кубический сантиметр> ---> <кубический дециметр> //
double squaredcentimeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кубический метр> //
double squaredcentimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кубический километр> //
double squaredcentimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-15));  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кубический миллиметр> //
double squaredcentimeters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <литр> //
double squaredcentimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <миллилитр> //
double squaredcentimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <галлон> //
double squaredcentimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0002641720523581;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <баррель> //
double squaredcentimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000006289810770432;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <пинта> //
double squaredcentimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кварта> //
double squaredcentimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.001056688209433;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <жидкая унция> //
double squaredcentimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.03381402270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения кубический миллиметр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кубический миллиметр> ---> <кубический сантиметр> //
double squaredmillimeters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <кубический дециметр> //
double squaredmillimeters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <кубический метр> //
double squaredmillimeters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-9));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический миллиметр> ---> <кубический километр> //
double squaredmillimeters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-18));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический миллиметр> ---> <литр> //
double squaredmillimeters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <миллилитр> //
double squaredmillimeters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <галлон> //
double squaredmillimeters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 2.641720523581 * (pow(10,-7);  // Формула для перевода  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический миллиметр> ---> <баррель> //
double squaredmillimeters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 6.289810770432 * (pow(10,-9);  // Формула для перевода  !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический миллиметр> ---> <пинта> //
double squaredmillimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <кварта> //
	double squaredmillimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000001056688209433;  // Формула для перевода  !
	return AMOUNT;
}

// <кубический миллиметр> ---> <жидкая унция> //
	double squaredmillimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.00003381402270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/
