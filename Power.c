#include <stdio.h>

// Из <Ват> ---> <Киловат> //
double Vat2kVat(double x) {
	x = x / 1000;
	return x;
}

// <Киловат> ---> <Ват> //
double kVat2Vat(double x) {
	x = x * 1000;
	return x;
}

// <Ват> ---> <Мегават> //
double Vat2mVat(double x) {
	x = x / 1000000;
	return x;
}

// <Мегават> ---> <Ват> //
double mVat2Vat(double x) {
	x = x * 1000000;
	return x;
}

// <Киловат> ---> <Мегават> //
double kVat2mVat(double x) {
	x = x / 1000;
	return x;
}

// <Мегават> ---> <Киловат> //
double mVat2kVat(double x) {
	x = x * 1000;
	return x;
}

// Из <Килограмм-сила-метр в секунду> ---> <Ват> //
double kgSilaMvS2Vat(double x) {
	x = x / 9.81;
	return x;
}

// <Ват> ---> <Килограмм-сила-метр в секунду> //
double Vat2kgSilaMvS(double x) {
	x = x * 9.81;
	return x;
}

// Из <Килограмм-сила-метр в секунду> ---> <Киловат> //
double kgSilaMvS2kVat(double x) {
	x = x / (9.81 * 1000);
	return x;
}

// <Киловат> ---> <Килограмм-сила-метр в секунду> //
double kVat2kgSilaMvS(double x) {
	x = x * (9.81 * 1000);
	return x;
	
// Из <Килограмм-сила-метр в секунду> ---> <Мегават> //
double kgSilaMvS2mVat(double x) {
	x = x / (9.81 * 1000000);
	return x;
}

// <Мегават> ---> <Килограмм-сила-метр в секунду> //
double mVat2kgSilaMvS(double x) {
	x = x * (9.81 * 1000000);
	return x;
}
