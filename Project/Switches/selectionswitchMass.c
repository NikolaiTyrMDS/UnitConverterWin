#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchMass(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Грамм;\n"
           "2 - Килограмм;\n"
           "3 - Центнер;\n"
           "4 - Тонна;\n"
           "5 - Карат;\n"
           "6 - Стоун;\n"
           "7 - Фунт;\n"
           "8 - Унция;\n"
           "9 - Драхма;\n"
           "10 - Гран;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Грамм;\n"
           "2 - Килограмм;\n"
           "3 - Центнер;\n"
           "4 - Тонна;\n"
           "5 - Карат;\n"
           "6 - Стоун;\n"
           "7 - Фунт;\n"
           "8 - Унция;\n"
           "9 - Драхма;\n\t"
           "10 - Гран;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    if(input_choice < 10 && output_choice < 10)
		key.id = key.input_choice * 10 + key.output_choice;
	if(input_choice == 10 && output_choice <= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	if(input_choice < 10 && output_choice == 10)
		key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Grams_TO_Kilograms(MEASUREMENT);
            break;
        case 13:
            key.gate = Grams_TO_Quintals(MEASUREMENT);
            break;
        case 14:
            key.gate = Grams_TO_Tonnes(MEASUREMENT);
            break;
        case 15:
            key.gate = Grams_TO_Carats(MEASUREMENT);
            break;
        case 16:
            key.gate = Grams_TO_Stones(MEASUREMENT);
            break;
        case 17:
            key.gate = Grams_TO_Funts(MEASUREMENT);
            break;
        case 18:
            key.gate = Grams_TO_Ounces(MEASUREMENT);
            break;
        case 19:
            key.gate = Grams_TO_Drachmas(MEASUREMENT);
            break;
        case 20:
            key.gate = Grams_TO_Grains(MEASUREMENT);
            break;
        case 21:
            key.gate = Kilograms_TO_Grams(MEASUREMENT);
            break;
        case 22:
            key.gate = Kilograms_TO_Quintals(MEASUREMENT);
            break;
        case 23:
            key.gate = Kilograms_TO_Tonnes(MEASUREMENT);
            break;
        case 24:
            key.gate = Kilograms_TO_Carats(MEASUREMENT);
            break;
        case 25:
            key.gate = Kilograms_TO_Stones(MEASUREMENT);
            break;
        case 26:
            key.gate = Kilograms_TO_Funts(MEASUREMENT);
            break;
        case 27:
            key.gate = Kilograms_TO_Ounces(MEASUREMENT);
            break;
        case 28:
            key.gate = Kilograms_TO_Drachmas(MEASUREMENT);
            break;
        case 29:
            key.gate = Kilograms_TO_Grains(MEASUREMENT);
            break;
        case 30:
            key.gate = Quintals_TO_Kilograms(MEASUREMENT);
            break;
        case 31:
            key.gate = Quintals_TO_Grams(MEASUREMENT);
            break;
        case 32:
            key.gate = Quintals_TO_Tonnes(MEASUREMENT);
            break;
        case 33:
            key.gate = Quintals_TO_Carats(MEASUREMENT);
            break;
        case 34:
            key.gate = Quintals_TO_Stones(MEASUREMENT);
            break;
        case 35:
            key.gate = Quintals_TO_Funts(MEASUREMENT);
            break;
        case 36:
            key.gate = Quintals_TO_Ounces(MEASUREMENT);
            break;
        case 37:
            key.gate = Quintals_TO_Drachmas(MEASUREMENT);
            break;
        case 38:
            key.gate = Quintals_TO_Grains(MEASUREMENT);
            break;
        case 39:
            key.gate = Tonnes_TO_Quintals(MEASUREMENT);
            break;
        case 40:
            key.gate = Tonnes_TO_Kilograms(MEASUREMENT);
            break;
        case 41:
            key.gate = Tonnes_TO_Grams(MEASUREMENT);
            break;
        case 42:
            key.gate = Tonnes_TO_Carat(MEASUREMENT);
            break;
        case 43:
            key.gate = Tonnes_TO_Stone(MEASUREMENT);
            break;
        case 44:
            key.gate = Tonnes_TO_Funts(MEASUREMENT);
            break;
        case 45:
            key.gate = Tonnes_TO_Ounces(MEASUREMENT);
            break;
        case 46:
            key.gate = Tonnes_TO_Drachmas(MEASUREMENT);
            break;
        case 47:
            key.gate = Tonnes_TO_Grains(MEASUREMENT);
            break;
        case 48:
            key.gate = Carats_TO_Tonnes(MEASUREMENT);
            break;
        case 49:
            key.gate = Carats_TO_Quintals(MEASUREMENT);
            break;
        case 50:
            key.gate = Carats_TO_Kilograms(MEASUREMENT);
            break;
        case 51:
            key.gate = Carats_TO_Grams(MEASUREMENT);
            break;
        case 52:
            key.gate = Carats_TO_Stones(MEASUREMENT);
            break;
        case 53:
            key.gate = Carats_TO_Funts(MEASUREMENT);
            break;
        case 54:
            key.gate = Carats_TO_Ounces(MEASUREMENT);
            break;
        case 55:
            key.gate = Carats_TO_Drachmas(MEASUREMENT);
            break;
        case 56:
            key.gate = Carats_TO_Grains(MEASUREMENT);
            break;
        case 57:
            key.gate = Stones_TO_Carats(MEASUREMENT);
            break;
        case 58:
            key.gate = Stones_TO_Tonnes(MEASUREMENT);
            break;
        case 59:
            key.gate = Stones_TO_Quintals(MEASUREMENT);
            break;
        case 60:
            key.gate = Stones_TO_Kilograms(MEASUREMENT);
            break;
        case 61:
            key.gate = Stones_TO_Grams(MEASUREMENT);
            break;
        case 62:
            key.gate = Stones_TO_Funts(MEASUREMENT);
            break;
        case 63:
            key.gate = Stones_TO_Ounces(MEASUREMENT);
            break;
        case 64:
            key.gate = Stones_TO_Drachmas(MEASUREMENT);
            break;
        case 65:
            key.gate = Stones_TO_Grains(MEASUREMENT);
            break;
        case 66:
            key.gate = Funts_TO_Stones(MEASUREMENT);
            break;
        case 67:
            key.gate = Funts_TO_Carats(MEASUREMENT);
            break;
        case 68:
            key.gate = Funts_TO_Tonnes(MEASUREMENT);
            break;
        case 69:
            key.gate = Funts_TO_Quintals(MEASUREMENT);
            break;
        case 70:
            key.gate = Funts_TO_Kilograms(MEASUREMENT);
            break;
        case 71:
            key.gate = Funts_TO_Grams(MEASUREMENT);
            break;
        case 72:
            key.gate = Funts_TO_Ounces(MEASUREMENT);
            break;
        case 73:
            key.gate = Funts_TO_Drachmas(MEASUREMENT);
            break;
        case 74:
            key.gate = Funts_TO_Grains(MEASUREMENT);
            break;
        case 75:
            key.gate = Ounces_TO_Funts(MEASUREMENT);
            break;
        case 76:
            key.gate = Ounces_TO_Stones(MEASUREMENT);
            break;
        case 77:
            key.gate = Ounces_TO_Carats(MEASUREMENT);
            break;
        case 78:
            key.gate = Ounces_TO_Tonnes(MEASUREMENT);
            break;
        case 79:
            key.gate = Ounces_TO_Quintals(MEASUREMENT);
            break;
        case 80:
            key.gate = Ounces_TO_Kilograms(MEASUREMENT);
            break;
        case 81:
            key.gate = Ounces_TO_Grams(MEASUREMENT);
            break;
        case 82:
            key.gate = Ounces_TO_Drachmas(MEASUREMENT);
            break;
        case 83:
            key.gate = Ounces_TO_Grains(MEASUREMENT);
            break;
        case 84:
            key.gate = Drachmas_TO_Ounces(MEASUREMENT);
            break;
        case 85:
            key.gate = Drachmas_TO_Funts(MEASUREMENT);
            break;
        case 86:
            key.gate = Drachmas_TO_Stones(MEASUREMENT);
            break;
        case 87:
            key.gate = Drachmas_TO_Carats(MEASUREMENT);
            break;
        case 88:
            key.gate = Drachmas_TO_Tonnes(MEASUREMENT);
            break;
        case 89:
            key.gate = Drachmas_TO_Quintals(MEASUREMENT);
            break;
        case 90:
            key.gate = Drachmas_TO_Kilograms(MEASUREMENT);
            break;
        case 91:
            key.gate = Drachmas_TO_Grams(MEASUREMENT);
            break;
        case 92:
            key.gate = Drachmas_TO_Grains(MEASUREMENT);
            break;
        case 93:
            key.gate = Grains_TO_Drachma(MEASUREMENT);
            break;
        case 94:
            key.gate = Grains_TO_Ounce(MEASUREMENT);
            break;
        case 95:
            key.gate = Grains_TO_Funts(MEASUREMENT);
            break;
        case 96:
            key.gate = Grains_TO_Stones(MEASUREMENT);
            break;
        case 97:
            key.gate = Grains_TO_Carats(MEASUREMENT);
            break;
        case 98:
            key.gate = Grains_TO_Tonnes(MEASUREMENT);
            break;
        case 99:
            key.gate = Grains_TO_Quintals(MEASUREMENT);
            break;
        case 100:
            key.gate = Grains_TO_Kilograms(MEASUREMENT);
            break;
        case 101:
            key.gate = Grains_TO_Grams(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
