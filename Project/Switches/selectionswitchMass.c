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
    scanf("%s", key.in);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%s", key.in);
        key.input_choice = parsing_id(key.in);
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
           "9 - Драхма;\n"
           "10 - Гран;\n \t");
    scanf("%s", key.out);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.output_choice > 10 || key.output_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%s", key.out);
        key.output_choice = parsing_id(key.out);
    }

    if(key.input_choice < 10 && key.output_choice < 10)
		key.id = key.input_choice * 10 + key.output_choice;
	if(key.input_choice == 10 && key.output_choice <= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	if(key.input_choice < 10 && key.output_choice == 10)
		key.id = key.input_choice * 100 + key.output_choice;


	switch(key.id) {
    //Грамм
        case 12:
            key.gate = Grams_TO_Kilograms(MEASUREMENT);
            break;
        case 13:
            key.gate = Kilograms_TO_Quintals(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 14:
            key.gate = Kilograms_TO_Tonnes(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 15:
            key.gate = Kilograms_TO_Carats(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 16:
            key.gate = Kilograms_TO_Stones(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 17:
            key.gate = Kilograms_TO_Funts(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 18:
            key.gate = Kilograms_TO_Ounces(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 19:
            key.gate = Kilograms_TO_Drachmas(Grams_TO_Kilograms(MEASUREMENT));
            break;
        case 110:
            key.gate = Kilograms_TO_Grains(Grams_TO_Kilograms(MEASUREMENT));
            break;
        //Килограмм
        case 21:
            key.gate = Kilograms_TO_Grams(MEASUREMENT);
            break;
        case 23:
            key.gate = Kilograms_TO_Quintals(MEASUREMENT);
            break;
        case 24:
            key.gate = Kilograms_TO_Tonnes(MEASUREMENT);
            break;
        case 25:
            key.gate = Kilograms_TO_Carats(MEASUREMENT);
            break;
        case 26:
            key.gate = Kilograms_TO_Stones(MEASUREMENT);
            break;
        case 27:
            key.gate = Kilograms_TO_Funts(MEASUREMENT);
            break;
        case 28:
            key.gate = Kilograms_TO_Ounces(MEASUREMENT);
            break;
        case 29:
            key.gate = Kilograms_TO_Drachmas(MEASUREMENT);
            break;
        case 210:
            key.gate = Kilograms_TO_Grains(MEASUREMENT);
            break;
        //Центнер
        case 32:
            key.gate = Quintals_TO_Kilograms(MEASUREMENT);
            break;
        case 31:
            key.gate = Kilograms_TO_Grams(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 34:
            key.gate = Kilograms_TO_Tonnes(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 35:
            key.gate = Kilograms_TO_Carats(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 36:
            key.gate = Kilograms_TO_Stones(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 37:
            key.gate = Kilograms_TO_Funts(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 38:
            key.gate = Kilograms_TO_Ounces(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 39:
            key.gate = Kilograms_TO_Drachmas(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        case 310:
            key.gate = Kilograms_TO_Grains(Quintals_TO_Kilograms(MEASUREMENT));
            break;
        //Тонна
        case 43:
            key.gate = Kilograms_TO_Quintals(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 42:
            key.gate = Tonnes_TO_Kilograms(MEASUREMENT);
            break;
        case 41:
            key.gate = Kilograms_TO_Grams(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 45:
            key.gate = Kilograms_TO_Carats(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 46:
            key.gate = Kilograms_TO_Stones(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 47:
            key.gate = Kilograms_TO_Funts(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 48:
            key.gate = Kilograms_TO_Ounces(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 49:
            key.gate = Kilograms_TO_Drachmas(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        case 410:
            key.gate = Kilograms_TO_Grains(Tonnes_TO_Kilograms(MEASUREMENT));
            break;
        //Карат
        case 54:
            key.gate = Kilograms_TO_Tonnes(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 53:
            key.gate = Kilograms_TO_Quintals(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 52:
            key.gate = Carats_TO_Kilograms(MEASUREMENT);
            break;
        case 51:
            key.gate = Kilograms_TO_Grams(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 56:
            key.gate = Kilograms_TO_Stones(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 57:
            key.gate = Kilograms_TO_Funts(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 58:
            key.gate = Kilograms_TO_Ounces(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 59:
            key.gate = Kilograms_TO_Drachmas(Carats_TO_Kilograms(MEASUREMENT));
            break;
        case 510:
            key.gate = Kilograms_TO_Grains(Carats_TO_Kilograms(MEASUREMENT));
            break;
        //Стоун
        case 65:
            key.gate = Kilograms_TO_Carats(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 64:
            key.gate = Kilograms_TO_Tonnes(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 63:
            key.gate = Kilograms_TO_Quintals(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 62:
            key.gate = Stones_TO_Kilograms(MEASUREMENT);
            break;
        case 61:
            key.gate = Kilograms_TO_Grams(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 67:
            key.gate = Kilograms_TO_Funts(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 68:
            key.gate = Kilograms_TO_Ounces(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 69:
            key.gate = Kilograms_TO_Drachmas(Stones_TO_Kilograms(MEASUREMENT));
            break;
        case 610:
            key.gate = Kilograms_TO_Grains(Stones_TO_Kilograms(MEASUREMENT));
            break;
        //Фунт
        case 76:
            key.gate = Kilograms_TO_Stones(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 75:
            key.gate = Kilograms_TO_Carats(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 74:
            key.gate = Kilograms_TO_Tonnes(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 73:
            key.gate = Kilograms_TO_Quintals(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 72:
            key.gate = Funts_TO_Kilograms(MEASUREMENT);
            break;
        case 71:
            key.gate = Kilograms_TO_Grams(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 78:
            key.gate = Kilograms_TO_Ounces(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 79:
            key.gate = Kilograms_TO_Drachmas(Funts_TO_Kilograms(MEASUREMENT));
            break;
        case 710:
            key.gate = Kilograms_TO_Grains(Funts_TO_Kilograms(MEASUREMENT));
            break;
        //Унция
        case 87:
            key.gate = Kilograms_TO_Funts(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 86:
            key.gate = Kilograms_TO_Stones(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 85:
            key.gate = Kilograms_TO_Carats(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 84:
            key.gate = Kilograms_TO_Tonnes(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 83:
            key.gate = Kilograms_TO_Quintals(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 82:
            key.gate = Ounces_TO_Kilograms(MEASUREMENT);
            break;
        case 81:
            key.gate = Kilograms_TO_Grams(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 89:
            key.gate = Kilograms_TO_Drachmas(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        case 810:
            key.gate = Kilograms_TO_Grains(Ounces_TO_Kilograms(MEASUREMENT));
            break;
        //Драхма
        case 98:
            key.gate = Kilograms_TO_Ounces(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 97:
            key.gate = Kilograms_TO_Funts(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 96:
            key.gate = Kilograms_TO_Stones(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 95:
            key.gate = Kilograms_TO_Carats(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 94:
            key.gate = Kilograms_TO_Tonnes(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 93:
            key.gate = Kilograms_TO_Quintals(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 92:
            key.gate = Drachmas_TO_Kilograms(MEASUREMENT);
            break;
        case 91:
            key.gate = Kilograms_TO_Grams(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        case 910:
            key.gate = Kilograms_TO_Grains(Drachmas_TO_Kilograms(MEASUREMENT));
            break;
        //Гран
        case 1009:
            key.gate = Kilograms_TO_Drachmas(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1008:
            key.gate = Kilograms_TO_Ounces(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1007:
            key.gate = Kilograms_TO_Funts(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1006:
            key.gate = Kilograms_TO_Stones(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1005:
            key.gate = Kilograms_TO_Carats(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1004:
            key.gate = Kilograms_TO_Tonnes(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1003:
            key.gate = Kilograms_TO_Quintals(Grains_TO_Kilograms(MEASUREMENT));
            break;
        case 1002:
            key.gate = Grains_TO_Kilograms(MEASUREMENT);
            break;
        case 1001:
            key.gate = Kilograms_TO_Grams(Grains_TO_Kilograms(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
