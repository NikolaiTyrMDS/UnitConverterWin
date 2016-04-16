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

double kvatch_to_electronvolt (double ENERGY) {
	ENERGY = ENERGY * 2.25 * pow(10, 25);
	return ENERGY;
}

double kvatch_to_kall (double ENERGY) {
	ENERGY = ENERGY * 859845.23;
	return ENERGY;
}

double kvatch_to_tnt (double ENERGY) {
	ENERGY = ENERGY * 860.420650;
	return ENERGY;
}

double electronvolt_to_joule (double ENERGY) {
	ENERGY = ENERGY * 1.602176 * pow(10, -19);
	return ENERGY;
}

double electronvolt_to_kvatch (double ENERGY) {
	ENERGY = ENERGY * 4.450490 * pow(10, -26);
	return ENERGY;
}

double electronvolt_to_kall (double ENERGY) {
	ENERGY = ENERGY * 3.826732 * pow(10, -20);
	return ENERGY;
}

double electronvolt_to_tnt (double ENERGY) {
	ENERGY = ENERGY * 3.829293 * pow(10, -23);
	return ENERGY;
}

double kall_to_joule (double ENERGY) {
	ENERGY = ENERGY * 4.1868;
	return ENERGY;
}

double kall_to_kvatch (double ENERGY) {
	ENERGY = ENERGY * 1.163 * pow(10, -6);
	return ENERGY;
}

double kall_to_electronvolt (double ENERGY) {
	ENERGY = ENERGY * 2.613195 * pow(10, 19);
	return ENERGY;
}

double kall_to_tnt (double ENERGY) {
	ENERGY = ENERGY * 0.00100;
	return ENERGY;
}

double tnt_to_joule (double ENERGY) {
	ENERGY = ENERGY * 8368;
	return ENERGY;
}

double tnt_to_kvatch (double ENERGY) {
	ENERGY = ENERGY * 0.002324;
	return ENERGY;
}

double tnt_to_electronvolt (double ENERGY) {
	ENERGY = ENERGY * 5.222895 * pow(10, 22);
	return ENERGY;
}

double tnt_to_kall (double ENERGY) {
	ENERGY = ENERGY * 1998.662462;
	return ENERGY;
}
