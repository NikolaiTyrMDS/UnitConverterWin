#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ЧАСТОТЫ */

// <Герцы> ---> <Килогерцы> //
double Herz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <Килогерцы> ---> <Герцы> //
double kHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <Герцы> ---> <Миллигерцы> //
double Herz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <Миллигерцы> ---> <Герцы> //
double MlHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <Герцы> ---> <Микрогерцы> //
double Herz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Герцы> //
double MkHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <Герцы> ---> <Мегагерцы> //
double Herz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Герцы> //
double MgHerz2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <Герцы> ---> <Френели> //
double Herz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000;
	return FREQUENCY;
}

// <Френели> ---> <Герцы> //
double Frenel2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000;
	return FREQUENCY;
}

// <Герцы> ---> <Радианы на секунду> //
double Herz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Герцы> //
double RadSec2Herz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 6.28319;
	return FREQUENCY;
}
