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
    scanf("%d", &key.input_choice);
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
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = MkVat2MlVat(MEASUREMENT);
            break;
        case 13:
            key.gate = MkVat2Vat(MEASUREMENT);
            break;
        case 14:
            key.gate = MkVat2kVat(MEASUREMENT);
            break;
        case 15:
            key.gate = MkVat2mVat(MEASUREMENT);
            break;
        case 16:
            key.gate = MkVat2kgSilaMvS(MEASUREMENT);
            break;
        case 17:
            key.gate = MkVat2ErgS(MEASUREMENT);
            break;
        case 18:
            key.gate = MkVat2HorsePowMetr(MEASUREMENT);
            break;
        case 19:
            key.gate = MkVat2HorsePowEng(MEASUREMENT);
            break;
        case 21:
            key.gate = MlVat2MkVat(MEASUREMENT);
            break;
        case 23:
            key.gate = MlVat2Vat(MEASUREMENT);
            break;
        case 24:
            key.gate = MlVat2kVat(MEASUREMENT);
            break;
        case 25:
            key.gate = MlVat2mVat(MEASUREMENT);
            break;
        case 26:
            key.gate = MlVat2kgSilaMvS(MEASUREMENT);
            break;
        case 27:
            key.gate = MlVat2ErgS(MEASUREMENT);
            break;
        case 28:
            key.gate = MlVat2HorsePowMetr(MEASUREMENT);
            break;
        case 29:
            key.gate = MlVat2HorsePowEng(MEASUREMENT);
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
            key.gate = kVat2MkVat(MEASUREMENT);
            break;
        case 42:
            key.gate = kVat2MlVat(MEASUREMENT);
            break;
        case 43:
            key.gate = kVat2Vat(MEASUREMENT);
            break;
        case 45:
            key.gate = kVat2mVat(MEASUREMENT);
            break;
        case 46:
            key.gate = kVat2kgSilaMvS(MEASUREMENT);
            break;
        case 47:
            key.gate = kVat2ErgS(MEASUREMENT);
            break;
        case 48:
            key.gate = kVat2HorsePowMetr(MEASUREMENT);
            break;
        case 49:
            key.gate = kVat2HorsePowEng(MEASUREMENT);
            break;
        case 51:
            key.gate = mVat2MkVat(MEASUREMENT);
            break;
        case 52:
            key.gate = mVat2MlVat(MEASUREMENT);
            break;
        case 53:
            key.gate = mVat2Vat(MEASUREMENT);
            break;
        case 54:
            key.gate = mVat2kVat(MEASUREMENT);
            break;
        case 56:
            key.gate = mVat2kgSilaMvS(MEASUREMENT);
            break;
        case 57:
            key.gate = mVat2ErgS(MEASUREMENT);
            break;
        case 58:
            key.gate = mVat2HorsePowMetr(MEASUREMENT);
            break;
        case 59:
            key.gate = mVat2HorsePowEng(MEASUREMENT);
            break;
        case 61:
            key.gate = kgSilaMvS2MkVat(MEASUREMENT);
            break;
        case 62:
            key.gate = kgSilaMvS2MlVat(MEASUREMENT);
            break;
        case 63:
            key.gate = kgSilaMvS2Vat(MEASUREMENT);
            break;
        case 64:
            key.gate = kgSilaMvS2kVat(MEASUREMENT);
            break;
        case 65:
            key.gate = kgSilaMvS2mVat(MEASUREMENT);
            break;
        case 67:
            key.gate = kgSilaMvS2ErgS(MEASUREMENT);
            break;
        case 68:
            key.gate = kgSilaMvS2HorsePowMetr(MEASUREMENT);
            break;
        case 69:
            key.gate = kgSilaMvS2HorsePowEng(MEASUREMENT);
            break;
        case 71:
            key.gate = ErgS2MkVat(MEASUREMENT);
            break;
        case 72:
            key.gate = ErgS2MlVat(MEASUREMENT);
            break;
        case 73:
            key.gate = ErgS2Vat(MEASUREMENT);
            break;
        case 74:
            key.gate = ErgS2kVat(MEASUREMENT);
            break;
        case 75:
            key.gate = ErgS2mVat(MEASUREMENT);
            break;
        case 76:
            key.gate = ErgS2kgSilaMvS(MEASUREMENT);
            break;
        case 78:
            key.gate = ErgS2HorsePowMetr(MEASUREMENT);
            break;
        case 79:
            key.gate = ErgS2HorsePowEng(MEASUREMENT);
            break;
        case 81:
            key.gate = HorsePowMetr2MkVat(MEASUREMENT);
            break;
        case 82:
            key.gate = HorsePowEng2MlVat(MEASUREMENT);
            break;
        case 83:
            key.gate = HorsePowMetr2Vat(MEASUREMENT);
            break;
        case 84:
            key.gate = HorsePowMetr2kVat(MEASUREMENT);
            break;
        case 85:
            key.gate = HorsePowMetr2mVat(MEASUREMENT);
            break;
        case 86:
            key.gate = HorsePowMetr2kgSilaMvS(MEASUREMENT);
            break;
        case 87:
            key.gate = HorsePowMetr2ErgS(MEASUREMENT);
            break;
        case 89:
            key.gate = HorsePowMetr2HorsePowEng(MEASUREMENT);
            break;
        case 91:
            key.gate = HorsePowEng2MkVat(MEASUREMENT);
            break;
        case 92:
            key.gate = HorsePowEng2MlVat(MEASUREMENT);
            break;
        case 93:
            key.gate = HorsePowEng2Vat(MEASUREMENT);
            break;
        case 94:
            key.gate = HorsePowEng2kVat(MEASUREMENT);
            break;
        case 95:
            key.gate = HorsePowEng2mVat(MEASUREMENT);
            break;
        case 96:
            key.gate = HorsePowEng2kgSilaMvS(MEASUREMENT);
            break;
        case 97:
            key.gate = HorsePowEng2ErgS(MEASUREMENT);
            break;
        case 98:
            key.gate = HorsePowEng2HorsePowMetr(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
