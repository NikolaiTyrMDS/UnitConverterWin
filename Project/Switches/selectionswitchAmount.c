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
	if(input_choice >= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	if(input_choice < 10 && output_choice >= 10)
		key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
        // Кубический километр
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
            key.gate = squaredkilometers_TO_squaredmillimeters(MEASUREMENT);
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
        case 110:
            key.gate = squaredkilometers_TO_quarts(MEASUREMENT);
            break;
        case 111:
            key.gate = squaredkilometers_TO_pints(MEASUREMENT);
            break;
        case 112:
            key.gate = squaredkilometers_TO_flozs(MEASUREMENT);
            break;
        // кубические метры
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
            key.gate = squareddecimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 34:
            key.gate = squareddecimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 35:
            key.gate = squareddecimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 36:
            key.gate = squareddecimeters_TO_liters(MEASUREMENT);
            break;
        case 37:
            key.gate = squareddecimeters_TO_mililiters(MEASUREMENT);
            break;
        case 38:
            key.gate = squareddecimeters_TO_gallons(MEASUREMENT);
            break;
        case 39:
            key.gate = squareddecimeters_TO_barrels(MEASUREMENT);
            break;
        case 310:
            key.gate = squareddecimeters_TO_pints(MEASUREMENT);
            break;
        case 311:
            key.gate = squareddecimeters_TO_quarts(MEASUREMENT);
            break;
        case 312:
            key.gate = squareddecimeters_TO_flozs(MEASUREMENT);
            break;
         // квадратный сантиметр   
        case 43:
            key.gate = squaredcentimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 42:
            key.gate = squaredcentimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 41:
            key.gate = squaredcentimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 45:
            key.gate = squaredcentimeters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 46:
            key.gate = squaredcentimeters_TO_liters(MEASUREMENT);
            break;
        case 47:
            key.gate = squaredcentimeters_TO_mililiters(MEASUREMENT);
            break;
        case 48:
            key.gate = squaredcentimeters_TO_gallons(MEASUREMENT);
            break;
        case 49:
            key.gate = squaredcentimeters_TO_barrels(MEASUREMENT);
            break;
        case 410:
            key.gate = squaredcentimeters_TO_quarts(MEASUREMENT);
            break;
        case 411:
            key.gate = squaredcentimeters_TO_pints(MEASUREMENT);
            break;
        case 412:
            key.gate = squaredcentimeters_TO_flozs(MEASUREMENT);
            break;
         // Кубический миллиметр   
        case 54:
            key.gate = squaredmillimeters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 53:
            key.gate = squaredmillimeters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 52:
            key.gate = squaredmillimeters_TO_squaredmeters(MEASUREMENT);
            break;
        case 51:
            key.gate = squaredmillimeters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 56:
            key.gate = squaredmillimeters_TO_liters(MEASUREMENT);
            break;
        case 57:
            key.gate = squaredmillimeters_TO_mililiters(MEASUREMENT);
            break;
        case 58:
            key.gate = squaredmillimeters_TO_gallons(MEASUREMENT);
            break;
        case 59:
            key.gate = squaredmillimeters_TO_barrels(MEASUREMENT); 
            break;
        case 510:
            key.gate = squaredmillimeters_TO_quarts(MEASUREMENT);
            break;
        case 511:
            key.gate = squaredmillimeters_TO_pints(MEASUREMENT);
            break;
        case 512:
            key.gate = squaredmillimeters_TO_flozs(MEASUREMENT);
            break;
         // Литры   
        case 65:
            key.gate = liters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 64:
            key.gate = liters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 63:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 62:
            key.gate = liters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 61:
            key.gate = liters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 67:
            key.gate = liters_TO_mililiters(MEASUREMENT);
            break;
        case 68:
            key.gate = liters_TO_gallons(MEASUREMENT);
            break;
        case 69:
            key.gate = liters_TO_barrelsMEASUREMENT);
            break;
        case 610:
            key.gate = liters_TO_quarts(MEASUREMENT);
            break;
        case 611:
            key.gate = liters_TO_pints(MEASUREMENT);
            break;
        case 612:
            key.gate = liters_TO_flozs(MEASUREMENT);
            break;
         // Миллилитр   
        case 76:
            key.gate = mililiters_TO_liters(MEASUREMENT);
            break;
        case 75:
            key.gate = mililiters_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 74:
            key.gate = mililiters_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 73:
            key.gate = mililiters_TO_squareddecimeters(MEASUREMENT);
            break;
        case 72:
            key.gate = mililiters_TO_squaredmeters(MEASUREMENT);
            break;
        case 71:
            key.gate = mililiters_TO_squaredkilometers(MEASUREMENT);
            break;
        case 78:
            key.gate = mililiters_TO_gallons(MEASUREMENT);
            break;
        case 79:
            key.gate = mililiters_TO_barrels(MEASUREMENT);
            break;
        case 710:
            key.gate = mililiters_TO_quarts(MEASUREMENT);
            break;
        case 711:
            key.gate = mililiters_TO_pints(MEASUREMENT);
            break;
        case 712:
            key.gate = mililiters_TO_flozs(MEASUREMENT);
            break;
        // Галлон    
        case 87:
            key.gate = gallons_TO_mililiters(MEASUREMENT);
            break;
        case 86:
            key.gate = gallons_TO_liters(MEASUREMENT);
            break;
        case 85:
            key.gate = gallons_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 84:
            key.gate = gallons_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 83:
            key.gate = gallons_TO_squareddecimeters(MEASUREMENT);
            break;
        case 82:
            key.gate = gallons_TO_squaredmeters(MEASUREMENT);  
            break;
        case 81:
            key.gate = gallons_TO_squaredkilometers(MEASUREMENT);
            break;
        case 89:
            key.gate = gallons_TO_barrels(MEASUREMENT);
            break;
        case 810:
            key.gate = gallons_TO_quarts(MEASUREMENT);
            break;
        case 811:
            key.gate = gallons_TO_pints flozs(MEASUREMENT);
            break;
        case 812:
            key.gate = gallons_TO_flozs(MEASUREMENT);
            break;
        
        //Баррель
        case 98:
            key.gate = barrels_TO_gallons(MEASUREMENT);
            break;
        case 97:
            key.gate = barrels_TO_mililiters(MEASUREMENT);
            break;
        case 96:
            key.gate = barrels_TO_liters(MEASUREMENT);
            break;
        case 95:
            key.gate = barrels_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 94:
            key.gate = barrels_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 93:
            key.gate = barrels_TO_squareddecimeters(MEASUREMENT);
            break;
        case 92:
            key.gate = barrels_TO_squaredmeters(MEASUREMENT);
            break;
        case 91:
            key.gate = barrels_TO_squaredkilometers(MEASUREMENT);
            break;
        case 910:
            key.gate =  barrels_TO_quarts(MEASUREMENT);
            break;
        case 911:
            key.gate =  barrels_TO_pints(MEASUREMENT);
            break;
        case 912:
            key.gate =  barrels_TO_floz(MEASUREMENT);
            break;
         // Кварта    
        case 1009:
            key.gate =  quarts_TO_barrels(MEASUREMENT);
            break;
        case 1008:
            key.gate =  quarts_TO_gallons(MEASUREMENT);
            break;
        case 1007:
            key.gate =  quarts_TO_mililiters(MEASUREMENT);
            break;
        case 1006:
            key.gate =  quarts_TO_liters(MEASUREMENT);
            break;
        case 1005:
            key.gate =  quarts_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1004:
            key.gate =  quarts_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1003:
            key.gate =  quarts_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1002:
            key.gate =  quarts_TO_squaredmeters(MEASUREMENT);
            break;
        case 1001:
            key.gate =  quarts_TO_squaredkilometers(MEASUREMENT);
            break;
        case 1011:
            key.gate =  quarts_TO_pints(MEASUREMENT);
            break;
        case 1012:
            key.gate =  quarts_TO_flozs(MEASUREMENT);
            break;
        // Пинта   
        case 1110:
            key.gate =  pints_TO_quarts(MEASUREMENT);
            break;
        case 1109:
            key.gate =  pints_TO_barrels(MEASUREMENT);
            break;
        case 1108:
            key.gate =  pints_TO_gallons(MEASUREMENT);
            break;
        case 1107:
            key.gate =  pints_TO_mililiters(MEASUREMENT);
            break;
        case 1106:
            key.gate =  pints_TO_liters(MEASUREMENT);
            break;
        case 1105:
            key.gate =  pints_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1104:
            key.gate =  pints_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1103:
            key.gate =  pints_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1102:
            key.gate =  pints_TO_squaredmeters(MEASUREMENT);
            break;
        case 1101:
            key.gate =  pints_TO_squaredkilometers(MEASUREMENT);
            break;
        case 1112:
            key.gate =  pints_TO_flozs(MEASUREMENT);
            break;   
         // Жидкая унция    
        case 1211:
            key.gate =  flozs_TO_pints(MEASUREMENT);
            break;
        case 1210:
            key.gate =  flozs_TO_quarts(MEASUREMENT);
            break;
        case 1209:
            key.gate =  flozs_TO_barrels(MEASUREMENT);
            break;
        case 1208:
            key.gate =  flozs_TO_gallons(MEASUREMENT);
            break;
        case 1207:
            key.gate =  flozs_TO_mililiters(MEASUREMENT);
            break;
        case 1206:
            key.gate =  flozs_TO_liters(MEASUREMENT);
            break;
        case 1205:
            key.gate =  flozs_TO_squaredmillimeters(MEASUREMENT);
            break;
        case 1204:
            key.gate =  flozs_TO_squaredcentimeters(MEASUREMENT);
            break;
        case 1203:
            key.gate =  flozs_TO_squareddecimeters(MEASUREMENT);
            break;
        case 1202:
            key.gate =  flozs_TO_squaredmeters(MEASUREMENT);
            break;
        case 1201:
            key.gate =  flozs_TO_squaredkilometers(MEASUREMENT);
            break;                                                                                                                                                                            
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
