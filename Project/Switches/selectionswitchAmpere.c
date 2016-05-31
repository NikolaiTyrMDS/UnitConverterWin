#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchAngle(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Ампер;\n"
           "2 - Килоампер;\n"
           "3 - Миллиампер;\n"
           "4 - Микроампер;\n"
           "5 - Наноампер;\n");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Ампер;\n"
           "2 - Килоампер;\n"
           "3 - Миллиапмер;\n"
           "4 - Микроампер;\n"
           "5 - Наноампер;\n");
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
        	key.gate = 	Ampere2kAmpere(MEASUREMENT);
            break;
        case 13:
            key.gate = Ampere2mAmpere(MEASUREMENT);
            break;
        case 14:
            key.gate = Ampere2mcAmpere(MEASUREMENT);
            break;
        case 15:
            key.gate = Ampere2nAmpere(MEASUREMENT);
            break;
        case 21:
            key.gate = kAmpere2Ampere(MEASUREMENT);
            break;
        case 23:
            key.gate = Ampere2mAmpere(kAmpere2Ampere(MEASUREMENT));
            break;
        case 24:
            key.gate = Ampere2mcAmpere(kAmpere2Ampere(MEASUREMENT));
            break;
        case 25:
            key.gate = Ampere2nAmpere(kAmpere2Ampere(MEASUREMENT));
            break;
        case 31:
            key.gate = mAmpere2Ampere(MEASUREMENT);
            break;
        case 32:
            key.gate = Ampere2kAmpere(mAmpere2Ampere(MEASUREMENT));
            break;
        case 34:
            key.gate = Ampere2mcAmpere(mAmpere2Ampere(MEASUREMENT));
            break;
        case 35:
            key.gate = Ampere2nAmpere(mAmpere2Ampere(MEASUREMENT));
            break;
        case 41:
            key.gate = mcAmpere2Ampere(MEASUREMENT);
            break;
        case 42:
            key.gate = Ampere2kAmpere(mcAmpere2Ampere(MEASUREMENT));
            break;
        case 43:
            key.gate = Ampere2mAmpere(mcAmpere2Ampere(MEASUREMENT));
            break;
        case 45:
            key.gate = Ampere2nAmpere(mcAmpere2Ampere(MEASUREMENT));
            break;
        case 51:
            key.gate = nAmpere2Ampere(MEASUREMENT);
            break;
        case 52:
            key.gate = Ampere2kAmpere(nAmpere2Ampere(MEASUREMENT));
            break;
        case 53:
            key.gate = Ampere2mAmpere(nAmpere2Ampere(MEASUREMENT));
            break;
        case 54:
            key.gate = Ampere2mcAmpere(nAmpere2Ampere(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }
	
    return key.gate;
}
