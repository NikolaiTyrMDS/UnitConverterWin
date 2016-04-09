#include <stdio.h>


double kmch_to_mc (double SPEED) {
	SPEED = SPEED * 0.28;
	return SPEED;
}

double kmch_to_uzl (double SPEED) {
	SPEED = SPEED * 0.54;
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

double uzl_to_mc (double SPEED) {
	SPEED = SPEED * 0.51;
	return SPEED;
}

double uzl_to_kmch (double SPEED) {
	SPEED = SPEED * 1.85;
	return SPEED;
}

double uzl_to_mah (double SPEED) {
	SPEED = SPEED * 0.0016;
	return SPEED;
}

double uzl_to_milch (double SPEED) {
	SPEED = SPEED * 1.15;
	return SPEED;
}

double mah_to_mc (double SPEED) {
	SPEED = SPEED * 331.46;
	return SPEED;
}

double mah_to_kmch (double SPEED) {
	SPEED = SPEED * 1193.26;
	return SPEED;
}

double mah_to_uzl (double SPEED) {
	SPEED = SPEED * 644.31;
	return SPEED;
}

double mah_to_milch (double SPEED) {
	SPEED = SPEED * 741.61;
	return SPEED;
}

double milch_to_mc (double SPEED) {
	SPEED = SPEED * 0.45;
	return SPEED;
}

double milch_to_kmch (double SPEED) {
	SPEED = SPEED * 1.61;
	return SPEED;
}

double milch_to_uzl (double SPEED) {
	SPEED = SPEED * 0.87;
	return SPEED;
}

double milch_to_mah (double SPEED) {
	SPEED = SPEED * 0.0013;
	return SPEED;
}

double mc_to_uzl (double SPEED) {
	SPEED = SPEED * 1.94;
	return SPEED;
}

double mc_to_kmch (double SPEED) {
	SPEED = SPEED * 3.6;
	return SPEED;
}

double mc_to_mah (double SPEED) {
	SPEED = SPEED * 0.003;
	return SPEED;
}

double mc_to_milch (double SPEED) {
	SPEED = SPEED * 2.24;
	return SPEED;
}

