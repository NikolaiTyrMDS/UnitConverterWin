#include <stdio.h>
#include <math.h>
#include "total.h"

double selectionswitchData(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("\nВыберите величину, из которой Вы хотите произвести конвертирование:\n\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice != 1 && key.input_choice != 2 && key.input_choice != 3 && key.input_choice != 4 && key.input_choice != 5 && key.input_choice != 6 && key.input_choice != 7 && key.input_choice != 8 && key.input_choice != 9) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("\nВыберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || (key.output_choice != 1 && key.output_choice != 2 && key.output_choice != 3 && key.output_choice != 4 && key.output_choice != 5 && key.output_choice != 6 && key.output_choice != 7 && key.output_choice != 8 && key.output_choice != 9) )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice;
    if(key.output_choice >= 10) {
        key.id = key.id * 100 + key.output_choice;
    }
    else if(key.output_choice < 10) {
        key.id = key.id * 10 + key.output_choice;
    }

    switch(key.id) {
        case 12:
            key.gate = bitsTobytes(MEASUREMENT);
            break;
        case 13:
            key.gate = bitsTokilobytes(MEASUREMENT);
            break;
        case 14:
            key.gate = bitsTomegabytes(MEASUREMENT);
            break;
        case 15:
            key.gate = bitsTogigabytes(MEASUREMENT);
            break;
        case 16:
            key.gate = bitsToterabytes(MEASUREMENT);
            break;
        case 17:
            key.gate = bitsTopetabytes(MEASUREMENT);
            break;
        case 18:
            key.gate = bitsToexabytes(MEASUREMENT);
            break;
        case 19:
            key.gate = bitsTozetabytes(MEASUREMENT);
            break;
        case 21:
            key.gate = bytesTobits(MEASUREMENT);
            break;
        case 23:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 24:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 25:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 26:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 27:
            key.gate = valuesBetweenFourUpward(MEASUREMENT);
            break;
        case 28:
            key.gate = valuesBetweenFiveUpward(MEASUREMENT);
            break;
        case 29:
            key.gate = valuesBetweenSixUpward(MEASUREMENT);
            break;
        case 31:
            key.gate = kilobytesTobits(MEASUREMENT);
            break;
        case 32:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 34:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 35:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 36:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 37:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 38:
            key.gate = valuesBetweenFourUpward(MEASUREMENT);
            break;
        case 39:
            key.gate = valuesBetweenFiveUpward(MEASUREMENT);
            break;
        case 41:
            key.gate = megabytesTobits(MEASUREMENT);
            break;
        case 42:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 43:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 45:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 46:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 47:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 48:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 49:
            key.gate = valuesBetweenFourUpward(MEASUREMENT);
            break;
        case 51:
            key.gate = gigabytesTobits(MEASUREMENT);
            break;
        case 52:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 53:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 54:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 56:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 57:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 58:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 59:
            key.gate = valuesBetweenThreeUpward(MEASUREMENT);
            break;
        case 61:
            key.gate = terabytesTobits(MEASUREMENT);
            break;
        case 62:
            key.gate = valuesBetweenThreeToDecrease(MEASUREMENT);
            break;
        case 63:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 64:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 65:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 67:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 68:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 69:
            key.gate = valuesBetweenTwoUpward(MEASUREMENT);
            break;
        case 71:
            key.gate = petabytesTobits(MEASUREMENT);
            break;
        case 72:
            key.gate = valuesBetweenFourToDecrease(MEASUREMENT);
            break;
        case 73:
            key.gate = valuesBetweenThreeToDecrease(MEASUREMENT);
            break;
        case 74:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 75:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 76:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 78:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 79:
            key.gate = valuesBetweenOneUpward(MEASUREMENT);
            break;
        case 81:
            key.gate = exabytesTobits(MEASUREMENT);
            break;
        case 82:
            key.gate = valuesBetweenFiveToDecrease(MEASUREMENT);
            break;
        case 83:
            key.gate = valuesBetweenFourToDecrease(MEASUREMENT);
            break;
        case 84:
            key.gate = valuesBetweenThreeToDecrease(MEASUREMENT);
            break;
        case 85:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 86:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 87:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        case 89:
            key.gate = adjacentValuesUpward(MEASUREMENT);
            break;
        case 91:
            key.gate = zetabytesTobits(MEASUREMENT);
            break;
        case 92:
            key.gate = valuesBetweenSixToDecrease(MEASUREMENT);
            break;
        case 93:
            key.gate = valuesBetweenFiveToDecrease(MEASUREMENT);
            break;
        case 94:
            key.gate = valuesBetweenFourToDecrease(MEASUREMENT);
            break;
        case 95:
            key.gate = valuesBetweenThreeToDecrease(MEASUREMENT);
            break;
        case 96:
            key.gate = valuesBetweenTwoToDecrease(MEASUREMENT);
            break;
        case 97:
            key.gate = valuesBetweenOneToDecrease(MEASUREMENT);
            break;
        case 98:
            key.gate = adjacentValuesToDecrease(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
