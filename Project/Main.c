#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include "Headers/total.h"
#include <windows.h>

int main()
{
    SetConsoleCP(65001);
    SetConsoleOutputCP(65001);
    setlocale(LC_ALL, "ru-RU.utf8");

    MainParameters head;
    head.version = 2.0;
    head.like_to_continue = 1;

    printf("Unit Converter. Версия %.2f \n\n", head.version);

    while(head.like_to_continue == 1)
    {
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
        int ID = parsing_id(head.measurement_id);
        while(ID >= 21 || ID <= 0)
        {
            printf("\nРод величины вами не выбран. Сделайте корректный выбор: \n\t");
            ID = parsing_id(head.measurement_id);
        }

        switch(ID)
        {
        case 1:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchTime(head.VOLUME);
            break;
        case 2:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchPression(head.VOLUME);
            break;
        case 3:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchData(head.VOLUME);
            break;
        case 4:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchLength(head.VOLUME);
            break;
        case 5:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchElectric_charge(head.VOLUME);
            break;
        case 6:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchQuantityOfSubstance(head.VOLUME);
            break;
        case 7:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchMass(head.VOLUME);
            break;
        case 8:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchPower(head.VOLUME);
            break;
        case 9:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchAmount(head.VOLUME);
            break;
        case 10:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchArea(head.VOLUME);
            break;
        case 11:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchDensity(head.VOLUME);
            break;
        case 12:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchRadiation(head.VOLUME);
            break;
        case 13:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchStrength(head.VOLUME);
            break;
        case 14:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchAmpere(head.VOLUME);
            break;
        case 15:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchSpeed(head.VOLUME);
            break;
        case 16:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchResistance(head.VOLUME);
            break;
        case 17:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchTemperature(head.VOLUME);
            break;
        case 18:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchAngle(head.VOLUME);
            break;
        case 19:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchFrequency(head.VOLUME);
            break;
        case 20:
            printf("Введите число, которое Вы хотели были перевести. \n"
                   "В качестве знака-разделителя для вещественных чисел используйте символ ','.\n\t");
            head.VOLUME = parsing(head.MEASUREMENT);
            head.result = selectionswitchEnergy(head.VOLUME);
            break;
        default:
            fprintf(stderr, "Вы пытаетесь выбрать род величины, которого не существует. Программа будет завершена;");
            break;
        }

        convert(head.result);

        printf("Хотите продолжить?\n");
        scanf("%d", &head.like_to_continue);
        printf("\n");
    }

    system("pause");
    exit(EXIT_SUCCESS);
}
