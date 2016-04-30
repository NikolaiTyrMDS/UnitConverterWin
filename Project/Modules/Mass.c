#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ МАССЫ  */

/* Грамм. Килограмм. Центнер. Тонна. Карат. Стоун. Фунт. Унция. Драхма. Гран*/

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

/*------------------------Единица измерения Стоун и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Стоун> ---> <Карат> //
double Stones_TO_Carats(double MASS) {
	MASS = MASS * 31751.5;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Тонна> //
double Stones_TO_Tonnes(double MASS) {
	MASS = MASS * 0.00635029;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Центнер> //
double Stones_TO_Quintals(double MASS) {
	MASS = MASS * 0.0635029;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Килограмм> //
double Stones_TO_Kilograms(double MASS) {
	MASS = MASS * 6.35029;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Грамм> //
double Stones_TO_Grams(double MASS) {
	MASS = MASS * 6350.29;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Фунт> //
double Stones_TO_Funts(double MASS) {
	MASS = MASS * 14;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Унция> //
double Stones_TO_Ounces(double MASS) {
	MASS = MASS * 224;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Драхма> //
double Stones_TO_Drachmas(double MASS) {
	MASS = MASS * 3583.99;   // Формула для перевода
	return MASS;
}

// <Стоун> ---> <Гран> //
double Stones_TO_Grains(double MASS) {
	MASS = MASS * 97999.9;   // Формула для перевода
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Фунт и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Фунт> ---> <Стоун> //
double Funts_TO_Stones(double MASS) {
	MASS = MASS * 0.0714286;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Карат> //
double Funts_TO_Carats(double MASS) {
	MASS = MASS * 2267.96;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Тонна> //
double Funts_TO_Tonnes(double MASS) {
	MASS = MASS * 0.000453592;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Центнер> //
double Funts_TO_Quintals(double MASS) {
	MASS = MASS * 0.00453592;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Килограмм> //
double Funts_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00453592;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Грамм> //
double Funts_TO_Grams(double MASS) {
	MASS = MASS * 453.592;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Унция> //
double Funts_TO_Ounces(double MASS) {
	MASS = MASS * 16;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Драхма> //
double Funts_TO_Drachmas(double MASS) {
	MASS = MASS * 255.999;   // Формула для перевода
	return MASS;
}

// <Фунт> ---> <Гран> //
double Funts_TO_Grains(double MASS) {
	MASS = MASS * 6999.99;   // Формула для перевода
	return MASS;
}
/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Унция и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Унция> ---> <Фунт> //
double Ounces_TO_Funts(double MASS) {
	MASS = MASS * 0.0625;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Стоун> //
double Ounces_TO_Stones(double MASS) {
	MASS = MASS * 0.00446429;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Карат> //
double Ounces_TO_Carats(double MASS) {
	MASS = MASS * 141.748;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Тонна> //
double Ounces_TO_Tonnes(double MASS) {
	MASS = MASS * 2.83495;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Центнер> //
double Ounces_TO_Quintals(double MASS) {
	MASS = MASS * 0.000283495;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Килограмм> //
double Ounces_TO_Kilograms(double MASS) {
	MASS = MASS * 0.0283495;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Грамм> //
double Ounces_TO_Grams(double MASS) {
	MASS = MASS * 28.3495;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Драхма> //
double Ounces_TO_Drachmas(double MASS) {
	MASS = MASS * 16;   // Формула для перевода
	return MASS;
}

// <Унция> ---> <Гран> //
double Ounces_TO_Grains(double MASS) {
	MASS = MASS * 437.499;   // Формула для перевода
	return MASS;
}


/*--------------------------------------------------------------------------*/


/*------------------------Единица измерения Драхма и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Драхма> ---> <Унция> //
double Drachmas_TO_Ounces(double MASS) {
	MASS = MASS * 0.0625002;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Фунт> //
double Drachmas_TO_Funts(double MASS) {
	MASS = MASS * 0.00390626;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Стоун> //
double Drachmas_TO_Stones(double MASS) {
	MASS = MASS * 0.000279019;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Карат> //
double Drachmas_TO_Carats(double MASS) {
	MASS = MASS * 8.85925;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Тонна> //
double Drachmas_TO_Tonnes(double MASS) {
	MASS = MASS * 1.77185;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Центнер> //
double Drachmas_TO_Quintals(double MASS) {
	MASS = MASS * 1.77185;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Килограмм> //
double Drachmas_TO_Kilograms(double MASS) {
	MASS = MASS * 0.00177185;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Грамм> //
double Drachmas_TO_Grams(double MASS) {
	MASS = MASS * 1.77185;   // Формула для перевода
	return MASS;
}

// <Драхма> ---> <Гран> //
double Drachmas_TO_Grains(double MASS) {
	MASS = MASS * 27.3438;   // Формула для перевода
	return MASS;
}

/*--------------------------------------------------------------------------*/

/*------------------------Единица измерения Гран и её перевод в выше перечисленные единицы измерения-----------------------------------------------------------------------------------------------------------------------------------------------------------*/

// <Гран> ---> <Драхма> //
double Grains_TO_Drachmas(double MASS) {
	MASS = MASS * 0.0365714;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Унция> //
double Grains_TO_Ounces(double MASS) {
	MASS = MASS * 0.00228572;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Фунт> //
double Grains_TO_Funts(double MASS) {
	MASS = MASS * 0.000142857;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Стоун> //
double Grains_TO_Stones(double MASS) {
	MASS = MASS * 1.0204;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Карат> //
double Grains_TO_Carats(double MASS) {
	MASS = MASS * 0.323995;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Тонна> //
double Grains_TO_Tonnes(double MASS) {
	MASS = MASS / 15430000;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Центнер> //
double Grains_TO_Quintals(double MASS) {
	MASS = MASS / 1543235.83529;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Килограмм> //
double Grains_TO_Kilograms(double MASS) {
	MASS = MASS / 15432.3;   // Формула для перевода
	return MASS;
}

// <Гран> ---> <Грамм> //
double Grains_TO_Grams(double MASS) {
	MASS = MASS * 0.064799 ;   // Формула для перевода
	return MASS;
}

/*--------------------------------------------------------------------------*/
