#include <stdio.h>
#include <math.h>

double joule_to_kvatch (double ENERGY) {
	ENERGY = ENERGY * 2.78 * pow(10, -7);
	return ENERGY;
}

double joule_to_electronvolt (double ENERGY) {
	ENERGY = ENERGY * 6.24 * pow(10, 18);
	return ENERGY;
}

double joule_to_kall (double ENERGY) {
	ENERGY = ENERGY / 4.186800;
	return ENERGY;
}

double joule_to_tnt (double ENERGY) {
	ENERGY = ENERGY / 4184.100418;
	return ENERGY;
}

double kvatch_to_joule (double ENERGY) {
	ENERGY = ENERGY * 3600000;
	return ENERGY;
}

double electronvolt_to_joule (double ENERGY) {
	ENERGY = ENERGY * 1.602176 * pow(10, -19);
	return ENERGY;
}


double kall_to_joule (double ENERGY) {
	ENERGY = ENERGY * 4.1868;
	return ENERGY;
}

double tnt_to_joule (double ENERGY) {
	ENERGY = ENERGY * 8368;
	return ENERGY;
}
