#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

int main()
{
    setlocale(LC_ALL, "");

    MainParameters head;
    head.version = 1.54;
    head.like_to_continue = 1;

    printf("Unit Converter. Версия %.2f \n\n", head.version);

    printf("ВНИМАНИЕ!\n"
           "В настоящее время этот конвертер работает с пунктами 3, 17. \n\n");

    while(head.like_to_continue == 1) {
        printf("Выберите, с величиной какого рода Вы хотели бы работать: \n"
               "1 - Время;\t\t\t11 - Плотность; \n"
               "2 - Давление;\t\t\t12 - Радиоактивность; \n"
               "3 - Данные;\t\t\t13 - Сила; \n"
               "4 - Длина;\t\t\t14 - Сила тока; \n"
               "5 - Заряд;\t\t\t15 - Скорость; \n"
               "6 - Количество вещества;\t16 - Сопротивление; \n"
               "7 - Масса;\t\t\t17 - Температура; \n"
               "8 - Мощность;\t\t\t18 - Угол; \n"
               "9 - Объём;\t\t\t19 - Частота; \n"
               "10 - Площадь;\t\t\t20 - Энергия; \n\t");
        scanf("%d", &head.measurement_id);

        while(head.measurement_id >= 21) {
            printf("\nРод величины вами не выбран. Сделайте корректный выбор: \n\t");
            scanf("%d", &head.measurement_id);
        }

        switch(head.measurement_id) {
            case 1:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 2:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 3:
                printf("Введите число, которое Вы хотели были перевести. \n"
                       "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
                head.VOLUME = parsing(head.MEASUREMENT);
                head.result = selectionswitchData(head.VOLUME);
                break;
            case 4:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 5:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 6:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 7:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 8:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 9:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 10:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 11:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 12:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 13:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 14:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 15:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 16:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 17:
                printf("Введите число, которое Вы хотели были перевести. \n"
                       "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
                head.VOLUME = parsing(head.MEASUREMENT);
                head.result = selectionswitchTemperature(head.VOLUME);
                break;
            case 18:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 19:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            case 20:
                fprintf(stderr, "Модуль не существует\n");
                system("pause");
                exit(EXIT_FAILURE);
            default:
                fprintf(stderr, "Вы пытаетесь выбрать род величины, которого не существует. Программа будет завершена;");
                break;
        }

        printf("Результат конвертирования: %.6lf\n", head.result);

        printf("Вам нравится?\n");
        printf("Хотите продолжить?\n");
        scanf("%d", &head.like_to_continue);
        printf("\n");
    }

    system("pause");
    exit(EXIT_SUCCESS);
}
