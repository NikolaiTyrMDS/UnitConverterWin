#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchEnergy(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Джоули;\n"
           "2 - Киловатт-час;\n"
           "3 - Электронвольты;\n"
           "4 - Каллории;\n"
           "5 - Грам в татиловом эквиваленте;\n \t");
    //scanf("%d", &key.input_choice);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 5 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "1 - Джоули;\n"
           "2 - Киловатт-час;\n"
           "3 - Электронвольты;\n"
           "4 - Каллории;\n"
           "5 - Грам в татиловом эквиваленте;\n \t");
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
            key.gate = joule_to_kvatch(MEASUREMENT);
            break;
        case 13:
            key.gate = joule_to_electronvolt(MEASUREMENT);
            break;
        case 14:
            key.gate = joule_to_kall(MEASUREMENT);
            break;
        case 15:
            key.gate = joule_to_tnt(MEASUREMENT);
            break;
        case 21:
            key.gate = kvatch_to_joule(MEASUREMENT);
            break;
        case 23:
            key.gate = joule_to_electronvolt(kvatch_to_joule(MEASUREMENT));
            break;
        case 24:
            key.gate = joule_to_kall(kvatch_to_joule(MEASUREMENT));
            break;
        case 25:
            key.gate = joule_to_tnt(kvatch_to_joule(MEASUREMENT));
            break;
        case 31:
            key.gate = electronvolt_to_joule(MEASUREMENT);
            break;
        case 32:
            key.gate = joule_to_kvatch(electronvolt_to_joule(MEASUREMENT));
            break;
        case 34:
            key.gate = joule_to_kall(electronvolt_to_joule(MEASUREMENT));
            break;
        case 35:
            key.gate = joule_to_tnt(electronvolt_to_joule(MEASUREMENT));
            break;
        case 41:
            key.gate = kall_to_joule(MEASUREMENT);
            break;
        case 42:
            key.gate = joule_to_kvatch(kall_to_joule(MEASUREMENT));
            break;
        case 43:
            key.gate = joule_to_electronvolt(kall_to_joule(MEASUREMENT));
            break;
        case 45:
            key.gate = joule_to_tnt(kall_to_joule(MEASUREMENT));
            break;
        case 51:
            key.gate = tnt_to_joule(MEASUREMENT);
            break;
        case 52:
            key.gate = joule_to_kvatch(tnt_to_joule(MEASUREMENT));
            break;
        case 53:
            key.gate = joule_to_electronvolt(tnt_to_joule(MEASUREMENT));
            break;
        case 54:
            key.gate = joule_to_kall(tnt_to_joule(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
