#include <stdio.h>
#include <string.h>
#include <stdlib.h>

double transfer(char *MEASUREMENT)
{
	int i=0;
	double res;

	scanf("%s", MEASUREMENT);

    for(i = 0; MEASUREMENT[i] != '\0'; i++) {
        if(MEASUREMENT[i] == '.')
            MEASUREMENT[i] = ',';
    }

	res = atof(MEASUREMENT);
	return res;
}
