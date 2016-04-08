#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include"total.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    float version = 0.87;
    MainParameters head;

    printf("Unit Converter. Версия %.2f \n\n", version);

    printf("ВНИМАНИЕ!\n"
           "В настоящий момент конвертер работает исключительно с объёмами данных\n\n");

    printf("Для начала выберите, с величиной какого рода Вы хотели бы работать: \n\n"
           "1 - Данные; \n\n\t");
    scanf("%d", &head.measurement_id);

    while(head.measurement_id != 1) {
        printf("\nРод величины вами не выбран. Сделайте корректный выбор: \n\n\t");
        scanf("%d", &head.measurement_id);
    }

    switch(head.measurement_id) {
        case 1:
            printf("\nВведите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\n\t");
            scanf("%lf", &head.MEASUREMENT);
            head.result = selectionswitchData(head.MEASUREMENT);
            break;
        default:
            break;
    }

    printf("\nРезультат конвертирования: %.6lf\n", head.result);

    system("pause");
    exit(EXIT_SUCCESS);
}
