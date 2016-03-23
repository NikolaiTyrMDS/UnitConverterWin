#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include"data.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    double result, value;
    char ch;

    printf("ertrtuytfdhcg: \n");
    scanf("%lf", &value);
    printf("ifdzxcvcbngjhjg?;\n");
    ch = getch();
    printf("\n");

    switch(ch) {
        case '1':
            result = adjacentValuesUpward(value);
            printf("Result is %lf", result);
            break;
        case '2':
            result = adjacentValuesToDecrease(value);
            printf("Result is %lf", result);
            break;
        default:
            printf("ERROR");
            break;
    }
    printf("\n\n");

    system("pause");
    exit(EXIT_SUCCESS);
}
