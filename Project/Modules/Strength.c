#include <stdio.h>
// DONE;
/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ИЗМЕРЕНИЯ СИЛЫ */

// <Ньютоны> ---> <Килоньютоны> //
double Newton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Килоньютоны> ---> <Ньютоны> //
double kNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Ньютоны> ---> <Миллиньютоны> //
double Newton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Ньютоны> //
double mNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Килоньютоны> //
double mNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Килоньютоны> ---> <Миллиньютоны> //
double kNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <Ньютоны> ---> <Меганьютоны> //
double Newton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Ньютоны> //
double MgNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Меганьютоны> //
double mNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Миллиньютоны> //
double MgNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000;
	return STRENGTH;
}

// <Килоньютоны> ---> <Меганьютоны> //
double kNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Килоньютоны> //
double MgNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Ньютоны> ---> <Микроньютоны> //
double Newton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Ньютоны> //
double MkNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Микроньютоны> //
double mNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Миллиньютоны> //
double MkNewton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Килоньютоны> ---> <Микроньютоны> //
double kNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Килоньютоны> //
double MkNewton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Микроньютоны> //
double MgNewton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000000000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Меганьютоны> //
double MkNewton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000000000;
	return STRENGTH;
}

// <Ньютоны> ---> <Килограмм-силы> //
double Newton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.101972;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Ньютоны> //
double kgsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.101972;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Килограмм-силы> //
double mNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000 * 0.101972;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Миллиньютоны> //
double kgsNewton2mNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Килограмм-силы> //
double MkNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000 * 0.101972;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Микроньютоны> //
double kgsNewton2MkNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000000;
	return STRENGTH;
}

// <Килоньютоны> ---> <Килограмм-силы> //
double kNewton2kgsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000) * 0.101972;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Килоньютоны> //
double kgsNewton2kNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Килограмм-силы> //
double MgNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000 * 0.101972;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Меганьютоны> //
double kgsNewton2MgNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.101972) * 1000000;
	return STRENGTH;
}

// <Ньютоны> ---> <Фунт-силы> //
double Newton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.225;
	return STRENGTH;
}

// <Фунт-силы> ---> <Ньютоны> //
double fsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.225;
	return STRENGTH;
}

// <Килоньютоны> ---> <Фунт-силы> //
double kNewton2fsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000) * 0.225;
	return STRENGTH;
}

// <Фунт-силы> ---> <Килоньютоны> //
double fsNewton2kNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000;
	return STRENGTH;
}

// <Меганьютоны> ---> <Фунт-силы> //
double MgNewton2fsNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 1000000) * 0.225;
	return STRENGTH;
}

// <Фунт-силы> ---> <Меганьютоны> //
double fsNewton2MgNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000000;
	return STRENGTH;
}

// <Миллиньютоны> ---> <Фунт-силы> //
double mNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000 * 0.225;
	return STRENGTH;
}

// <Фунт-силы> ---> <Миллиньютоны> //
double fsNewton2mNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000;
	return STRENGTH;
}

// <Микроньютоны> ---> <Фунт-силы> //
double MkNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000 * 0.225;
	return STRENGTH;
}

// <Фунт-силы> ---> <Микроньютоны> //
double fsNewton2MkNewton(double STRENGTH) {
	STRENGTH = (STRENGTH / 0.225) * 1000000;
	return STRENGTH;
}

// <Килограмм-силы> ---> <Фунт-силы> //
double kgsNewton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 2.205;
	return STRENGTH;
}

// <Фунт-силы> ---> <Килограмм-силы> //
double fsNewton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 2.205;
	return STRENGTH;
}
