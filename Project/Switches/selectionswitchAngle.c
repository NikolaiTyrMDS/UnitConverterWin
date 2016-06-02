#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchAngle(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Секунды;\n"
           "2 - Минуты;\n"
           "3 - Градусы;\n"
           "4 - Радианы;\n"
           "5 - Грады;\n"
           "6 - Секстанты;\n"
           "7 - Румбы;\n\t");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Секунды;\n"
           "2 - Минуты;\n"
           "3 - Градусы\n"
           "4 - Радианы;\n"
           "5 - Грады;\n"
           "6 - Секстанты;\n"
           "7 - Румбы;\n\t");
    key.output_choice = parsing_id(key.out);
    //scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 8 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;
    switch(key.id) {
        case 12:
        	key.gate = Degree2Min(Sec2Degree(MEASUREMENT));
            break;
        case 13:
            key.gate = Sec2Degree(MEASUREMENT);
            break;
        case 14:
            key.gate = Degree2Radian(Sec2Degree(MEASUREMENT));
            break;
        case 15:
            key.gate = Degree2Grad(Sec2Degree(MEASUREMENT));
            break;
        case 16:
            key.gate = Degree2Sextant(Sec2Degree(MEASUREMENT));
            break;
        case 17:
            key.gate = Degree2Rumb(Sec2Degree(MEASUREMENT));
            break;
        case 21:
            key.gate = Degree2Sec(Min2Degree(MEASUREMENT));
            break;
        case 23:
            key.gate = Min2Degree(MEASUREMENT);
            break;
        case 24:
            key.gate = Degree2Radian(Min2Degree(MEASUREMENT));
            break;
        case 25:
            key.gate = Degree2Grad(Min2Degree(MEASUREMENT));
            break;
        case 26:
            key.gate = Degree2Sextant(Min2Degree(MEASUREMENT));
            break;
        case 27:
            key.gate = Degree2Rumb(Min2Degree(MEASUREMENT));
            break;
        case 31:
            key.gate = Degree2Sec(MEASUREMENT);
            break;
        case 32:
            key.gate = Degree2Min(MEASUREMENT);
            break;
        case 34:
            key.gate = Degree2Radian(MEASUREMENT);
            break;
        case 35:
            key.gate = Degree2Grad(MEASUREMENT);
            break;
        case 36:
            key.gate = Degree2Sextant(MEASUREMENT);
            break;
        case 37:
            key.gate = Degree2Rumb(MEASUREMENT);
            break;
        case 41:
            key.gate = Degree2Sec(Radian2Degree(MEASUREMENT));
            break;
        case 42:
            key.gate = Degree2Min(Radian2Degree(MEASUREMENT));
            break;
        case 43:
            key.gate = Radian2Degree(MEASUREMENT);
            break;
        case 45:
            key.gate = Degree2Grad(Radian2Degree(MEASUREMENT));
            break;
        case 46:
            key.gate = Degree2Sextant(Radian2Degree(MEASUREMENT));
            break;
        case 47:
            key.gate = Degree2Rumb(Radian2Degree(MEASUREMENT));
            break;
        case 51:
            key.gate = Degree2Sec(Grad2Degree(MEASUREMENT));
            break;
        case 52:
            key.gate = Degree2Min(Grad2Degree(MEASUREMENT));
            break;
        case 53:
            key.gate = Grad2Degree(MEASUREMENT);
            break;
        case 54:
            key.gate = Degree2Radian(Grad2Degree(MEASUREMENT));
            break;
        case 56:
            key.gate = Degree2Sextant(Grad2Degree(MEASUREMENT));
            break;
        case 57:
            key.gate = Degree2Rumb(Grad2Degree(MEASUREMENT));
            break;
        case 61:
            key.gate = Degree2Sec(Sextant2Degree(MEASUREMENT));
            break;
        case 62:
            key.gate = Degree2Min(Sextant2Degree(MEASUREMENT));
            break;
        case 63:
            key.gate = Sextant2Degree(MEASUREMENT);
            break;
        case 64:
            key.gate = Degree2Radian(Sextant2Degree(MEASUREMENT));
            break;
        case 65:
            key.gate = Degree2Grad(Sextant2Degree(MEASUREMENT));
            break;
        case 67:
            key.gate = Degree2Rumb(Sextant2Degree(MEASUREMENT));
            break;
        case 71:
            key.gate = Degree2Sec(Rumb2Degree(MEASUREMENT));
            break;
        case 72:
            key.gate = Degree2Min(Rumb2Degree(MEASUREMENT));
            break;
        case 73:
            key.gate = Rumb2Degree(MEASUREMENT);
            break;
        case 74:
            key.gate = Degree2Radian(Rumb2Degree(MEASUREMENT));
            break;
        case 75:
            key.gate = Degree2Grad(Rumb2Degree(MEASUREMENT));
            break;
        case 76:
            key.gate = Degree2Sextant(Rumb2Degree(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
