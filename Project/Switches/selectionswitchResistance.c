#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchResistance(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n \t");
    scanf("%s", key.in);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Бит;\n"
           "2 - Байт;\n"
           "3 - Килобайт;\n"
           "4 - Мегабайт;\n"
           "5 - Гигабайт;\n"
           "6 - Терабайт;\n"
           "7 - Пэтабайт;\n"
           "8 - Эксабайт;\n"
           "9 - Зэтабайт;\n\t");
    scanf("%s", key.out);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = bitsTObytes(MEASUREMENT);
            break;
        case 13:
            key.gate = bitsTOkilobytes(MEASUREMENT);
            break;
        case 14:
            key.gate = bitsTOmegabytes(MEASUREMENT);
            break;
        case 15:
            key.gate = bitsTOgigabytes(MEASUREMENT);
            break;
        case 16:
            key.gate = bitsTOterabytes(MEASUREMENT);
            break;
        case 17:
            key.gate = bitsTOpetabytes(MEASUREMENT);
            break;
        case 18:
            key.gate = bitsTOexabytes(MEASUREMENT);
            break;
        case 19:
            key.gate = bitsTOzetabytes(MEASUREMENT);
            break;
        case 21:
            key.gate = bytesTObits(MEASUREMENT);
            break;
        case 23:
            key.gate = bitsTOkilobytes(bytesTObits(MEASUREMENT));
            break;
        case 24:
            key.gate = bitsTOmegabytes(bytesTObits(MEASUREMENT));
            break;
        case 25:
            key.gate = bitsTOgigabytes(bytesTObits(MEASUREMENT));
            break;
        case 26:
            key.gate = bitsTOterabytes(bytesTObits(MEASUREMENT));
            break;
        case 27:
            key.gate = bitsTOpetabytes(bytesTObits(MEASUREMENT));
            break;
        case 28:
            key.gate = bitsTOexabytes(bytesTObits(MEASUREMENT));
            break;
        case 29:
            key.gate = bitsTOzetabytes(bytesTObits(MEASUREMENT));
            break;
        case 31:
            key.gate = kilobytesTObits(MEASUREMENT);
            break;
        case 32:
            key.gate = bitsTObytes(kilobytesTObits(MEASUREMENT));
            break;
        case 34:
            key.gate = bitsTOmegabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 35:
            key.gate = bitsTOgigabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 36:
            key.gate = bitsTOterabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 37:
            key.gate = bitsTOpetabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 38:
            key.gate = bitsTOexabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 39:
            key.gate = bitsTOzetabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 41:
            key.gate = megabytesTObits(MEASUREMENT);
            break;
        case 42:
            key.gate = bitsTObytes(megabytesTObits(MEASUREMENT));
            break;
        case 43:
            key.gate = bitsTOkilobytes(megabytesTObits(MEASUREMENT));
            break;
        case 45:
            key.gate = bitsTOgigabytes(megabytesTObits(MEASUREMENT));
            break;
        case 46:
            key.gate = bitsTOterabytes(megabytesTObits(MEASUREMENT));
            break;
        case 47:
            key.gate = bitsTOpetabytes(megabytesTObits(MEASUREMENT));
            break;
        case 48:
            key.gate = bitsTOexabytes(megabytesTObits(MEASUREMENT));
            break;
        case 49:
            key.gate = bitsTOzetabytes(megabytesTObits(MEASUREMENT));
            break;
        case 51:
            key.gate = gigabytesTObits(MEASUREMENT);
            break;
        case 52:
            key.gate = bitsTObytes(gigabytesTObits(MEASUREMENT));
            break;
        case 53:
            key.gate = bitsTOkilobytes(gigabytesTObits(MEASUREMENT));
            break;
        case 54:
            key.gate = bitsTOmegabytes(gigabytesTObits(MEASUREMENT));
            break;
        case 56:
            key.gate = bitsTOterabytes(gigabytesTObits(MEASUREMENT));
            break;
        case 57:
            key.gate = bitsTOpetabytes(gigabytesTObits(MEASUREMENT));
            break;
        case 58:
            key.gate = bitsTOexabytes(gigabytesTObits(MEASUREMENT));
            break;
        case 59:
            key.gate = bitsTOzetabytes(gigabytesTObits(MEASUREMENT));
            break;
        case 61:
            key.gate = terabytesTObits(MEASUREMENT);
            break;
        case 62:
            key.gate = bitsTObytes(terabytesTObits(MEASUREMENT));
            break;
        case 63:
            key.gate = bitsTOkilobytes(terabytesTObits(MEASUREMENT));
            break;
        case 64:
            key.gate = bitsTOmegabytes(terabytesTObits(MEASUREMENT));
            break;
        case 65:
            key.gate = bitsTOgigabytes(terabytesTObits(MEASUREMENT));
            break;
        case 67:
            key.gate = bitsTOpetabytes(terabytesTObits(MEASUREMENT));
            break;
        case 68:
            key.gate = bitsTOexabytes(terabytesTObits(MEASUREMENT));
            break;
        case 69:
            key.gate = bitsTOzetabytes(terabytesTObits(MEASUREMENT));
            break;
        case 71:
            key.gate = petabytesTObits(MEASUREMENT);
            break;
        case 72:
            key.gate = bitsTObytes(petabytesTObits(MEASUREMENT));
            break;
        case 73:
            key.gate = bitsTOkilobytes(petabytesTObits(MEASUREMENT));
            break;
        case 74:
            key.gate = bitsTOmegabytes(petabytesTObits(MEASUREMENT));
            break;
        case 75:
            key.gate = bitsTOgigabytes(petabytesTObits(MEASUREMENT));
            break;
        case 76:
            key.gate = bitsTOterabytes(petabytesTObits(MEASUREMENT));
            break;
        case 78:
            key.gate = bitsTOexabytes(petabytesTObits(MEASUREMENT));
            break;
        case 79:
            key.gate = bitsTOzetabytes(petabytesTObits(MEASUREMENT));
            break;
        case 81:
            key.gate = exabytesTObits(MEASUREMENT);
            break;
        case 82:
            key.gate = bitsTObytes(exabytesTObits(MEASUREMENT));
            break;
        case 83:
            key.gate = bitsTOkilobytes(exabytesTObits(MEASUREMENT));
            break;
        case 84:
            key.gate = bitsTOmegabytes(exabytesTObits(MEASUREMENT));
            break;
        case 85:
            key.gate = bitsTOgigabytes(exabytesTObits(MEASUREMENT));
            break;
        case 86:
            key.gate = bitsTOterabytes(exabytesTObits(MEASUREMENT));
            break;
        case 87:
            key.gate = bitsTOpetabytes(exabytesTObits(MEASUREMENT));
            break;
        case 89:
            key.gate = bitsTOzetabytes(exabytesTObits(MEASUREMENT));
            break;
        case 91:
            key.gate = zetabytesTObits(MEASUREMENT);
            break;
        case 92:
            key.gate = bitsTObytes(zetabytesTObits(MEASUREMENT));
            break;
        case 93:
            key.gate = bitsTOkilobytes(zetabytesTObits(MEASUREMENT));
            break;
        case 94:
            key.gate = bitsTOmegabytes(zetabytesTObits(MEASUREMENT));
            break;
        case 95:
            key.gate = bitsTOgigabytes(zetabytesTObits(MEASUREMENT));
            break;
        case 96:
            key.gate = bitsTOterabytes(zetabytesTObits(MEASUREMENT));
            break;
        case 97:
            key.gate = bitsTOpetabytes(zetabytesTObits(MEASUREMENT));
            break;
        case 98:
            key.gate = bitsTOexabytes(zetabytesTObits(MEASUREMENT));
            break;
    }
    return key.gate;
}
