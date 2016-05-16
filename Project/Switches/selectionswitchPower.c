#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchPower(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
    	   "1 - Микроват;\n"
           "2 - Милливат;\n"
           "3 - Ват;\n"
           "4 - Киловат;\n"
           "5 - Мегават;\n"
           "6 - Килограмм-сил-метров в секунду;\n"
           "7 - Эрг в секунду;\n"
           "8 - Лошадиных сил(метрических);\n"
           "9 - Лошадиных сил(английских);\n\t");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
    	   "1 - Микроват;\n"
           "2 - Милливат;\n"
           "3 - Ват;\n"
           "4 - Киловат;\n"
           "5 - Мегават;\n"
           "6 - Килограмм-сил-метров в секунду;\n"
           "7 - Эрг в секунду;\n"
           "8 - Лошадиных сил(метрических);\n"
           "9 - Лошадиных сил(английских);\n\t");
    key.output_choice = parsing_id(key.out);
    //scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Vat2MlVat(MkVat2Vat(MEASUREMENT));
            break;
        case 13:
            key.gate = MkVat2Vat(MEASUREMENT);
            break;
        case 14:
            key.gate = Vat2kVat(MkVat2Vat(MEASUREMENT));
            break;
        case 15:
            key.gate = Vat2mVat(MkVat2Vat(MEASUREMENT));
            break;
        case 16:
            key.gate = Vat2kgSilaMvS(MkVat2Vat(MEASUREMENT));
            break;
        case 17:
            key.gate = Vat2ErgS(MkVat2Vat(MEASUREMENT));
            break;
        case 18:
            key.gate = Vat2HorsePowMetr(MkVat2Vat(MEASUREMENT));
            break;
        case 19:
            key.gate = Vat2HorsePowEng(MkVat2Vat(MEASUREMENT));
            break;
        case 21:
            key.gate = Vat2MkVat(MlVat2Vat(MEASUREMENT));
            break;
        case 23:
            key.gate = MlVat2Vat(MEASUREMENT);
            break;
        case 24:
            key.gate = Vat2kVat(MlVat2Vat(MEASUREMENT));
            break;
        case 25:
            key.gate = Vat2mVat(MlVat2Vat(MEASUREMENT));
            break;
        case 26:
            key.gate = Vat2kgSilaMvS(MlVat2Vat(MEASUREMENT));
            break;
        case 27:
            key.gate = Vat2ErgS(MlVat2Vat(MEASUREMENT));
            break;
        case 28:
            key.gate = Vat2HorsePowMetr(MlVat2Vat(MEASUREMENT));
            break;
        case 29:
            key.gate = Vat2HorsePowEng(MlVat2Vat(MEASUREMENT));
            break;
        case 31:
            key.gate = Vat2MkVat(MEASUREMENT);
            break;
        case 32:
            key.gate = Vat2MlVat(MEASUREMENT);
            break;
        case 34:
            key.gate = Vat2kVat(MEASUREMENT);
            break;
        case 35:
            key.gate = Vat2mVat(MEASUREMENT);
            break;
        case 36:
            key.gate = Vat2kgSilaMvS(MEASUREMENT);
            break;
        case 37:
            key.gate = Vat2ErgS(MEASUREMENT);
            break;
        case 38:
            key.gate = Vat2HorsePowMetr(MEASUREMENT);
            break;
        case 39:
            key.gate = Vat2HorsePowEng(MEASUREMENT);
            break;
        case 41:
            key.gate = Vat2MkVat(kVat2Vat(MEASUREMENT));
            break;
        case 42:
            key.gate = Vat2MlVat(kVat2Vat(MEASUREMENT));
            break;
        case 43:
            key.gate = kVat2Vat(MEASUREMENT);
            break;
        case 45:
            key.gate = Vat2mVat(kVat2Vat(MEASUREMENT));
            break;
        case 46:
            key.gate = Vat2kgSilaMvS(kVat2Vat(MEASUREMENT));
            break;
        case 47:
            key.gate = Vat2ErgS(kVat2Vat(MEASUREMENT));
            break;
        case 48:
            key.gate = Vat2HorsePowMetr(kVat2Vat(MEASUREMENT));
            break;
        case 49:
            key.gate = Vat2HorsePowEng(kVat2Vat(MEASUREMENT));
            break;
        case 51:
            key.gate = Vat2MkVat(mVat2Vat(MEASUREMENT));
            break;
        case 52:
            key.gate = Vat2MlVat(mVat2Vat(MEASUREMENT));
            break;
        case 53:
            key.gate = mVat2Vat(MEASUREMENT);
            break;
        case 54:
            key.gate = Vat2kVat(mVat2Vat(MEASUREMENT));
            break;
        case 56:
            key.gate = Vat2kgSilaMvS(mVat2Vat(MEASUREMENT));
            break;
        case 57:
            key.gate = Vat2ErgS(mVat2Vat(MEASUREMENT));
            break;
        case 58:
            key.gate = Vat2HorsePowMetr(mVat2Vat(MEASUREMENT));
            break;
        case 59:
            key.gate = Vat2HorsePowEng(mVat2Vat(MEASUREMENT));
            break;
        case 61:
            key.gate = Vat2MkVat(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 62:
            key.gate = Vat2MlVat(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 63:
            key.gate = kgSilaMvS2Vat(MEASUREMENT);
            break;
        case 64:
            key.gate = Vat2kVat(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 65:
            key.gate = Vat2mVat(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 67:
            key.gate = Vat2ErgS(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 68:
            key.gate = Vat2HorsePowMetr(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 69:
            key.gate = Vat2HorsePowEng(kgSilaMvS2Vat(MEASUREMENT));
            break;
        case 71:
            key.gate = Vat2MkVat(ErgS2Vat(MEASUREMENT));
            break;
        case 72:
            key.gate = Vat2MlVat(ErgS2Vat(MEASUREMENT));
            break;
        case 73:
            key.gate = ErgS2Vat(MEASUREMENT);
            break;
        case 74:
            key.gate = Vat2kVat(ErgS2Vat(MEASUREMENT));
            break;
        case 75:
            key.gate = Vat2mVat(ErgS2Vat(MEASUREMENT));
            break;
        case 76:
            key.gate = Vat2kgSilaMvS(ErgS2Vat(MEASUREMENT));
            break;
        case 78:
            key.gate = Vat2HorsePowMetr(ErgS2Vat(MEASUREMENT));
            break;
        case 79:
            key.gate = Vat2HorsePowEng(ErgS2Vat(MEASUREMENT));
            break;
        case 81:
            key.gate = Vat2MkVat(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 82:
            key.gate = Vat2MlVat(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 83:
            key.gate = HorsePowMetr2Vat(MEASUREMENT);
            break;
        case 84:
            key.gate = Vat2kVat(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 85:
            key.gate = Vat2mVat(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 86:
            key.gate = Vat2kgSilaMvS(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 87:
            key.gate = Vat2ErgS(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 89:
            key.gate = Vat2HorsePowEng(HorsePowMetr2Vat(MEASUREMENT));
            break;
        case 91:
            key.gate = Vat2MkVat(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 92:
            key.gate = Vat2MlVat(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 93:
            key.gate = HorsePowEng2Vat(MEASUREMENT);
            break;
        case 94:
            key.gate = Vat2kVat(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 95:
            key.gate = Vat2mVat(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 96:
            key.gate = Vat2kgSilaMvS(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 97:
            key.gate = Vat2ErgS(HorsePowEng2Vat(MEASUREMENT));
            break;
        case 98:
            key.gate = Vat2HorsePowMetr(HorsePowEng2Vat(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
