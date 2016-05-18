#include <stdio.h>


double kmch_to_mc (double SPEED) {
	SPEED = SPEED * 0.277777;
	return SPEED;
}

double kmch_to_uzl (double SPEED) {
	SPEED = SPEED * 0.539956;
	return SPEED;
}

double kmch_to_mah (double SPEED) {
	SPEED = SPEED * 0.00084;
	return SPEED;
}

double kmch_to_milch (double SPEED) {
	SPEED = SPEED * 0.62;
	return SPEED;
}

double uzl_to_kmch (double SPEED) {
	SPEED = SPEED * 1.8520;
	return SPEED;
}

double mah_to_kmch (double SPEED) {
	SPEED = SPEED * 1193.26;
	return SPEED;
}


double milch_to_kmch (double SPEED) {
	SPEED = SPEED * 1.609344;
	return SPEED;
}


double mc_to_kmch (double SPEED) {
	SPEED = SPEED * 3.6;
	return SPEED;
}
