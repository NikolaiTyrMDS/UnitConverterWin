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

// <Радианы> ---> <Минуты> //
double Radian2Min(double ANGLE) {
	ANGLE = ANGLE * 60 * 57.295779513;
	return ANGLE;
}

// <Минуты> ---> <Радианы> //
double Min2Radian(double ANGLE) {
	ANGLE = ANGLE / (60 * 57.295779513);
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

// <Радианы> ---> <Секунды> //
double Radian2Sec(double ANGLE) {
	ANGLE = ANGLE * 3600 * 57.295779513;
	return ANGLE;
}

// <Секунды> ---> <Радианы> //
double Sec2Radian(double ANGLE) {
	ANGLE = ANGLE / (3600 * 57.295779513);
	return ANGLE;
}

// <Минуты> ---> <Секунды> //
double Min2Sec(double ANGLE) {
	ANGLE = ANGLE * 60;
	return ANGLE;
}

// <Секунды> ---> <Минуты> //
double Sec2Min(double ANGLE) {
	ANGLE = ANGLE / 60;
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

// <Минуты> ---> <Грады> //
double Min2Grad(double ANGLE) {
	ANGLE = ANGLE / (0.9 * 60);
	return ANGLE;
}

// <Грады> ---> <Минуты> //
double Grad2Min(double ANGLE) {
	ANGLE = ANGLE * 0.9 * 60;
	return ANGLE;
}

// <Секунды> ---> <Грады> //
double Sec2Grad(double ANGLE) {
	ANGLE = ANGLE / (0.9 * 3600);
	return ANGLE;
}

// <Грады> ---> <Секунды> //
double Grad2Sec(double ANGLE) {
	ANGLE = ANGLE * 0.9 * 3600;
	return ANGLE;
}

// <Радианы> ---> <Грады> //
double Radian2Grad(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 0.9);
	return ANGLE;
}

// <Грады> ---> <Радианы> //
double Grad2Radian(double ANGLE) {
	ANGLE = ANGLE / 57.295779513 / 0.9;
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

// <Секстанты> ---> <Минуты> //
double Sextant2Min(double ANGLE) {
	ANGLE = ANGLE * 3600;
	return ANGLE;
}

// <Минуты> ---> <Секстанты> //
double Min2Sextant(double ANGLE) {
	ANGLE = ANGLE / 3600;
	return ANGLE;
}

// <Секстанты> ---> <Секунды> //
double Sextant2Sec(double ANGLE) {
	ANGLE = ANGLE * 216000;
	return ANGLE;
}

// <Секунды> ---> <Секстанты> //
double Sec2Sextant(double ANGLE) {
	ANGLE = ANGLE / 216000;
	return ANGLE;
}

// <Секстанты> ---> <Грады> //
double Sextant2Grad(double ANGLE) {
	ANGLE = (ANGLE * 60) / 0.9;
	return ANGLE;
}

// <Грады> ---> <Секстанты> //
double Grad2Sextant(double ANGLE) {
	ANGLE = ANGLE * (0.9 / 60);
	return ANGLE;
}

// <Секстанты> ---> <Радианы> //
double Sextant2Radian(double ANGLE) {
	ANGLE = (ANGLE * 60) / 57.295779513;
	return ANGLE;
}

// <Радианы> ---> <Секстанты> //
double Radian2Sextant(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 60);
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

// <Румбы> ---> <Радианы> //
double Rumb2Radian(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 57.295779513;
	return ANGLE;
}

// <Радианы> ---> <Румбы> //
double Radian2Rumb(double ANGLE) {
	ANGLE = ANGLE * (57.295779513 / 11.25);
	return ANGLE;
}

// <Румбы> ---> <Минуты> //
double Rumb2Min(double ANGLE) {
	ANGLE = ANGLE * 11.25 * 60;
	return ANGLE;
}

// <Минуты> ---> <Румбы> //
double Min2Rumb(double ANGLE) {
	ANGLE = ANGLE / (11.25 * 60);
	return ANGLE;
}

// <Румбы> ---> <Секунды> //
double Rumb2Sec(double ANGLE) {
	ANGLE = ANGLE * 11.25 * 3600;
	return ANGLE;
}

// <Секунды> ---> <Румбы> //
double Sec2Rumb(double ANGLE) {
	ANGLE = ANGLE / (11.25 * 3600);
	return ANGLE;
}

// <Румбы> ---> <Грады> //
double Rumb2Grad(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 0.9;
	return ANGLE;
}

// <Грады> ---> <Румбы> //
double Grad2Rumb(double ANGLE) {
	ANGLE = ANGLE * (0.9 / 11.25);
	return ANGLE;
}

// <Румбы> ---> <Секстанты> //
double Rumb2Sextant(double ANGLE) {
	ANGLE = (ANGLE * 11.25) / 60;
	return ANGLE;
}

// <Секстанты> ---> <Румбы> //
double Sextant2Rumb(double ANGLE) {
	ANGLE = ANGLE * (60 / 11.25);
	return ANGLE;
}
