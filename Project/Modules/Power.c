#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ МОЩНОСТИ */

// <Ваты> ---> <Киловаты> //
double Vat2kVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Киловаты> ---> <Ваты> //
double kVat2Vat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Ваты> ---> <Мегаваты> //
double Vat2mVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <Мегаваты> ---> <Ваты> //
double mVat2Vat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Ваты> //
double kgSilaMvS2Vat(double POWER) {
	POWER = POWER * 9.81;
	return POWER;
}

// <Ваты> ---> <Килограмм-сила-метр в секунду> //
double Vat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81;
	return POWER;
}

// <Ваты> ---> <Эрг в секунду> //
double Vat2ErgS(double POWER) {
	POWER = POWER  * 10000000;
	return POWER;
}

// <Эрг в секунду> ---> <Ваты> //
double ErgS2Vat(double POWER) {
	POWER = POWER / 10000000;
	return POWER;
}

// <Ваты> ---> <Лошадиные силы(метрические)> //
double Vat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Ваты> //
double HorsePowMetr2Vat(double POWER) {
	POWER = POWER * 735.5;
	return POWER;
}

// <Ваты> ---> <Лошадиные силы(английские)> //
double Vat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Ваты> //
double HorsePowEng2Vat(double POWER) {
	POWER = POWER * 745.7;
	return POWER;
}

// <Ваты> ---> <Милливаты> //
double Vat2MlVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Милливаты> ---> <Ваты> //
double MlVat2Vat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Ваты> ---> <Микроваты> //
double Vat2MkVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Микроваты> ---> <Ваты> //
double MkVat2Vat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}
