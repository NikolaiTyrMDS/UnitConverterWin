#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double parsing(char *MEASUREMENT)
{
	double res;
	int i = 0;

	scanf("%s", MEASUREMENT);

	for(i = 0; i < strlen(MEASUREMENT); i++) {
        if((MEASUREMENT[i] >= 0x1 && MEASUREMENT[i] <= 0x2B) || MEASUREMENT[i] == 0x2D || MEASUREMENT[i] == 0x20 || MEASUREMENT[i] == 0x2F || (MEASUREMENT[i] >= 0x3A && MEASUREMENT[i] <= 0x7F)) {
            fprintf(stderr, "Ошибка ввода\n");
            system("pause");
            exit(1);
        }
	}

    for(i = 0; MEASUREMENT[i] != '\0'; i++) {
        if(MEASUREMENT[i] == '.')
            MEASUREMENT[i] = ',';
    }

	res = atof(MEASUREMENT);
	return res;
}
