#include <stdio.h>
#include <math.h>

long double nsec_to_sec (long double TIME) {
	TIME = TIME / pow(10,-9);
	return TIME;
}

long double nsec_to_mksec (long double TIME) {
	TIME = TIME / pow(10,3);
	return TIME;
}

long double nsec_to_msec (long double TIME) {
	TIME = TIME / pow(10,6);
	return TIME;
}

long double nsec_to_min (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 60;
	return TIME;
}

long double nsec_to_chas (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600;
	return TIME;
}

long double nsec_to_sut (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24;
	return TIME;
}

long double nsec_to_week (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7;
	return TIME;
}

long double nsec_to_year (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7 * 52;
	return TIME;
}

long double nsec_to_vek (long double TIME) {
	TIME = (TIME / pow(10,-9)) * 3600 * 24 * 7 * 52 * 100;
	return TIME;
}

long double mksec_to_sec (long double TIME) {
	TIME = TIME / pow(10, 6);
	return TIME;
}

long double mksec_to_msec (long double TIME) {
	TIME = TIME / pow(10,3);
	return TIME;
}

long double mksec_to_min (long double TIME) {
	TIME = (TIME / pow(10,6)) * 60;
	return TIME;
}

long double mksec_to_chas (long double TIME) {
	TIME = (TIME / pow(10,6)) * 3600;
	return TIME;
}

long double mksec_to_sut (long double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24;
	return TIME;
}

long double mksec_to_week (long double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7;
	return TIME;
}

long double mksec_to_year (long double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7 * 52;
	return TIME;
}

long double mksec_to_vek (long double TIME) {
	TIME = (TIME / pow(10,6)) * 3600 * 24 * 7 * 52 * 100;
	return TIME;
}

long double mksec_to_nsec (long double TIME) {
	TIME = TIME * pow(10,3);
	return TIME;
}

long double msec_to_sec (long double TIME) {
	TIME = TIME * pow(10,-3);
	return TIME;
}

long double msec_to_mksec (long double TIME) {
	TIME = TIME * pow(10, 3);
	return TIME;
}

long double msec_to_nsec (long double TIME) {
	TIME = TIME * pow(10, 6);
	return TIME;
}

long double msec_to_min (long double TIME) {
	TIME = TIME * pow(10, -3) * 60;
	return TIME;
}

long double msec_to_chas (long double TIME) {
	TIME = TIME * pow(10, -3) * 3600;
	return TIME;
}

long double msec_to_sut (long double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24;
	return TIME;
}

long double msec_to_week (long double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7;
	return TIME;
}

long double msec_to_year (long double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7 * 52;
	return TIME;
}

long double msec_to_vek (long double TIME) {
	TIME = TIME * pow(10, -3) * 3600 * 24 * 7 * 52 *100;
	return TIME;
}

long double sec_to_nsec (long double TIME) {
	TIME = TIME * pow(10, -9);
	return TIME;
}

long double sec_to_mksec (long double TIME) {
	TIME = TIME * pow(10, -6);
	return TIME;
}

long double sec_to_msec (long double TIME) {
	TIME = TIME * pow(10, -3);
	return TIME;
}

long double sec_to_min (long double TIME) {
	TIME = TIME * (1 / 60);
	return TIME;
}

long double sec_to_chas (long double TIME) {
	TIME = TIME * (1 / 3600);
	return TIME;
}

long double sec_to_sut (long double TIME) {
	TIME = TIME * (1 / (3600 * 24));
	return TIME;
}

long double sec_to_week (long double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7));
	return TIME;
}

long double sec_to_year (long double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7 * 52));
	return TIME;
}

long double sec_to_vek (long double TIME) {
	TIME = TIME * (1 / (3600 * 24 * 7 * 52 * 100));
	return TIME;
}

long double min_to_nsec (long double TIME) {
	TIME = TIME * 60 * 1000 * 1000 * 1000;
	return TIME;
}

long double min_to_mksec (long double TIME) {
	TIME = TIME * 60 * 1000 * 1000;
	return TIME;
}

long double min_to_msec (long double TIME) {
	TIME = TIME * 60 * 1000;
	return TIME;
}

long double min_to_sec (long double TIME) {
	TIME = TIME * 60;
	return TIME;
}

long double min_to_chas (long double TIME) {
	TIME = TIME / 60;
	return TIME;
}

long double min_to_sut (long double TIME) {
	TIME = TIME / (60 * 24);
	return TIME;
}

long double min_to_week (long double TIME) {
	TIME = TIME / (60 * 24 * 7);
	return TIME;
}

long double min_to_year (long double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52);
	return TIME;
}

long double min_to_vek (long double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52 * 100);
	return TIME;
}

long double chas_to_nsec (long double TIME) {
	TIME = TIME * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

long double chas_to_mksec (long double TIME) {
	TIME = TIME * 3600 * 1000 * 1000;
	return TIME;
}

long double chas_to_msec (long double TIME) {
	TIME = TIME * 3600 * 1000;
	return TIME;
}

long double chas_to_sec (long double TIME) {
	TIME = TIME * 3600;
	return TIME;
}

long double chas_to_min (long double TIME) {
	TIME = TIME * 60;
	return TIME;
}

long double chas_to_sut (long double TIME) {
	TIME = TIME / 24;
	return TIME;
}

long double chas_to_week (long double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

long double chas_to_year (long double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

long double chas_to_vek (long double TIME) {
	TIME = TIME / (24 * 7);
	return TIME;
}

long double sut_to_nsec (long double TIME) {
	TIME = TIME * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

long double sut_to_mksec (long double TIME) {
	TIME = TIME * 24 * 3600 * 1000 * 1000;
	return TIME;
}

long double sut_to_msec (long double TIME) {
	TIME = TIME * 24 * 3600 * 1000;
	return TIME;
}

long double sut_to_sec (long double TIME) {
	TIME = TIME * 24 * 3600;
	return TIME;
}

long double sut_to_min (long double TIME) {
	TIME = TIME * 24 * 60;
	return TIME;
}

long double sut_to_chas (long double TIME) {
	TIME = TIME * 24;
	return TIME;
}

long double sut_to_week (long double TIME) {
	TIME = TIME / 7;
	return TIME;
}

long double sut_to_year (long double TIME) {
	TIME = TIME / 365;
	return TIME;
}

long double sut_to_vek (long double TIME) {
	TIME = TIME / (365 * 100);
	return TIME;
}

long double week_to_nsec (long double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

long double week_to_mksec (long double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

long double week_to_msec (long double TIME) {
	TIME = TIME * 7 * 24 * 3600 * 1000;
	return TIME;
}

long double week_to_sec (long double TIME) {
	TIME = TIME * 7 * 24 * 3600;
	return TIME;
}

long double week_to_min (long double TIME) {
	TIME = TIME * 7 * 24 * 60;
	return TIME;
}

long double week_to_chas (long double TIME) {
	TIME = TIME * 7 * 24;
	return TIME;
}

long double week_to_sut (long double TIME) {
	TIME = TIME * 7;
	return TIME;
}

long double week_to_year (long double TIME) {
	TIME = TIME / 52;
	return TIME;
}

long double week_to_vek (long double TIME) {
	TIME = TIME / (52 * 100);
	return TIME;
}

long double year_to_nsec (long double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

long double year_to_mksec (long double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

long double year_to_msec (long double TIME) {
	TIME = TIME * 365 * 24 * 3600 * 1000;
	return TIME;
}

long double year_to_sec (long double TIME) {
	TIME = TIME * 365 * 24 * 3600;
	return TIME;
}

long double year_to_min (long double TIME) {
	TIME = TIME * 365 * 24 * 60;
	return TIME;
}

long double year_to_chas (long double TIME) {
	TIME = TIME * 365 * 24;
	return TIME;
}

long double year_to_sut (long double TIME) {
	TIME = TIME * 365;
	return TIME;
}

long double year_to_week (long double TIME) {
	TIME = TIME * 52;
	return TIME;
}

long double year_to_vek (long double TIME) {
	TIME = TIME / 100;
	return TIME;
}

long double vek_to_nsec (long double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000 * 1000 * 1000;
	return TIME;
}

long double vek_to_mksec (long double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000 * 1000;
	return TIME;
}

long double vek_to_msec (long double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600 * 1000;
	return TIME;
}

long double vek_to_sec (long double TIME) {
	TIME = TIME * 100 * 365 * 24 * 3600;
	return TIME;
}

long double vek_to_min (long double TIME) {
	TIME = TIME * 100 * 365 * 24 * 60;
	return TIME;
}

long double vek_to_chas (long double TIME) {
	TIME = TIME * 100 * 365 * 24;
	return TIME;
}

long double vek_to_sut (long double TIME) {
	TIME = TIME * 100 * 365;
	return TIME;
}

long double vek_to_week (long double TIME) {
	TIME = TIME * 100 * 52;
	return TIME;
}

long double vek_to_year (long double TIME) {
	TIME = TIME * 100;
	return TIME;
}

