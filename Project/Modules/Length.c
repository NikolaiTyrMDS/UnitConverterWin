#include <stdio.h>
#include <math.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ДЛИНЫ  */

/*
миллиметр (мм)
метр (м)
сантиметр (см)
дециметр (дм)
километр (км)
сажень
аршин
миля (mi)
ярд (yd)
фут (ft)
микрометр (микрон)
нанометр (нм)
ангстрем (А)
морская миля */

/*------------------------Единица измерения метр и её перевод в выше перечисленные единицы измерения и соответственно из перечисленных единиц измерения  в метры----------------------*/

/*------------ИЗ МЕТРОВ--------------*/
// <метр> ---> <миллиметр> //
double meters_TO_millimeters(double LENGTH) {
	LENGTH = LENGTH * 1000;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <сантиметр> //
double meters_TO_centimeters(double LENGTH) {
	LENGTH = LENGTH * 100;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <дециметр> //
double meters_TO_decimeters(double LENGTH) {
	LENGTH = LENGTH * 10;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <километр> //
double meters_TO_kilometers(double LENGTH) {
	LENGTH = LENGTH / 1000;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <сажень> //
double meters_TO_fathoms(double LENGTH) {
	LENGTH = LENGTH * 0.4686914135733;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <аршин> //
double meters_TO_arshins(double LENGTH) {
	LENGTH = LENGTH * 1.40607424072;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <миля> //
double meters_TO_miles(double LENGTH) {
	LENGTH = LENGTH * 0.0006213711922373;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <ярд> //
double meters_TO_yards(double LENGTH) {
	LENGTH = LENGTH * 1.093613298338;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <фут> //
double meters_TO_foots(double LENGTH) {
	LENGTH = LENGTH * 3.280839895013;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <микрометр> //
double meters_TO_micrometers(double LENGTH) {
	LENGTH = LENGTH * 1000000;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <нанометр> //
double meters_TO_nanometers(double LENGTH) {
	LENGTH = LENGTH * 1000000000;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <ангстрем> //
double meters_TO_angstroms(double LENGTH) {
	LENGTH = LENGTH * 10000000000;  // Формула для перевода
	return LENGTH;
}

// <метр> ---> <морская миля> //
double meters_TO_nauticalmiles(double LENGTH) {
	LENGTH = LENGTH * 10000000000;  // Формула для перевода
	return LENGTH;
}

/*------------В МЕТРЫ--------------*/
// <миллиметр> ---> <метр> //
double millimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000;  // Формула для перевода
	return LENGTH;
}

// <сантиметр> ---> <метр> //
double centimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 100;  // Формула для перевода
	return LENGTH;
}

// <дециметр> ---> <метр> //
double decimeters_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 10;  // Формула для перевода
	return LENGTH;
}

// <километр> ---> <метр> //
double kilometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1000;  // Формула для перевода
	return LENGTH;
}

// <сажень> ---> <метр> //
double fathoms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 2.1336;  // Формула для перевода
	return LENGTH;
}

// <аршин> ---> <метр> //
double arshins_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.7112;  // Формула для перевода
	return LENGTH;
}

// <миля> ---> <метр> //
double miles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1609.344;  // Формула для перевода
	return LENGTH;
}

// <ярд> ---> <метр> //
double yards_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.9144;  // Формула для перевода
	return LENGTH;
}

// <фут> ---> <метр> //
double foots_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 0.3048;  // Формула для перевода
	return LENGTH;
}

// <микрометр> ---> <метр> //
double micrometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH / 1000000;  // Формула для перевода
	return LENGTH;
}

// <нанометр> ---> <метр> //
double nanometers_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -9));  // Формула для перевода!!!!!!!!!!!!!!!
	return LENGTH;
}

// <ангстрем> ---> <метр> //
double angstroms_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1 * (pow(10, -10));  // Формула для перевода !!!!!!!!!!!!!!!!!!
	return LENGTH;
}

// <морская миля> ---> <метр> //
double nauticalmiles_TO_meters(double LENGTH) {
	LENGTH = LENGTH * 1852;  // Формула для перевода
	return LENGTH;
}


