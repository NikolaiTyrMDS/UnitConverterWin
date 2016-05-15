
#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ МАССЫ  */

/* Грамм, Килограмм, Центнер, Тонна, Карат, Стоун, Фунт, Унция, Драхма, Гран*/

/*------------------------Единица измерения Килограмм и её перевод в выше перечисленные единицы измерения и соответственно из перечисленных единиц измерения  в Килограмм -----------------------------------------------------------------------------------------------------------------------------------------------------------*/

/*------------ИЗ КИЛОГРАММА--------------*/
// <Килограмм> ---> <Грамм> //
double Kilograms_TO_Grams(double MASS) {
	MASS = MASS * 1000;  // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Центнер> //
double Kilograms_TO_Quintals(double MASS) {
	MASS = MASS / 100;   // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Тонна> //
double Kilograms_TO_Tonnes(double MASS) {
	MASS = MASS / 1000;  // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Карат> //
double Kilograms_TO_Carats(double MASS) {
	MASS = MASS * 5000;  // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Стоун> //
double Kilograms_TO_Stones(double MASS) {
	MASS = MASS * 0.157473; // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Фунт> //
double Kilograms_TO_Funts(double MASS) {
	MASS = MASS * 4.40925; // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Унцию> //
double Kilograms_TO_Ounces(double MASS) {
	MASS = MASS * 35.274; // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Драхма> //
double Kilograms_TO_Drachmas(double MASS) {
	MASS = MASS * 564.382; // Формула для перевода
	return MASS;
}

// <Килограмм> ---> <Гран> //
double Kilograms_TO_Grains(double MASS) {
	MASS = MASS * 15432.3; // Формула для перевода
	return MASS;
}

/*------------В КИЛОГРАММЫ--------------*/
// <Грамм> ---> <Килограмм> //
double Grams_TO_Kilograms(double MASS) {
	MASS = MASS / 1000;  // Формула для перевода
	return MASS;
}

// <Центнер> ---> <Килограмм> //
double Quintals_TO_Kilograms(double MASS) {
	MASS = MASS * 100;   // Формула для перевода
	return MASS;
}

// <Тонна> ---> <Килограмм> //
double Tonnes_TO_Kilograms(double MASS) {
	MASS = MASS * 1000;   // Формула для перевода
	return MASS;
}

// <Карат> ---> <Килограмм> //
double Carats_TO_Kilograms(double MASS) {
	MASS = MASS / 5000;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Килограмм> //
double Stones_TO_Kilograms(double MASS) {
	MASS = MASS * 6,35029;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Килограмм> //
double Funts_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00453592;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Килограмм> //
double Ounces_TO_Kilograms(double MASS) {
	MASS = MASS * 0.0283495;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Килограмм> //
double Drachmas_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00177185;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Килограмм> //
double Grains_TO_Kilograms(double MASS) {
	MASS = MASS / 15432.3;   // Формула для перевода
	return MASS;
}


