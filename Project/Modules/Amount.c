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
	AMOUNT = AMOUNT * 1.056688209433 * (pow(10, 12));  // Формула для перевода!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический километр> ---> <пинта> //
double squaredkilometers_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865 * (pow(10,12));  // Формула для перевода!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кубический километр> ---> <жидкая унция> //
double squaredkilometers_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 3.381402270184 * (pow(10,13)).;  // Формула для перевода!!!!!!!!!!!!
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
double squareddecimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2.113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический дециметр> ---> <кварта> //
double squareddecimeters_TO_quarts(double AMOUNT) {
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
double squaredcentimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический сантиметр> ---> <кварта> //
double squaredcentimeters_TO_quarts(double AMOUNT) {
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
double squaredmillimeters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <кубический миллиметр> ---> <кварта> //
	double squaredmillimeters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000001056688209433;  // Формула для перевода  !
	return AMOUNT;
}

// <кубический миллиметр> ---> <жидкая унция> //
	double squaredmillimeters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.00003381402270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения литр  и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <литр> ---> <кубический миллиметр> //
double liters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000000;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <кубический сантиметр> //
double liters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <кубический дециметр> //
double liters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <кубический метр> //
double liters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <кубический километр> //
double liters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-12)) ;  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <литр> ---> <миллилитр> //
double liters_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <галлон> //
double liters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.2199692482991;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <баррель> //
double liters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.006289810770432;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <кварта> //
double liters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 1.056688209433;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <пинта> //
double liters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.8798769931964;  // Формула для перевода
	return AMOUNT;
}

// <литр> ---> <жидкая унция> //
double liters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 33.81402270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения миллилитр и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <миллилитр> ---> <литр> //
double mililiters_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический миллиметр> //
double mililiters_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1000;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический сантиметр> //
double mililiters_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 1;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический дециметр> //
double mililiters_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический метр> //
double mililiters_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT / 1000000;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кубический километр> //
double mililiters_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT / (pow(10,-15));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <миллилитр> ---> <галлон> //
double mililiters_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0002641720523581;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <баррель> //
double mililiters_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000006289810770432;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <кварта> //
double mililiters_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 0.001056688209433;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <пинта> //
double mililiters_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 0.002113376418865;  // Формула для перевода
	return AMOUNT;
}

// <миллилитр> ---> <жидкая унция> //
double mililiters_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 0.03381402270184;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения галлон и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <галлон> ---> <миллилитр> //
double gallons_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785.411784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <литр> //
double gallons_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический миллиметр> //
double gallons_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785411.784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический сантиметр> //
double gallons_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3785.411784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический дециметр> //
double gallons_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический метр> //
double gallons_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.003785411784;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кубический километр> //
double gallons_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 3.785411784 * (pow(10,-12));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <галлон> ---> <баррель> //
double gallons_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT * 0.02380952380952;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <кварта> //
double gallons_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 4;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <пинта> //
double gallons_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 8;  // Формула для перевода
	return AMOUNT;
}

// <галлон> ---> <жидкая унция> //
double gallons_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 128;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения баррель (нефтяной) и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <баррель> ---> <галлон> //
double barrels_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 42;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <миллилитр> //
double barrels_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987.294928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <литр> //
double barrels_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 158.987294928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический миллиметр> //
double barrels_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987294.928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический сантиметр> //
double barrels_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158987.294928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический дециметр> //
double barrels_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 158.987294928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический метр> //
double barrels_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.158987294928;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <кубический километр> //
double barrels_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 1.58987294928 * (pow(10,-10));  // Формула для перевода!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <баррель> ---> <кварта> //
double barrels_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT * 168;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <пинта> //
double barrels_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 336;  // Формула для перевода
	return AMOUNT;
}

// <баррель> ---> <жидкая унция > //
double barrels_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 5376;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения кварта и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <кварта> ---> <баррель> //
double quarts_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 168;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <галлон> //
double quarts_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT * 0.25;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <миллилитр> //
double quarts_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 946.352946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <литр> //
double quarts_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.946352946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический миллиметр> //
double quarts_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 946352.946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический сантиметр> //
double quarts_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 946.352946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический дециметр> //
double quarts_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.946352946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический метр> //
double quarts_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000946352946;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <кубический километр> //
double quarts_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 9.46352946 * (pow(10,-13));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <кварта> ---> <пинта> //
double quarts_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT * 2;  // Формула для перевода
	return AMOUNT;
}

// <кварта> ---> <жидкая унция> //
double quarts_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 32;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения пинта и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <пинта> ---> <кварта> //
double pints_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT / 2;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <баррель> //
double pints_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 336;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <галлон> //
double pints_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT / 8;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <миллилитр> //
double pints_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 473.176473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <литр> //
double pints_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.473176473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический миллиметр> //
double pints_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 473176.473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический сантиметр> //
double pints_TO_squaredcentimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 473.176473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический дециметр> //
double pints_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.473176473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический метр> //
double pints_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.000473176473;  // Формула для перевода
	return AMOUNT;
}

// <пинта> ---> <кубический километр> //
double pints_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 4.73176473 * (pow(10,-13));  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <пинта> ---> <жидкая унция> //
double pints_TO_flozs(double AMOUNT) {
	AMOUNT = AMOUNT * 16;  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

/*------------------------Единица измерения жидкая унция и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <жидкая унция> ---> <пинта> //
double flozs_TO_pints(double AMOUNT) {
	AMOUNT = AMOUNT / 16;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кварта> //
double flozs_TO_quarts(double AMOUNT) {
	AMOUNT = AMOUNT / 32;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <баррель> //
double flozs_TO_barrels(double AMOUNT) {
	AMOUNT = AMOUNT / 5376;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <галлон> //
double flozs_TO_gallons(double AMOUNT) {
	AMOUNT = AMOUNT / 128;  // Формула для перевода !!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!!
	return AMOUNT;
}

// <жидкая унция> ---> <миллилитр> //
double flozs_TO_mililiters(double AMOUNT) {
	AMOUNT = AMOUNT * 29.5735295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <литр> //
double flozs_TO_liters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0295735295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический миллиметр> //
double flozs_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 29573.5295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический сантиметр> //
double flozs_TO_squaredmillimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 29.5735295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический дециметр> //
double flozs_TO_squareddecimeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0295735295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический метр> //
double flozs_TO_squaredmeters(double AMOUNT) {
	AMOUNT = AMOUNT * 0.0000295735295625;  // Формула для перевода
	return AMOUNT;
}

// <жидкая унция> ---> <кубический километр> //
double flozs_TO_squaredkilometers(double AMOUNT) {
	AMOUNT = AMOUNT * 2.95735295625 * (pow(10,-14));  // Формула для перевода
	return AMOUNT;
}

/*-----------------------------------------------------------------------------------------------------------*/

