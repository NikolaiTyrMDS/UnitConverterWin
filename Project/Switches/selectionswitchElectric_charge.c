#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchElectric_charge(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Элементарный электрический заряд;\n"
           "2 - Миллиампер в час;\n"
           "3 - Микрокулон;\n"
           "4 - Милликулон;\n"
           "5 - Кулон;\n"
           "6 - Килокулон;\n"
           "7 - Мегакулон;\n"
           "8 - Фарадей;\n\t");
    scanf("%s", key.in);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Элементарный электрический заряд;\n"
           "2 - Миллиампер в час;\n"
           "3 - Микрокулон;\n"
           "4 - Милликулон;\n"
           "5 - Кулон;\n"
           "6 - Килокулон;\n"
           "7 - Мегакулон;\n"
           "8 - Фарадей;\n\t");
    scanf("%s", key.out);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice >= 8 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = KlTOmilliAmperPerHour(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 13:
            key.gate = KlTOmicroKl(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 14:
            key.gate = KlTOmilliKl(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 15:
            key.gate = ElementaryElectricChargeTOKl(MEASUREMENT);
            break;
        case 16:
            key.gate = KlTOkiloKl(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 17:
            key.gate = KlTOmegaKl(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 18:
            key.gate = KlTOFaradei(ElementaryElectricChargeTOKl(MEASUREMENT));
            break;
        case 21:
            key.gate = KlTOElementaryElectricCharge(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 23:
            key.gate = KlTOmicroKl(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 24:
            key.gate = KlTOmilliKl(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 25:
            key.gate = milliAmperPerHourTOKl(MEASUREMENT);
            break;
        case 26:
            key.gate = KlTOkiloKl(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 27:
            key.gate = KlTOmegaKl(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 28:
            key.gate = KlTOFaradei(milliAmperPerHourTOKl(MEASUREMENT));
            break;
        case 31:
            key.gate = KlTOElementaryElectricCharge(microKlTOKl(MEASUREMENT));
            break;
        case 32:
            key.gate = KlTOmilliAmperPerHour(microKlTOKl(MEASUREMENT));
            break;
        case 34:
            key.gate = KlTOmilliKl(microKlTOKl(MEASUREMENT));
            break;
        case 35:
            key.gate = microKlTOKl(MEASUREMENT);
            break;
        case 36:
            key.gate = KlTOkiloKl(microKlTOKl(MEASUREMENT));
            break;
        case 37:
            key.gate = KlTOmegaKl(microKlTOKl(MEASUREMENT));
            break;
        case 38:
            key.gate = KlTOFaradei(microKlTOKl(MEASUREMENT));
            break;
        case 41:
            key.gate = KlTOElementaryElectricCharge(milliKlTOKl(MEASUREMENT));
            break;
        case 42:
            key.gate = KlTOmilliAmperPerHour(milliKlTOKl(MEASUREMENT));
            break;
        case 43:
            key.gate = KlTOmicroKl(milliKlTOKl(MEASUREMENT));
            break;
        case 45:
            key.gate = milliKlTOKl(MEASUREMENT);
            break;
        case 46:
            key.gate = KlTOkiloKl(milliKlTOKl(MEASUREMENT));
            break;
        case 47:
            key.gate = KlTOmegaKl(milliKlTOKl(MEASUREMENT));
            break;
        case 48:
            key.gate = KlTOFaradei(milliKlTOKl(MEASUREMENT));
            break;
        case 51:
            key.gate = KlTOElementaryElectricCharge(MEASUREMENT);
            break;
        case 52:
            key.gate = KlTOmilliAmperPerHour(MEASUREMENT);
            break;
        case 53:
            key.gate = KlTOmicroKl(MEASUREMENT);
            break;
        case 54:
            key.gate = KlTOmilliKl(MEASUREMENT);
            break;
        case 56:
            key.gate = KlTOkiloKl(MEASUREMENT);
            break;
        case 57:
            key.gate = KlTOmegaKl(MEASUREMENT);
            break;
        case 58:
            key.gate = KlTOFaradei(MEASUREMENT);
            break;
        case 61:
            key.gate = KlTOElementaryElectricCharge(kiloKlTOKl(MEASUREMENT));
            break;
        case 62:
            key.gate = KlTOmilliAmperPerHour(kiloKlTOKl(MEASUREMENT));
            break;
        case 63:
            key.gate = KlTOmicroKl(kiloKlTOKl(MEASUREMENT));
            break;
        case 64:
            key.gate = KlTOmilliKl(kiloKlTOKl(MEASUREMENT));
            break;
        case 65:
            key.gate = kiloKlTOKl(MEASUREMENT);
            break;
        case 67:
            key.gate = KlTOmegaKl(kiloKlTOKl(MEASUREMENT));
            break;
        case 68:
            key.gate = KlTOFaradei(kiloKlTOKl(MEASUREMENT));
            break;
        case 71:
            key.gate = KlTOElementaryElectricCharge(megaKlTOKl(MEASUREMENT));
            break;
        case 72:
            key.gate = KlTOmilliAmperPerHour(megaKlTOKl(MEASUREMENT));
            break;
        case 73:
            key.gate = KlTOmicroKl(megaKlTOKl(MEASUREMENT));
            break;
        case 74:
            key.gate = KlTOmilliKl(megaKlTOKl(MEASUREMENT));
            break;
        case 75:
            key.gate = megaKlTOKl(MEASUREMENT);
            break;
        case 76:
            key.gate = KlTOkiloKl(megaKlTOKl(MEASUREMENT));
            break;
        case 78:
            key.gate = KlTOFaradei(megaKlTOKl(MEASUREMENT));
            break;
        case 81:
            key.gate = KlTOElementaryElectricCharge(FaradeiTOKl(MEASUREMENT));
            break;
        case 82:
            key.gate = KlTOmilliAmperPerHour(FaradeiTOKl(MEASUREMENT));
            break;
        case 83:
            key.gate = KlTOmicroKl(FaradeiTOKl(MEASUREMENT));
            break;
        case 84:
            key.gate = KlTOmilliKl(FaradeiTOKl(MEASUREMENT));
            break;
        case 85:
            key.gate = FaradeiTOKl(MEASUREMENT);
            break;
        case 86:
            key.gate = KlTOkiloKl(FaradeiTOKl(MEASUREMENT));
            break;
        case 87:
            key.gate = KlTOmegaKl(FaradeiTOKl(MEASUREMENT));
            break;
    }
    return key.gate;
}
