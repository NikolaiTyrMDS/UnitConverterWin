#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ УГЛА */

// <Градусы> ---> <Радианы> //
double Degree2Radian(double ANGLE) {
	ANGLE = ANGLE / 57.295779513;
	return ANGLE;
}

// <Радианы> ---> <Градусы> //
double Radian2Degree(double ANGLE) {
	ANGLE = ANGLE * 57.295779513;
	return ANGLE;
}

// <Градусы> ---> <Минуты> //
double Degree2Min(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <Минуты> ---> <Градусы> //
double Min2Degree(double ANGLE) {
	ANGLE = ANGLE / 60;
	return ANGLE;
}

// <Градусы> ---> <Секунды> //
double Degree2Sec(double ANGLE) {
	ANGLE = ANGLE * 3600;
	return ANGLE;
}

// <Секунды> ---> <Градусы> //
double Sec2Degree(double ANGLE) {
	ANGLE = ANGLE / 3600;
	return ANGLE;
}

// <Градусы> ---> <Грады> //
double Degree2Grad(double ANGLE) {
	ANGLE = ANGLE / 0.9;
	return ANGLE;
}

// <Грады> ---> <Градусы> //
double Grad2Degree(double ANGLE) {
	ANGLE = ANGLE * 0.9;
	return ANGLE;
}


// <Секстанты> ---> <Градусы> //
double Sextant2Degree(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <Градусы> ---> <Секстанты> //
double Degree2Sextant(double ANGLE) {
	ANGLE = ANGLE / 60;
	return ANGLE;
}

// <Румбы> ---> <Градусы> //
double Rumb2Degree(double ANGLE) {
	ANGLE = ANGLE * 11.25;
	return ANGLE;
}

// <Градусы> ---> <Румбы> //
double Degree2Rumb(double ANGLE) {
	ANGLE = ANGLE / 11.25;
	return ANGLE;
}
