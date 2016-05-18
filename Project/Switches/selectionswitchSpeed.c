#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchSpeed(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Километры в час;\n"
           "2 - Метры в секунду;\n"
           "3 - Узлы;\n"
           "4 - Махи;\n"
           "5 - Мили в час;\n \t");
    //scanf("%d", &key.input_choice);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 5 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Километры в час;\n"
           "2 - Метры в секунду;\n"
           "3 - Узлы;\n"
           "4 - Махи;\n"
           "5 - Мили в час;\n \t");
    //scanf("%d", &key.output_choice);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 5 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = kmch_to_mc(MEASUREMENT);
            break;
        case 13:
            key.gate = kmch_to_uzl(MEASUREMENT);
            break;
        case 14:
            key.gate = kmch_to_mah(MEASUREMENT);
            break;
        case 15:
            key.gate = kmch_to_milch(MEASUREMENT);
            break;
        case 21:
            key.gate = mc_to_kmch(MEASUREMENT);
            break;
        case 23:
            key.gate = kmch_to_uzl(mc_to_kmch(MEASUREMENT));
            break;
        case 24:
            key.gate = kmch_to_mah(mc_to_kmch(MEASUREMENT));
            break;
        case 25:
            key.gate = kmch_to_milch(mc_to_kmch(MEASUREMENT));
            break;
        case 31:
            key.gate = uzl_to_kmch(MEASUREMENT);
            break;
        case 32:
            key.gate = kmch_to_mc(uzl_to_kmch(MEASUREMENT));
            break;
        case 34:
            key.gate = kmch_to_mah(uzl_to_kmch(MEASUREMENT));
            break;
        case 35:
            key.gate = kmch_to_milch(uzl_to_kmch(MEASUREMENT));
            break;
        case 41:
            key.gate = mah_to_kmch(MEASUREMENT);
            break;
        case 42:
            key.gate = kmch_to_mc(mah_to_kmch(MEASUREMENT));
            break;
        case 43:
            key.gate = kmch_to_uzl(mah_to_kmch(MEASUREMENT));
            break;
        case 45:
            key.gate = kmch_to_milch(mah_to_kmch(MEASUREMENT));
            break;
        case 51:
            key.gate = milch_to_kmch(MEASUREMENT);
            break;
        case 52:
            key.gate = kmch_to_mc(milch_to_kmch(MEASUREMENT));
            break;
        case 53:
            key.gate = kmch_to_uzl(milch_to_kmch(MEASUREMENT));
            break;
        case 54:
            key.gate = kmch_to_mah(milch_to_kmch(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
