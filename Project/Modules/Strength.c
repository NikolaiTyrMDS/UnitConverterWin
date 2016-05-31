#include <stdio.h>
// DONE;
/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ СИЛЫ */

// <Ньютон> ---> <Килоньютон> //
double Newton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}


// <Ньютон> ---> <Миллиньютон> //
double Newton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Ньютон> ---> <Меганьютон> //
double Newton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Ньютон> ---> <Микроньютон> //
double Newton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}


// <Ньютон> ---> <Килограмм-сила> //
double Newton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.101972;
	return STRENGTH;
}


// <Ньютон> ---> <Фунт-сила> //
double Newton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.225;
	return STRENGTH;
}

// <Килоньютон> ---> <Ньютон> //
double kNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Миллиньютон> ---> <Ньютон> //
double mNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Меганьютон> ---> <Ньютон> //
double MgNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <Микроньютон> ---> <Ньютон> //
double MkNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Килограмм-сила> ---> <Ньютон> //
double kgsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.101972;
	return STRENGTH;
}

// <Фунт-сила> ---> <Ньютон> //
double fsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.225;
	return STRENGTH;
}
