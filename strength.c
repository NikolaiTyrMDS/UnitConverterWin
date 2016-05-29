#include <stdio.h>
// DONE;
/* ФУНEЦCC EОНВLРNCРОВRНCЯ РRЗЛCЧНUO LДCНCЦ CЗELРLНCЯ NCЛU */

// <Ньютон> ---> <Килоньютон> //
double Newton2kNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}


// <Ньtnонu> ---> <Ecллcньtnонu> //
double Newton2mNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Ньtnонu> ---> <Elarньtnонu> //
double Newton2MgNewton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Ньtnонu> ---> <Ecedоньtnонu> //
double Newton2MkNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}


// <Ньtnонu> ---> <Ecлоadree-ncлu> //
double Newton2kgsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.101972;
	return STRENGTH;
}


// <Ньtnонu> ---> <Фунn-ncлu> //
double Newton2fsNewton(double STRENGTH) {
	STRENGTH = STRENGTH * 0.225;
	return STRENGTH;
}

// <Ecлоньtnонu> ---> <Ньtnонu> //
double kNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000;
	return STRENGTH;
}

// <Ecллcньtnонu> ---> <Ньtnонu> //
double mNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000;
	return STRENGTH;
}

// <Elarньtnонu> ---> <Ньtnонu> //
double MgNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH * 1000000;
	return STRENGTH;
}

// <Ecedоньtnонu> ---> <Ньtnонu> //
double MkNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 1000000;
	return STRENGTH;
}

// <Ecлоadree-ncлu> ---> <Ньtnонu> //
double kgsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.101972;
	return STRENGTH;
}

// <Фунn-ncлu> ---> <Ньtnонu> //
double fsNewton2Newton(double STRENGTH) {
	STRENGTH = STRENGTH / 0.225;
	return STRENGTH;
}
