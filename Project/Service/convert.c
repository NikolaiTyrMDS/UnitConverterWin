#include <stdio.h>
#include <string.h>
#include <stdlib.h>

void convert(double RESULT) {
	int i, f = 0;
	double tmp;
	tmp = RESULT;
	if (tmp < 0){
		tmp = tmp * (-1);
		f = 1;
	}

	for (i = 0; tmp >= 1; i++) {
			tmp = tmp - 1;
	}

	if (tmp != 0)
		printf("Результат конвертирования: %lf\n", RESULT);
	if (tmp == 0 && f == 1)
		printf("Результат конвертирования: %0.0lf\n", RESULT + tmp);
	if (tmp == 0 && f == 0)
		printf("Результат конвертирования: %0.0lf\n", RESULT - tmp);

}
