#include <stdio.h>

// Из <Ват> ---> <Киловат> //
double Vat2kVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Киловат> ---> <Ват> //
double kVat2Vat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Ват> ---> <Мегават> //
double Vat2mVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <Мегават> ---> <Ват> //
double mVat2Vat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Киловат> ---> <Мегават> //
double kVat2mVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Мегават> ---> <Киловат> //
double mVat2kVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// Из <Килограмм-сила-метр в секунду> ---> <Ват> //
double kgSilaMvS2Vat(double POWER) {
	POWER = POWER * 9.81;
	return POWER;
}

// <Ват> ---> <Килограмм-сила-метр в секунду> //
double Vat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81;
	return POWER;
}

// Из <Килограмм-сила-метр в секунду> ---> <Киловат> //
double kgSilaMvS2kVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <Киловат> ---> <Килограмм-сила-метр в секунду> //
double kVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000) / 9.81;
	return POWER;
}
	
// <Килограмм-сила-метр в секунду> ---> <Мегават> //
double kgSilaMvS2mVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <Мегават> ---> <Килограмм-сила-метр в секунду> //
double mVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000000) / 9.81;
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

// <Киловаты> ---> <Эрг в секунду> //
double kVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000;
	return POWER;
}

// <Эрг в секунду> ---> <Киловаты> //
double ErgS2kVat(double POWER) {
	POWER = POWER / 10000000000;
	return POWER;
}

// <Мегаваты> ---> <Эрг в секунду> //
double mVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000000;
	return POWER;
}

// <Эрг в секунду> ---> <Мегаваты> //
double ErgS2mVat(double POWER) {
	POWER = POWER / 10000000000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Эрг в секунду> //
double kgSilaMvS2ErgS(double POWER) {
	POWER = POWER  * 9.81 * 10000000;
	return POWER;
}

// <Эрг в секунду> ---> <Килограмм-сила-метр в секунду> //
double ErgS2kgSilaMvS(double POWER) {
	POWER = POWER / (9.81 * 10000000);
	return POWER;
}
