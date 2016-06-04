#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double parsing(char *MEASUREMENT)
{
	double res;
	int i = 0;

	scanf("%s", MEASUREMENT);

	for(i = 0; i < strlen(MEASUREMENT); i++) {
        if(((MEASUREMENT[i] >= 0x30 && MEASUREMENT[i] <= 0x39) || (MEASUREMENT[i] == 0x2C || MEASUREMENT[i] == 0x2E)) == 0) {
            fprintf(stderr, "Вы ввели не коректные данные.\n");
            scanf("%s", MEASUREMENT);
        }
	}

    for(i = 0; MEASUREMENT[i] != '\0'; i++) {
        if(MEASUREMENT[i] == ',')
            MEASUREMENT[i] = '.';
    }

	res = atof(MEASUREMENT);
	return res;
}

int parsing_id(char *MEASUREMENT)
{
	int res;
	int i = 0;

	scanf("%s", MEASUREMENT);

	for(i = 0; i < strlen(MEASUREMENT); i++) {
        while((MEASUREMENT[i] >= 0x30 && MEASUREMENT[i] <= 0x39) == 0) {
            fprintf(stderr, "Вы ввели не коректные данные\n");
            scanf("%s", MEASUREMENT);
        }
	}

	res = atoi(MEASUREMENT);
	return res;
}
