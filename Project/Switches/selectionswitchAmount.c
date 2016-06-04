#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchAmount(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Кубические километры;\n"
           "2 - Кубические метры;\n"
           "3 - Кубические дециметры;\n"
           "4 - Кубические сантиметры;\n"
           "5 - Кубические миллиметры;\n"
           "6 - Литры;\n"
           "7 - Миллилитры;\n"
           "8 - Галлоны;\n"
           "9 - Баррели;\n"
           "10 - Кварты;\n "
           "11 - Пинты;\n "
           "12 - Жидкие унции; \n\t");
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 12 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        key.input_choice = parsing_id(key.in);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Кубические километры;\n"
           "2 - Кубические метры;\n"
           "3 - Кубические дециметры;\n"
           "4 - Кубические сантиметры;\n"
           "5 - Кубические миллиметры;\n"
           "6 - Литры;\n"
           "7 - Миллилитры;\n"
           "8 - Галлоны;\n"
           "9 - Баррели;\n"
           "10 - Кварты;\n "
           "11 - Пинты;\n "
           "12 - Жидкие унции; \n\t");
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 12 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        key.output_choice = parsing_id(key.out);
    }

    if(key.input_choice < 10 && key.output_choice < 10)
		key.id = key.input_choice * 10 + key.output_choice;
	if(key.input_choice == 10 && key.output_choice <= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	if(key.input_choice < 10 && key.output_choice == 10)
		key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
        // Кубический километр
        case 12:
            key.gate = squaredkilometers_TO_squaredmeters(MEASUREMENT);
            break;
        case 13:
            key.gate = squaredmeters_TO_squareddecimeters(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 14:
            key.gate = squaredmeters_TO_squaredcentimeters(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 15:
            key.gate = squaredmeters_TO_squaredmillimeters(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 16:
            key.gate = squaredmeters_TO_liters(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 17:
            key.gate = squaredmeters_TO_mililiters(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 18:
            key.gate = squaredmeters_TO_gallons(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 19:
            key.gate = squaredmeters_TO_barrels(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 110:
            key.gate = squaredmeters_TO_quarts(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 111:
            key.gate = squaredmeters_TO_pints(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        case 112:
            key.gate = squaredmeters_TO_flozs(squaredkilometers_TO_squaredmeters(MEASUREMENT));
            break;
        // Кубический метр
        case 21:
            key.gate = squaredmeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 23:
            key.gate = squaredmeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 24:
            key.gate = squaredmeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 25:
            key.gate = squaredmeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 26:
            key.gate = squaredmeters_TO_liters(MEASUREMENT);
            break;
        case 27:
            key.gate = squaredmeters_TO_mililiters(MEASUREMENT);
            break;
        case 28:
            key.gate = squaredmeters_TO_gallons(MEASUREMENT);
            break;
        case 29:
            key.gate = squaredmeters_TO_barrels(MEASUREMENT);
            break;
        case 210:
            key.gate = squaredmeters_TO_quarts(MEASUREMENT);
            break;
        case 211:
            key.gate = squaredmeters_TO_pints(MEASUREMENT);
            break;
        case 212:
            key.gate = squaredmeters_TO_flozs(MEASUREMENT);
            break;
        // Кубический дециметр
        case 32:
            key.gate = squareddecimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 31:
            key.gate = squaredmeters_TO_squaredkilometers(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 34:
            key.gate = squaredmeters_TO_squaredcentimeters(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 35:
            key.gate = squaredmeters_TO_squaredmillimeters(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 36:
            key.gate = squaredmeters_TO_liters(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 37:
            key.gate = squaredmeters_TO_mililiters(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 38:
            key.gate = squaredmeters_TO_gallons(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 39:
            key.gate = squaredmeters_TO_barrels(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 310:
            key.gate = squaredmeters_TO_quarts(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 311:
            key.gate = squaredmeters_TO_pints(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 312:
            key.gate = squaredmeters_TO_flozs(squareddecimeters_TO_squaredmeters(MEASUREMENT));
            break;
         // Кубический сантиметр
        case 43:
            key.gate = squaredmeters_TO_squareddecimeters(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 42:
            key.gate = squaredcentimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 41:
            key.gate = squaredmeters_TO_squaredkilometers(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 45:
            key.gate = squaredmeters_TO_squaredmillimeters(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 46:
            key.gate = squaredmeters_TO_liters(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 47:
            key.gate = squaredmeters_TO_mililiters(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 48:
            key.gate = squaredmeters_TO_gallons(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 49:
            key.gate = squaredmeters_TO_barrels(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 410:
            key.gate = squaredmeters_TO_quarts(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 411:
            key.gate = squaredmeters_TO_pints(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 412:
            key.gate = squaredmeters_TO_flozs(squaredcentimeters_TO_squaredmeters(MEASUREMENT));
            break;
         // Кубический миллиметр
        case 54:
            key.gate = squaredmeters_TO_squaredcentimeters(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 53:
            key.gate = squaredmeters_TO_squareddecimeters(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 52:
            key.gate = squaredmillimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 51:
            key.gate = squaredmeters_TO_squaredkilometers(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 56:
            key.gate = squaredmeters_TO_liters(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 57:
            key.gate = squaredmeters_TO_mililiters(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 58:
            key.gate = squaredmeters_TO_gallons(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 59:
            key.gate = squaredmeters_TO_barrels(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 510:
            key.gate = squaredmeters_TO_quarts(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 511:
            key.gate = squaredmeters_TO_pints(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
        case 512:
            key.gate = squaredmeters_TO_flozs(squaredmillimeters_TO_squaredmeters(MEASUREMENT));
            break;
         // Литр
        case 65:
            key.gate = squaredmeters_TO_squaredmillimeters(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 64:
            key.gate = squaredmeters_TO_squaredcentimeters(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 63:
            key.gate = squaredmeters_TO_squareddecimeters(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 62:
            key.gate = liters_TO_squaredmeters(MEASUREMENT);
            break;
        case 61:
            key.gate = squaredmeters_TO_squaredkilometers(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 67:
            key.gate = squaredmeters_TO_mililiters(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 68:
            key.gate = squaredmeters_TO_gallons(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 69:
            key.gate = squaredmeters_TO_barrels(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 610:
            key.gate = squaredmeters_TO_quarts(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 611:
            key.gate = squaredmeters_TO_pints(liters_TO_squaredmeters(MEASUREMENT));
            break;
        case 612:
            key.gate = squaredmeters_TO_flozs(liters_TO_squaredmeters(MEASUREMENT));
            break;
         // Миллилитр
        case 76:
            key.gate = squaredmeters_TO_liters(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 75:
            key.gate = squaredmeters_TO_squaredmillimeters(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 74:
            key.gate = squaredmeters_TO_squaredcentimeters(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 73:
            key.gate = squaredmeters_TO_squareddecimeters(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 72:
            key.gate = mililiters_TO_squaredmeters(MEASUREMENT);
            break;
        case 71:
            key.gate = squaredmeters_TO_squaredkilometers(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 78:
            key.gate = squaredmeters_TO_gallons(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 79:
            key.gate = squaredmeters_TO_barrels(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 710:
            key.gate = squaredmeters_TO_quarts(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 711:
            key.gate = squaredmeters_TO_pints(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        case 712:
            key.gate = squaredmeters_TO_flozs(mililiters_TO_squaredmeters(MEASUREMENT));
            break;
        // Галлон
        case 87:
            key.gate = squaredmeters_TO_mililiters(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 86:
            key.gate = squaredmeters_TO_liters(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 85:
            key.gate = squaredmeters_TO_squaredmillimeters(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 84:
            key.gate = squaredmeters_TO_squaredcentimeters(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 83:
            key.gate = squaredmeters_TO_squareddecimeters(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 82:
            key.gate = gallons_TO_squaredmeters(MEASUREMENT);
            break;
        case 81:
            key.gate = squaredmeters_TO_squaredkilometers(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 89:
            key.gate = squaredmeters_TO_barrels(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 810:
            key.gate = squaredmeters_TO_quarts(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 811:
            key.gate = squaredmeters_TO_pints(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        case 812:
            key.gate = squaredmeters_TO_flozs(gallons_TO_squaredmeters(MEASUREMENT));
            break;
        //Баррель
        case 98:
            key.gate = squaredmeters_TO_gallons(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 97:
            key.gate = squaredmeters_TO_mililiters(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 96:
            key.gate = squaredmeters_TO_liters(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 95:
            key.gate = squaredmeters_TO_squaredmillimeters(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 94:
            key.gate = squaredmeters_TO_squaredcentimeters(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 93:
            key.gate = squaredmeters_TO_squareddecimeters(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 92:
            key.gate = barrels_TO_squaredmeters(MEASUREMENT);
            break;
        case 91:
            key.gate = squaredmeters_TO_squaredkilometers(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 910:
            key.gate = squaredmeters_TO_quarts(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 911:
            key.gate = squaredmeters_TO_pints(barrels_TO_squaredmeters(MEASUREMENT));
            break;
        case 912:
            key.gate = squaredmeters_TO_flozs(barrels_TO_squaredmeters(MEASUREMENT));
            break;
         // Êâàðòà
        case 1009:
            key.gate = squaredmeters_TO_barrels(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1008:
            key.gate = squaredmeters_TO_gallons(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1007:
            key.gate = squaredmeters_TO_mililiters(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1006:
            key.gate = squaredmeters_TO_liters(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1005:
            key.gate = squaredmeters_TO_squaredmillimeters(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1004:
            key.gate = squaredmeters_TO_squaredcentimeters(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1003:
            key.gate = squaredmeters_TO_squareddecimeters(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1002:
            key.gate = quarts_TO_squaredmeters(MEASUREMENT);
            break;
        case 1001:
            key.gate = squaredmeters_TO_squaredkilometers(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1011:
            key.gate = squaredmeters_TO_pints(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        case 1012:
            key.gate = squaredmeters_TO_flozs(quarts_TO_squaredmeters(MEASUREMENT));
            break;
        // Пинта
        case 1110:
            key.gate = squaredmeters_TO_quarts(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1109:
            key.gate = squaredmeters_TO_barrels(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1108:
            key.gate = squaredmeters_TO_gallons(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1107:
            key.gate = squaredmeters_TO_mililiters(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1106:
            key.gate = squaredmeters_TO_liters(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1105:
            key.gate = squaredmeters_TO_squaredmillimeters(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1104:
            key.gate = squaredmeters_TO_squaredcentimeters(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1103:
            key.gate = squaredmeters_TO_squareddecimeters(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1102:
            key.gate = pints_TO_squaredmeters(MEASUREMENT);
            break;
        case 1101:
            key.gate = squaredmeters_TO_squaredkilometers(pints_TO_squaredmeters(MEASUREMENT));
            break;
        case 1112:
            key.gate = squaredmeters_TO_flozs(pints_TO_squaredmeters(MEASUREMENT));
            break;
         // Жидкая унция
        case 1211:
            key.gate = squaredmeters_TO_pints(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1210:
            key.gate = squaredmeters_TO_quarts(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1209:
            key.gate = squaredmeters_TO_barrels(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1208:
            key.gate = squaredmeters_TO_gallons(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1207:
            key.gate = squaredmeters_TO_mililiters(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1206:
            key.gate = squaredmeters_TO_liters(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1205:
            key.gate = squaredmeters_TO_squaredmillimeters(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1204:
            key.gate = squaredmeters_TO_squaredcentimeters(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1203:
            key.gate = squaredmeters_TO_squareddecimeters(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        case 1202:
            key.gate = flozs_TO_squaredmeters(MEASUREMENT);
            break;
        case 1201:
            key.gate = squaredmeters_TO_squaredkilometers(flozs_TO_squaredmeters(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
