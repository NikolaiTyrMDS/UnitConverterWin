#include <stdio.h>
#include <math.h>


 double nsec_to_min ( double TIME) {
	TIME = TIME / (pow(10, 9) * 60);
	return TIME;
}


 double mksec_to_min ( double TIME) {
	TIME = TIME / (pow(10, 6) / 60);
	return TIME;
}

 double msec_to_min ( double TIME) {
	TIME = TIME * pow(10, -3) * 60;
	return TIME;
}

 double sec_to_min ( double TIME) {
	TIME = TIME / 60;
	return TIME;
}

 double min_to_nsec ( double TIME) {
	TIME = TIME * 60 * 1000 * 1000 * 1000;
	return TIME;
}

 double min_to_mksec ( double TIME) {
	TIME = TIME * 60 * 1000 * 1000;
	return TIME;
}

 double min_to_msec ( double TIME) {
	TIME = TIME * 60 * 1000;
	return TIME;
}

 double min_to_sec ( double TIME) {
	TIME = TIME * 60;
	return TIME;
}

 double min_to_chas ( double TIME) {
	TIME = TIME / 60;
	return TIME;
}

 double min_to_sut ( double TIME) {
	TIME = TIME / (60 * 24);
	return TIME;
}

 double min_to_week ( double TIME) {
	TIME = TIME / (60 * 24 * 7);
	return TIME;
}

 double min_to_year ( double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52);
	return TIME;
}

 double min_to_vek ( double TIME) {
	TIME = TIME / (60 * 24 * 7 * 52 * 100);
	return TIME;
}

 double chas_to_min ( double TIME) {
	TIME = TIME * 60;
	return TIME;
}
 double sut_to_min ( double TIME) {
	TIME = TIME * 24 * 60;
	return TIME;
}

 double week_to_min ( double TIME) {
	TIME = TIME * 7 * 24 * 60;
	return TIME;
}
 double year_to_min ( double TIME) {
	TIME = TIME * 365 * 24 * 60;
	return TIME;
}
 double vek_to_min ( double TIME) {
	TIME = TIME * 100 * 365 * 24 * 60;
	return TIME;
}
