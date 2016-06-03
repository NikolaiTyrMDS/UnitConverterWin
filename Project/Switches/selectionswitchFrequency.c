#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchFrequency(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Микрогерцы;\n"
           "2 - Миллигерцы;\n"
           "3 - Герцы;\n"
           "4 - Килогерцы;\n"
           "5 - Мегагерцы;\n"
           "6 - Френели;\n"
           "7 - Радианы на секунду;\n\t");
    scanf("%s", key.in);
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%s", key.in);
        key.input_choice = parsing_id(key.in);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Микрогерцы;\n"
           "2 - Миллигерцы;\n"
           "3 - Герцы;\n"
           "4 - Килогерцы;\n"
           "5 - Мегагерцы;\n"
           "6 - Френели;\n"
           "7 - Радианы на секунду;\n\t");
    scanf("%s", key.out);
    key.output_choice = parsing_id(key.out);
    //scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.output_choice >= 8 || key.output_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%s", key.out);
        key.input_choice = parsing_id(key.out);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Herz2MlHerz(MkHerz2Herz(MEASUREMENT));
            break;
        case 13:
            key.gate = MkHerz2Herz(MEASUREMENT);
            break;
        case 14:
            key.gate = Herz2kHerz(MkHerz2Herz(MEASUREMENT));
            break;
        case 15:
            key.gate = Herz2MgHerz(MkHerz2Herz(MEASUREMENT));
            break;
        case 16:
            key.gate = Herz2Frenel(MkHerz2Herz(MEASUREMENT));
            break;
        case 17:
            key.gate = Herz2RadSec(MkHerz2Herz(MEASUREMENT));
            break;
        case 21:
            key.gate = Herz2MkHerz(MlHerz2Herz(MEASUREMENT));
            break;
        case 23:
            key.gate = MlHerz2Herz(MEASUREMENT);
            break;
        case 24:
            key.gate = Herz2kHerz(MlHerz2Herz(MEASUREMENT));
            break;
        case 25:
            key.gate = Herz2MgHerz(MlHerz2Herz(MEASUREMENT));
            break;
        case 26:
            key.gate = Herz2Frenel(MlHerz2Herz(MEASUREMENT));
            break;
        case 27:
            key.gate = Herz2RadSec(MlHerz2Herz(MEASUREMENT));
            break;
        case 31:
            key.gate = Herz2MkHerz(MEASUREMENT);
            break;
        case 32:
            key.gate = Herz2MlHerz(MEASUREMENT);
            break;
        case 34:
            key.gate = Herz2kHerz(MEASUREMENT);
            break;
        case 35:
            key.gate = Herz2MgHerz(MEASUREMENT);
            break;
        case 36:
            key.gate = Herz2Frenel(MEASUREMENT);
            break;
        case 37:
            key.gate = Herz2RadSec(MEASUREMENT);
            break;
        case 41:
            key.gate = Herz2MkHerz(kHerz2Herz(MEASUREMENT));
            break;
        case 42:
            key.gate = Herz2MlHerz(kHerz2Herz(MEASUREMENT));
            break;
        case 43:
            key.gate = kHerz2Herz(MEASUREMENT);
            break;
        case 45:
            key.gate = Herz2MgHerz(kHerz2Herz(MEASUREMENT));
            break;
        case 46:
            key.gate = Herz2Frenel(kHerz2Herz(MEASUREMENT));
            break;
        case 47:
            key.gate = Herz2RadSec(kHerz2Herz(MEASUREMENT));
            break;
        case 51:
            key.gate = Herz2MkHerz(MgHerz2Herz(MEASUREMENT));
            break;
        case 52:
            key.gate = Herz2MlHerz(MgHerz2Herz(MEASUREMENT));
            break;
        case 53:
            key.gate = MgHerz2Herz(MEASUREMENT);
            break;
        case 54:
            key.gate = Herz2kHerz(MgHerz2Herz(MEASUREMENT));
            break;
        case 56:
            key.gate = Herz2Frenel(MgHerz2Herz(MEASUREMENT));
            break;
        case 57:
            key.gate = Herz2RadSec(MgHerz2Herz(MEASUREMENT));
            break;
        case 61:
            key.gate = Herz2MkHerz(Frenel2Herz(MEASUREMENT));
            break;
        case 62:
            key.gate = Herz2MlHerz(Frenel2Herz(MEASUREMENT));
            break;
        case 63:
            key.gate = Frenel2Herz(MEASUREMENT);
            break;
        case 64:
            key.gate = Herz2kHerz(Frenel2Herz(MEASUREMENT));
            break;
        case 65:
            key.gate = Herz2MgHerz(Frenel2Herz(MEASUREMENT));
            break;
        case 67:
            key.gate = Herz2RadSec(Frenel2Herz(MEASUREMENT));
            break;
        case 71:
            key.gate = Herz2MkHerz(RadSec2Herz(MEASUREMENT));
            break;
        case 72:
            key.gate = Herz2MlHerz(RadSec2Herz(MEASUREMENT));
            break;
        case 73:
            key.gate = RadSec2Herz(MEASUREMENT);
            break;
        case 74:
            key.gate = Herz2kHerz(RadSec2Herz(MEASUREMENT));
            break;
        case 75:
            key.gate = Herz2MgHerz(RadSec2Herz(MEASUREMENT));
            break;
        case 76:
            key.gate = Herz2Frenel(RadSec2Herz(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
