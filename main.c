#include<stdio.h>
#include<stdlib.h>
#include<locale.h>
#include<math.h>
#include"data.h"

int main()
{
    setlocale(LC_ALL, "Russian");

    double result, value;
    int id = NULL, input_choice = NULL, output_choice = NULL;
    SelValues key;

    printf("Введите число, которое Вы хотели были перевести\n\t");
    scanf("%lf", &key.converting);

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n");
    scanf("%d", &input_choice);

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Помните: не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n");
    scanf("%d", &output_choice);

    printf("\n");

    id = input_choice;
    if(output_choice >= 10) {
        id = id * 100 + output_choice;
    }
    else if(output_choice < 10) {
        id = id * 10 + output_choice;
    }

    switch(id) {
        case 12:
            result = bitsTobytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 13:
            result = bitsTokilobytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 14:
            result = bitsTomegabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 15:
            result = bitsTogigabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 16:
            result = bitsToterabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 17:
            result = bitsTopetabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 18:
            result = bitsToexabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 19:
            result = bitsTozetabytes(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 21:
            result = bytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 23:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 24:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 25:
            result = valuesBetweenTwoUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 26:
            result = valuesBetweenThreeUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 27:
            result = valuesBetweenFourUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 28:
            result = valuesBetweenFiveUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 29:
            result = valuesBetweenSixUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 31:
            result = kilobytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 32:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 34:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 35:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 36:
            result = valuesBetweenTwoUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 37:
            result = valuesBetweenThreeUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 38:
            result = valuesBetweenFourUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 39:
            result = valuesBetweenFiveUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 41:
            result = megabytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 42:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 43:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 45:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 46:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 47:
            result = valuesBetweenTwoUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 48:
            result = valuesBetweenThreeUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 49:
            result = valuesBetweenFourUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 51:
            result = gigabytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 52:
            result = valuesBetweenTwoToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 53:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 54:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 56:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 57:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 58:
            result = valuesBetweenTwoUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 59:
            result = valuesBetweenThreeUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 61:
            result = terabytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 62:
            result = valuesBetweenThreeToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 63:
            result = valuesBetweenTwoToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 64:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 65:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 67:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 68:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 69:
            result = valuesBetweenTwoUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 71:
            result = petabytesTobits(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 72:
            result = valuesBetweenFourToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 73:
            result = valuesBetweenThreeToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 74:
            result = valuesBetweenTwoToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 75:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 76:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 78:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 79:
            result = valuesBetweenOneUpward(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 81:
            result = exabytesTobits(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 82:
            result = valuesBetweenFiveToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 83:
            result = valuesBetweenFourToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 84:
            result = valuesBetweenThreeToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 85:
            result = valuesBetweenTwoToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 86:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 87:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 89:
            result = adjacentValuesUpward(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 91:
            result = zetabytesTobits(key.converting);
            printf("Результат конвертирования:  %.2lf", result);
            break;
        case 92:
            result = valuesBetweenSixToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 93:
            result = valuesBetweenFiveToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 94:
            result = valuesBetweenFourToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 95:
            result = valuesBetweenThreeToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 96:
            result = valuesBetweenTwoToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 97:
            result = valuesBetweenOneToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        case 98:
            result = adjacentValuesToDecrease(key.converting);
            printf("Результат конвертирования: %.2lf", result);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже конвертируете\n");
            break;
    }
    printf("\n\n");

    system("pause");
    exit(EXIT_SUCCESS);
}
