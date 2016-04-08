#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ МАССЫ  */

/* Грамм, Килограмм, Центнер, Тонна, Карат, Стоун, Фунт, Унция, Драхма, Гран*/

/*------------------------Единица измерения Грамм и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Грамм> ---> <Килограмм> //
double Grams_TO_Kilograms(double MASS) {
	MASS = MASS / 1000;  // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Центнер> //
double Grams_TO_Quintals(double MASS) {
	MASS = MASS / 100000;  // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Тонна> //
double Grams_TO_Tonnes(double MASS) {
	MASS = MASS / 1000000;  // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Карат> //
double Grams_TO_Carats(double MASS) {
	MASS = MASS * 5;  // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Стоун> //
double Grams_TO_Stones(double MASS) {
	MASS = MASS * 0.000157473;  // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Фунт> //
double Grams_TO_Funts(double MASS) {
	MASS = MASS / 453.59237;   // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Унция> //
double Grams_TO_Ounces(double MASS) {
	MASS = MASS / 28.349523;   // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Драхма> //
double Grams_TO_Drachmas(double MASS) {
	MASS = MASS * 0.2941176470588;   // Формала для перевода
	return MASS;
}

// <Грамм> ---> <Гран> //
double Grams_TO_Grains(double MASS) {
	MASS = MASS * 15.4323;  // Формала для перевода
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Килограмм и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Килограмм> ---> <Грамм> //
double Kilograms_TO_Grams(double MASS) {
	MASS = MASS * 1000;  // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Центнер> //
double Kilograms_TO_Quintals(double MASS) {
	MASS = MASS / 100;   // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Тонна> //
double Kilograms_TO_Tonnes(double MASS) {
	MASS = MASS / 1000;  // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Карат> //
double Kilograms_TO_Carats(double MASS) {
	MASS = MASS * 5000;  // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Стоун> //
double Kilograms_TO_Stones(double MASS) {
	MASS = MASS * 0.157473; // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Фунт> //
double Kilograms_TO_Funts(double MASS) {
	MASS = MASS * 4.40925; // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Унцию> //
double Kilograms_TO_Ounces(double MASS) {
	MASS = MASS * 35.274; // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Драхма> //
double Kilograms_TO_Drachmas(double MASS) {
	MASS = MASS * 564.382; // Формала для перевода
	return MASS;
}

// <Килограмм> ---> <Гран> //
double Kilograms_TO_Grains(double MASS) {
	MASS = MASS * 15432.3; // Формала для перевода
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Центнер и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Центнер> ---> <Килограмм> //
double Quintals_TO_Kilograms(double MASS) {
	MASS = MASS * 100;   // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Грамм> //
double Quintals_TO_Grams(double MASS) {
	MASS = MASS * 100000;  // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Тонна> //
double Quintals_TO_Tonnes(double MASS) {
	MASS = MASS / 10; // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Карат> //
double Quintals_TO_Carats(double MASS) {
	MASS = MASS * 500000; // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Стоун> //
double Quintals_TO_Stones(double MASS) {
	MASS = MASS * 15.7473;  // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Фунт> //
double Quintals_TO_Funts(double MASS) {
	MASS = MASS * 220.462;  // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Унция> //
double Quintals_TO_Ounces(double MASS) {
	MASS = MASS * 3527.4;  // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Драхма> //
double Quintals_TO_Drachmas(double MASS) {
	MASS = MASS * 56438.2; // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Гран> //
double Quintals_TO_Grains(double MASS) {
	MASS = MASS * 1543235.83529; // Формула для перевода
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Тонна и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Тонна> ---> <Центнер> //
double Tonnes_TO_Quintals(double MASS) {
	MASS = MASS * 10;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Килограмм> //
double Tonnes_TO_Kilograms(double MASS) {
	MASS = MASS * 1000;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Грамм> //
double Tonnes_TO_Grams(double MASS) {
	MASS = MASS * 1000000;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Карат> //
double Tonnes_TO_Carats(double MASS) {
	MASS = MASS * 5000000;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Стоун> //
double Tonnes_TO_Stones(double MASS) {
	MASS = MASS * 157.473;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Фунт> //
double Tonnes_TO_Funts(double MASS) {
	MASS = MASS * 2204.62;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Унция> //
double Tonnes_TO_Ounces(double MASS) {
	MASS = MASS * 35274;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Драхма> //
double Tonnes_TO_Drachmas(double MASS) {
	MASS = MASS  * 564382;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Гран> //
double Tonnes_TO_Grains(double MASS) {
	MASS = MASS * 15430000;   // Формула для перевода
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Карат и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Карат> ---> <Тонна> //
double Carats_TO_Tonnes(double MASS) {
	MASS = MASS / 5000000;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Центнер> //
double Carats_TO_Quintals(double MASS) {
	MASS = MASS / 500000;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Килограмм> //
double Carats_TO_Kilograms(double MASS) {
	MASS = MASS / 5000;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Грамм> //
double Carats_TO_Grams(double MASS) {
	MASS = MASS / 5;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Стоун> //
double Carats_TO_Stones(double MASS) {
	MASS = MASS * 3.1495;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Фунт> //
double Carats_TO_Funts(double MASS) {
	MASS = MASS * 0.000440925;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Унция> //
double Carats_TO_Ounces(double MASS) {
	MASS = MASS * 0.00705479;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Драхма> //
double Carats_TO_Drachmas(double MASS) {
	MASS = MASS * 0.112876;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Гран> //
double Carats_TO_Grains(double MASS) {
	MASS = MASS * 3.08647;   // Формула для перевода
	return MASS;
}

/*--------------------------------------------------------------------------*/
