#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ СИЛЫ ТОКА */

// <Амперы> ---> <Килоамперы> //
double Ampere2kAmpere(double AMPERE) {
	AMPERE = AMPERE / 1000;
	return AMPERE;
}

// <Килоамперы> ---> <Амперы> //
double kAmpere2Ampere(double AMPERE) {
	AMPERE = AMPERE * 1000;
	return AMPERE;
}

// <Амперы> ---> <Миллиамперы> //
double Ampere2mAmpere(double AMPERE) {
	AMPERE = AMPERE * 1000;
	return AMPERE;
}

// <Миллиамперы> ---> <Амперы> //
double mAmpere2Ampere(double AMPERE) {
	AMPERE = AMPERE / 1000;
	return AMPERE;
}

// <Амперы> ---> <Микроамперы> //
double Ampere2mcAmpere(double AMPERE) {
	AMPERE = AMPERE * 1000000;
	return AMPERE;
}

// <Микроамперы> ---> <Амперы> //
double mcAmpere2Ampere(double AMPERE) {
	AMPERE = AMPERE / 1000000;
	return AMPERE;
}

// <Амперы> ---> <Наноамперы> //
double Ampere2nAmpere(double AMPERE) {
	AMPERE = AMPERE / 1000000000;
	return AMPERE;
}

// <Наноамперы> ---> <Амперы> //
double nAmpere2Ampere(double AMPERE) {
	AMPERE = AMPERE / 1000000000;
	return AMPERE;
}
