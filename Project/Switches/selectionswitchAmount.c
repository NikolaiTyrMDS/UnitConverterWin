#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchAmount(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Кубический километр;\n"
           "2 - Кубический метр;\n"
           "3 - Кубический дециметр;\n"
           "4 - Кубический сантиметр;\n"
           "5 - Кубический миллиметр;\n"
           "6 - Литр;\n"
           "7 - Миллилитр;\n"
           "8 - Галлон;\n"
           "9 - Баррель;\n"
           "10 - Кварта;\n \t"
           "11 - Пинта;\n \t"
           "12 - Жидкая унция; \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Кубический километр;\n"
           "2 - Кубический метр;\n"
           "3 - Кубический дециметр;\n"
           "4 - Кубический сантиметр;\n"
           "5 - Кубический миллиметр;\n"
           "6 - Литр;\n"
           "7 - Миллилитр;\n"
           "8 - Галлон;\n"
           "9 - Баррель;\n"
           "10 - Кварта;\n \t"
           "11 - Пинта;\n \t"
           "12 - Жидкая унция; \t");
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
            key.gate = squaredkilometers_TO_squaredmeters(MEASUREMENT);
            break;
        case 13:
            key.gate = squaredkilometers_TO_squareddecimeters(MEASUREMENT);
            break;
        case 14:
            key.gate = squaredkilometers_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 15:
            key.gate = squaredkilometers_TO_squaredmillimeters(double AMOUNT)(MEASUREMENT);
            break;
        case 16:
            key.gate = squaredkilometers_TO_liters(MEASUREMENT);
            break;
        case 17:
            key.gate = squaredkilometers_TO_mililiters(MEASUREMENT);
            break;
        case 18:
            key.gate = squaredkilometers_TO_gallons(MEASUREMENT);
            break;
        case 19:
            key.gate = squaredkilometers_TO_barrels(MEASUREMENT);
            break;
        case 20:
            key.gate = squaredkilometers_TO_quarts(MEASUREMENT);
            break;
        case 21:
            key.gate = squaredkilometers_TO_pints(MEASUREMENT);
            break;
        case 22:
            key.gate = squaredkilometers_TO_flozs(MEASUREMENT);
            break;
        case 23:
            key.gate = squaredmeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 24:
            key.gate = squaredmeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 25:
            key.gate = squaredmeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 26:
            key.gate = squaredmeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 27:
            key.gate = squaredmeters_TO_liters(MEASUREMENT);
            break;
        case 28:
            key.gate = squaredmeters_TO_mililiters(MEASUREMENT);
            break;
        case 29:
            key.gate = squaredmeters_TO_gallons(MEASUREMENT);
            break;
        case 30:
            key.gate = squaredmeters_TO_barrels(MEASUREMENT);
            break;
        case 31:
            key.gate = squaredmeters_TO_pints(MEASUREMENT);
            break;
        case 32:
            key.gate = squaredmeters_TO_quarts(MEASUREMENT);
            break;
        case 33:
            key.gate = squaredmeters_TO_flozs(MEASUREMENT);
            break;
        case 34:
            key.gate = squareddecimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 35:
            key.gate = squareddecimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 36:
            key.gate = squareddecimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 37:
            key.gate = squareddecimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 38:
            key.gate = squareddecimeters_TO_liters(MEASUREMENT);
            break;
        case 39:
            key.gate = squareddecimeters_TO_mililiters(MEASUREMENT);
            break;
        case 40:
            key.gate = squareddecimeters_TO_gallons(MEASUREMENT);
            break;
        case 41:
            key.gate = squareddecimeters_TO_barrels(MEASUREMENT);
            break;
        case 42:
            key.gate = squareddecimeters_TO_pints(MEASUREMENT);
            break;
        case 43:
            key.gate = squareddecimeters_TO_quarts(MEASUREMENT);
            break;
        case 44:
            key.gate = squareddecimeters_TO_flozs(MEASUREMENT);
            break;
        case 45:
            key.gate = squaredcentimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 46:
            key.gate = squaredcentimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 47:
            key.gate = squaredcentimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 48:
            key.gate = squaredcentimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 49:
            key.gate = squaredcentimeters_TO_liters(MEASUREMENT);
            break;
        case 50:
            key.gate = squaredcentimeters_TO_mililiters(MEASUREMENT);
            break;
        case 51:
            key.gate = squaredcentimeters_TO_gallons(MEASUREMENT);
            break;
        case 52:
            key.gate = squaredcentimeters_TO_barrels(MEASUREMENT);
            break;
        case 53:
            key.gate = squaredcentimeters_TO_pints(MEASUREMENT);
            break;
        case 54:
            key.gate = squaredcentimeters_TO_quarts(MEASUREMENT);
            break;
        case 55:
            key.gate = squaredcentimeters_TO_flozs(MEASUREMENT);
            break;
        case 56:
            key.gate = squaredmillimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 57:
            key.gate = squaredmillimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 58:
            key.gate = squaredmillimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 59:
            key.gate = squaredmillimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 60:
            key.gate = squaredmillimeters_TO_liters(MEASUREMENT);
            break;
        case 61:
            key.gate = squaredmillimeters_TO_mililiters(MEASUREMENT);
            break;
        case 62:
            key.gate = squaredmillimeters_TO_gallons(MEASUREMENT);
            break;
        case 63:
            key.gate = squaredmillimeters_TO_barrels(MEASUREMENT); 
            break;
        case 64:
            key.gate = squaredmillimeters_TO_pints(MEASUREMENT);
            break;
        case 65:
            key.gate = squaredmillimeters_TO_quarts(MEASUREMENT);
            break;
        case 66:
            key.gate = squaredmillimeters_TO_flozs(MEASUREMENT);
            break;
        case 67:
            key.gate = liters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 68:
            key.gate = liters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 69:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 70:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 71:
            key.gate = liters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 72:
            key.gate = liters_TO_mililiters(MEASUREMENT);
            break;
        case 73:
            key.gate = liters_TO_gallons(MEASUREMENT);
            break;
        case 74:
            key.gate = liters_TO_barrelsMEASUREMENT);
            break;
        case 75:
            key.gate = liters_TO_quarts(MEASUREMENT);
            break;
        case 76:
            key.gate = liters_TO_pints(MEASUREMENT);
            break;
        case 77:
            key.gate = liters_TO_flozs(MEASUREMENT);
            break;
        case 78:
            key.gate = mililiters_TO_liters(MEASUREMENT);
            break;
        case 79:
            key.gate = mililiters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 80:
            key.gate = mililiters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 81:
            key.gate = mililiters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 82:
            key.gate = mililiters_TO_squaredmeters(MEASUREMENT);
            break;
        case 83:
            key.gate = mililiters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 84:
            key.gate = mililiters_TO_gallons(MEASUREMENT);
            break;
        case 85:
            key.gate = mililiters_TO_barrels(MEASUREMENT);
            break;
        case 86:
            key.gate = mililiters_TO_quarts(MEASUREMENT);
            break;
        case 87:
            key.gate = mililiters_TO_pints(MEASUREMENT);
            break;
        case 88:
            key.gate = mililiters_TO_flozs(MEASUREMENT);
            break;
        case 89:
            key.gate = gallons_TO_mililiters(MEASUREMENT);
            break;
        case 90:
            key.gate = gallons_TO_liters(MEASUREMENT);
            break;
        case 91:
            key.gate = gallons_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 92:
            key.gate = gallons_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 93:
            key.gate = gallons_TO_squaredmeters(MEASUREMENT);
            break;
        case 94:
            key.gate = gallons_TO_squaredkilometers(MEASUREMENT);
            break;
        case 95:
            key.gate = gallons_TO_barrels(MEASUREMENT);
            break;
        case 96:
            key.gate = gallons_TO_quarts(MEASUREMENT);
            break;
        case 97:
            key.gate = gallons_TO_pints(MEASUREMENT);
            break;
        case 98:
            key.gate = gallons_TO_flozs(MEASUREMENT);
            break;
        case 99:
            key.gate = barrels_TO_gallons(MEASUREMENT);
            break;
        case 100:
            key.gate = barrels_TO_mililiters(MEASUREMENT);
            break;
        case 101:
            key.gate = barrels_TO_liters(MEASUREMENT);
            break;
        case 102:
            key.gate = barrels_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 103:
            key.gate = barrels_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 104:
            key.gate = barrels_TO_squareddecimeters(MEASUREMENT);
            break;
        case 105:
            key.gate = barrels_TO_squaredmeters(MEASUREMENT);
            break;
        case 106:
            key.gate = barrels_TO_squaredkilometers(MEASUREMENT);
            break;
        case 107:
            key.gate =  barrels_TO_quarts(MEASUREMENT);
            break;
        case 108:
            key.gate =  barrels_TO_pints(MEASUREMENT);
            break;
        case 109:
            key.gate =  barrels_TO_floz(MEASUREMENT);
            break;
        case 110:
            key.gate =  quarts_TO_barrels(MEASUREMENT);
            break;
        case 111:
            key.gate =  quarts_TO_gallons(MEASUREMENT);
            break;
        case 112:
            key.gate =  quarts_TO_mililiters(MEASUREMENT);
            break;
        case 113:
            key.gate =  quarts_TO_liters(MEASUREMENT);
            break;
        case 114:
            key.gate =  quarts_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 115:
            key.gate =  quarts_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 116:
            key.gate =  quarts_TO_squareddecimeters(MEASUREMENT);
            break;
        case 117:
            key.gate =  quarts_TO_squaredmeters(MEASUREMENT);
            break;
        case 118:
            key.gate =  quarts_TO_squaredkilometers(MEASUREMENT);
            break;
        case 119:
            key.gate =  quarts_TO_pints(MEASUREMENT);
            break;
        case 120:
            key.gate =  quarts_TO_flozs(MEASUREMENT);
            break;
        case 121:
            key.gate =  pints_TO_quarts(MEASUREMENT);
            break;
        case 122:
            key.gate =  pints_TO_barrels(MEASUREMENT);
            break;
        case 123:
            key.gate =  pints_TO_gallons(MEASUREMENT);
            break;
        case 124:
            key.gate =  pints_TO_mililiters(MEASUREMENT);
            break;
        case 125:
            key.gate =  pints_TO_liters(MEASUREMENT);
            break;
        case 126:
            key.gate =  pints_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 127:
            key.gate =  pints_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 128:
            key.gate =  pints_TO_squareddecimeters(MEASUREMENT);
            break;
        case 129:
            key.gate =  pints_TO_squaredmeters(MEASUREMENT);
            break;
        case 130:
            key.gate =  pints_TO_squaredkilometers(MEASUREMENT);
            break;
        case 131:
            key.gate =  flozs_TO_pints(MEASUREMENT);
            break;
        case 132:
            key.gate =  flozs_TO_quarts(MEASUREMENT);
            break;
        case 133:
            key.gate =  flozs_TO_barrels(MEASUREMENT);
            break;
        case 134:
            key.gate =  flozs_TO_gallons(MEASUREMENT);
            break;
        case 135:
            key.gate =  flozs_TO_mililiters(MEASUREMENT);
            break;
        case 136:
            key.gate =  flozs_TO_liters(MEASUREMENT);
            break;
        case 137:
            key.gate =  flozs_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 138:
            key.gate =  flozs_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 139:
            key.gate =  flozs_TO_squareddecimeters(MEASUREMENT);
            break;
        case 140:
            key.gate =  flozs_TO_squaredmeters(MEASUREMENT);
            break;
        case 141:
            key.gate =  flozs_TO_squaredkilometers(MEASUREMENT);
            break;                                                                                                                                                                            
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
