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
