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

// <Килогерцы> ---> <Миллигерцы> //
double kHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <Миллигерцы> ---> <Килогерцы> //
double MlHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
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

// <Килогерцы> ---> <Микрогерцы> //
double kHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Килогерцы> //
double MkHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Миллигерцы> //
double MkHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <Миллигерцы> ---> <Микрогерцы> //
double MlHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
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

// <Миллигерцы> ---> <Мегагерцы> //
double MlHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Миллигерцы> //
double MgHerz2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <Килогерцы> ---> <Мегагерцы> //
double kHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Килогерцы> //
double MgHerz2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Мегагерцы> //
double MkHerz2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Микрогерцы> //
double MgHerz2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000;
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

// <Миллигерцы> ---> <Френели> //
double MlHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000;
	return FREQUENCY;
}

// <Френели> ---> <Миллигерцы> //
double Frenel2MlHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Френели> //
double MkHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000;
	return FREQUENCY;
}

// <Френели> ---> <Микрогерцы> //
double Frenel2MkHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000;
	return FREQUENCY;
}

// <Килогерцы> ---> <Френели> //
double kHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000000;
	return FREQUENCY;
}

// <Френели> ---> <Килогерцы> //
double Frenel2kHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000000;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Френели> //
double MgHerz2Frenel(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000000000000000;
	return FREQUENCY;
}

// <Френели> ---> <Мегагерцы> //
double Frenel2MgHerz(double FREQUENCY) {
	FREQUENCY = FREQUENCY / 1000000000000000000;
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

// <Миллигерцы> ---> <Радианы на секунду> //
double MlHerz2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000) * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Миллигерцы> //
double RadSec2MlHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000) / 6.28319;
	return FREQUENCY;
}

// <Микрогерцы> ---> <Радианы на секунду> //
double MkHerz2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000) * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Микрогерцы> //
double RadSec2MkHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000000) / 6.28319;
	return FREQUENCY;
}

// <Килогерцы> ---> <Радианы на секунду> //
double kHerz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000 * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Килогерцы> //
double RadSec2kHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000) / 6.28319;
	return FREQUENCY;
}

// <Мегагерцы> ---> <Радианы на секунду> //
double MgHerz2RadSec(double FREQUENCY) {
	FREQUENCY = FREQUENCY * 1000000 * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Мегагерцы> //
double RadSec2MgHerz(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000) / 6.28319;
	return FREQUENCY;
}

// <Френели> ---> <Радианы на секунду> //
double Frenel2RadSec(double FREQUENCY) {
	FREQUENCY = (FREQUENCY / 1000000000000) * 6.28319;
	return FREQUENCY;
}

// <Радианы на секунду> ---> <Френели> //
double RadSec2Frenel(double FREQUENCY) {
	FREQUENCY = (FREQUENCY * 1000000000000) / 6.28319;
	return FREQUENCY;
}
