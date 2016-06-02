#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchQuantityOfSubstance(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Микромоли;\n"
           "2 - Миллимоли;\n"
           "3 - Моли;\n"
           "4 - Киломоли;\n"
           "5 - Мегамоли;\n"
           "6 - Фунт-моли;\n\t");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 7 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Микромоли;\n"
           "2 - Миллимоли;\n"
           "3 - Моли;\n"
           "4 - Киломоли;\n"
           "5 - Мегамоли;\n"
           "6 - Фунт-моли;\n\t");
    key.output_choice = parsing_id(key.out);
    //scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 7 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Mole2mMole(MkMole2Mole(MEASUREMENT));
            break;
        case 13:
            key.gate = MkMole2Mole(MEASUREMENT);
            break;
        case 14:
            key.gate = Mole2kMole(MkMole2Mole(MEASUREMENT));
            break;
        case 15:
            key.gate = Mole2MgMole(MkMole2Mole(MEASUREMENT));
            break;
        case 16:
            key.gate = Mole2PoundMole(MkMole2Mole(MEASUREMENT));
            break;
        case 21:
            key.gate = Mole2MkMole(mMole2Mole(MEASUREMENT));
            break;
        case 23:
            key.gate = mMole2Mole(MEASUREMENT);
            break;
        case 24:
            key.gate = Mole2kMole(mMole2Mole(MEASUREMENT));
            break;
        case 25:
            key.gate = Mole2MgMole(mMole2Mole(MEASUREMENT));
            break;
        case 26:
            key.gate = Mole2PoundMole(mMole2Mole(MEASUREMENT));
            break;
        case 31:
            key.gate = Mole2MkMole(MEASUREMENT);
            break;
        case 32:
            key.gate = Mole2mMole(MEASUREMENT);
            break;
        case 34:
            key.gate = Mole2kMole(MEASUREMENT);
            break;
        case 35:
            key.gate = Mole2MgMole(MEASUREMENT);
            break;
        case 36:
            key.gate = Mole2PoundMole(MEASUREMENT);
            break;
        case 41:
            key.gate = Mole2MkMole(kMole2Mole(MEASUREMENT));
            break;
        case 42:
            key.gate = Mole2mMole(kMole2Mole(MEASUREMENT));
            break;
        case 43:
            key.gate = kMole2Mole(MEASUREMENT);
            break;
        case 45:
            key.gate = Mole2MgMole(kMole2Mole(MEASUREMENT));
            break;
        case 46:
            key.gate = Mole2PoundMole(kMole2Mole(MEASUREMENT));
            break;
        case 51:
            key.gate = Mole2MkMole(MgMole2Mole(MEASUREMENT));
            break;
        case 52:
            key.gate = Mole2mMole(MgMole2Mole(MEASUREMENT));
            break;
        case 53:
            key.gate = MgMole2Mole(MEASUREMENT);
            break;
        case 54:
            key.gate = Mole2kMole(MgMole2Mole(MEASUREMENT));
            break;
        case 56:
            key.gate = Mole2PoundMole(MgMole2Mole(MEASUREMENT));
            break;
        case 61:
            key.gate = Mole2MkMole(PoundMole2Mole(MEASUREMENT));
            break;
        case 62:
            key.gate = Mole2mMole(PoundMole2Mole(MEASUREMENT));
            break;
        case 63:
            key.gate = PoundMole2Mole(MEASUREMENT);
            break;
        case 64:
            key.gate = Mole2kMole(PoundMole2Mole(MEASUREMENT));
            break;
        case 65:
            key.gate = Mole2MgMole(PoundMole2Mole(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
