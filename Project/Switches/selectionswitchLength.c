#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchLength(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Миллиметр;\n"
           "2 - Метр;\n"
           "3 - Сантиметр;\n"
           "4 - Дециметр;\n"
           "5 - Километр;\n"
           "6 - Сажень;\n"
           "7 - Аршин;\n"
           "8 - Миля;\n"
           "9 - Ярд;\n"
           "10 - Фут;\n \t"
           "11 - Микрометр;\n \t"
           "12 - Нанометр; \n \t"
           "13 - Ангстрем;\n \t"
           "14 - Морская миля; \n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Миллиметр;\n"
           "2 - Метр;\n"
           "3 - Сантиметр;\n"
           "4 - Дециметр;\n"
           "5 - Километр;\n"
           "6 - Сажень;\n"
           "7 - Аршин;\n"
           "8 - Миля;\n"
           "9 - Ярд;\n"
           "10 - Фут;\n \t"
           "11 - Микрометр;\n \t"
           "12 - Нанометр; \n \t"
           "13 - Ангстрем;\n \t"
           "14 - Морская миля; \n \t");
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
            key.gate = millimeters_TO_meters((MEASUREMENT);
            break;
        case 13:
            key.gate = millimeters_TO_centimeters(MEASUREMENT);
            break;
        case 14:
            key.gate = millimeters_TO_decimeters(MEASUREMENT);
            break;
        case 15:
            key.gate = millimeters_TO_kilometers(MEASUREMENT);
            break;
        case 16:
            key.gate = millimeters_TO_fathoms(MEASUREMENT);
            break;
        case 17:
            key.gate = millimeters_TO_arshins(MEASUREMENT);
            break;
        case 18:
            key.gate = millimeters_TO_miles(MEASUREMENT);
            break;
        case 19:
            key.gate = millimeters_TO_yards(MEASUREMENT);
            break;
        case 20:
            key.gate = millimeters_TO_foots(MEASUREMENT);
            break;
        case 21:
            key.gate = millimeters_TO_micrometers(MEASUREMENT);
            break;
        case 22:
            key.gate = millimeters_TO_nanometers(MEASUREMENT);
            break;
        case 23:
            key.gate = millimeters_TO_angstroms(MEASUREMENT);
            break;
        case 24:
            key.gate = millimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        case 25:
            key.gate = meters_TO_millimeters(MEASUREMENT);
            break;
        case 26:
            key.gate = meters_TO_centimeters(MEASUREMENT);
            break;
        case 27:
            key.gate = meters_TO_decimeters(MEASUREMENT);
            break;
        case 28:
            key.gate = meters_TO_kilometers(MEASUREMENT);
            break;
        case 29:
            key.gate = meters_TO_fathoms(MEASUREMENT);
            break;
        case 30:
            key.gate = meters_TO_arshins(MEASUREMENT);
            break;
        case 31:
            key.gate = meters_TO_miles(MEASUREMENT);
            break;
        case 32:
            key.gate = meters_TO_yards(MEASUREMENT);
            break;
        case 33:
            key.gate = meters_TO_foots(MEASUREMENT);
            break;
        case 34:
            key.gate = meters_TO_micrometers(MEASUREMENT);
            break;
        case 35:
            key.gate = meters_TO_nanometers(MEASUREMENT);
            break;
        case 36:
            key.gate = meters_TO_angstroms(MEASUREMENT);
            break;
        case 37:
            key.gate = meters_TO_nauticalmiles(MEASUREMENT);
            break;
        case 38:
            key.gate = centimeters_TO_meters(MEASUREMENT);
            break;
        case 39:
            key.gate = centimeters_TO_millimeters(MEASUREMENT);
            break;
        case 40:
            key.gate = centimeters_TO_decimeters(MEASUREMENT);
            break;
        case 41:
            key.gate = centimeters_TO_kilometers(MEASUREMENT);
            break;
        case 42:
            key.gate = centimeters_TO_fathoms(MEASUREMENT);
            break;
        case 43:
            key.gate = centimeters_TO_arshins(MEASUREMENT);
            break;
        case 44:
            key.gate = centimeters_TO_miles(MEASUREMENT);
            break;
        case 45:
            key.gate = centimeters_TO_yards(MEASUREMENT);
            break;
        case 46:
            key.gate = centimeters_TO_foots(MEASUREMENT);
            break;
        case 47:
            key.gate = centimeters_TO_micrometers(MEASUREMENT);
            break;
        case 48:
            key.gate = centimeters_TO_nanometers(MEASUREMENT);
            break;
        case 49:
            key.gate = centimeters_TO_angstroms(MEASUREMENT);
            break;
        case 50:
            key.gate = centimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        case 51:
            key.gate = decimeters_TO_centimeters(MEASUREMENT);
            break;
        case 52:
            key.gate = decimeters_TO_meters(MEASUREMENT);
            break;
        case 53:
            key.gate = decimeters_TO_millimeters(MEASUREMENT);
            break;
        case 54:
            key.gate = decimeters_TO_kilometers(MEASUREMENT);
            break;
        case 55:
            key.gate = decimeters_TO_fathoms(MEASUREMENT);
            break;
        case 56:
            key.gate = decimeters_TO_arshins(MEASUREMENT);
            break;
        case 57:
            key.gate = decimeters_TO_miles(MEASUREMENT);
            break;
        case 58:
            key.gate = decimeters_TO_yards(MEASUREMENT);
            break;
        case 59:
            key.gate = decimeters_TO_foots(MEASUREMENT);
            break;
        case 60:
            key.gate = decimeters_TO_micrometers(MEASUREMENT);
            break;
        case 61:
            key.gate = decimeters_TO_nanometers(MEASUREMENT);
            break;
        case 62:
            key.gate = decimeters_TO_angstroms(MEASUREMENT);
            break;
        case 63:
            key.gate = decimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        case 64:
            key.gate = kilometers_TO_decimeters(MEASUREMENT);
            break;
        case 65:
            key.gate = kilometers_TO_centimeters(MEASUREMENT);
            break;
        case 66:
            key.gate = kilometers_TO_meters(MEASUREMENT);
            break;
        case 67:
            key.gate = kilometers_TO_millimeters(MEASUREMENT);
            break;
        case 68:
            key.gate = kilometers_TO_fathoms(MEASUREMENT);
            break;
        case 69:
            key.gate = kilometers_TO_arshins(MEASUREMENT);
            break;
        case 70:
            key.gate = kilometers_TO_miles(MEASUREMENT);
            break;
        case 71:
            key.gate = kilometers_TO_yards(MEASUREMENT);
            break;
        case 72:
            key.gate = kilometers_TO_foots(MEASUREMENT);
            break;
        case 73:
            key.gate = kilometers_TO_micrometers(MEASUREMENT);
            break;
        case 74:
            key.gate = kilometers_TO_nanometers(MEASUREMENT);
            break;
        case 75:
            key.gate = kilometers_TO_angstroms(MEASUREMENT);
            break;
        case 76:
            key.gate = kilometers_TO_nauticalmiles(MEASUREMENT);
            break;
        case 77:
            key.gate = fathoms_TO_kilometers(MEASUREMENT);
            break;
        case 78:
            key.gate = fathoms_TO_decimeters(MEASUREMENT);
            break;
        case 79:
            key.gate = fathoms_TO_centimeters(MEASUREMENT);
            break;
        case 80:
            key.gate = fathoms_TO_meters(MEASUREMENT);
            break;
        case 81:
            key.gate = fathoms_TO_millimeters(MEASUREMENT);
            break;
        case 82:
            key.gate = fathoms_TO_arshins(MEASUREMENT);
            break;
        case 83:
            key.gate = fathoms_TO_miles(MEASUREMENT);
            break;
        case 84:
            key.gate = fathoms_TO_yards(MEASUREMENT);
            break;
        case 85:
            key.gate = fathoms_TO_foots(MEASUREMENT);
            break;
        case 86:
            key.gate = fathoms_TO_micrometers(MEASUREMENT);
            break;
        case 87:
            key.gate = fathoms_TO_nanometers(MEASUREMENT);
            break;
        case 88:
            key.gate = fathoms_TO_angstroms(MEASUREMENT);
            break;
        case 89:
            key.gate = fathoms_TO_nauticalmiles(MEASUREMENT);
            break;
        case 90:
            key.gate = arshins_TO_fathoms(MEASUREMENT);
            break;
        case 91:
            key.gate = arshins_TO_kilometers(MEASUREMENT);
            break;
        case 92:
            key.gate = arshins_TO_decimeters(MEASUREMENT);
            break;
        case 93:
            key.gate = arshins_TO_centimeters(MEASUREMENT);
            break;
        case 94:
            key.gate = arshins_TO_meters(MEASUREMENT);
            break;
        case 95:
            key.gate = arshins_TO_millimeters(MEASUREMENT);
            break;
        case 96:
            key.gate = arshins_TO_miles(MEASUREMENT);
            break;
        case 97:
            key.gate = arshins_TO_yards(MEASUREMENT);
            break;
        case 98:
            key.gate = arshins_TO_foots(MEASUREMENT);
            break;
        case 99:
            key.gate = arshins_TO_micrometers(MEASUREMENT);
            break;
        case 100:
            key.gate = arshins_TO_nanometers(MEASUREMENT);
            break;
        case 101:
            key.gate = arshins_TO_angstroms(MEASUREMENT);
            break;
        case 102:
            key.gate = arshins_TO_nauticalmiles(MEASUREMENT);
            break;
        case 103:
            key.gate = miles_TO_arshins(MEASUREMENT);
            break;
        case 104:
            key.gate = miles_TO_fathoms(MEASUREMENT);
            break;
        case 105:
            key.gate = miles_TO_kilometers(MEASUREMENT);
            break;
        case 106:
            key.gate = miles_TO_decimeters(MEASUREMENT);
            break;
        case 107:
            key.gate = miles_TO_centimeters(MEASUREMENT);
            break;
        case 108:
            key.gate = miles_TO_meters(MEASUREMENT);
            break;
        case 109:
            key.gate = miles_TO_millimeters(MEASUREMENT);
            break;
        case 110:
            key.gate = miles_TO_yards(MEASUREMENT);
            break;
        case 111:
            key.gate = miles_TO_foots(MEASUREMENT);
            break;
        case 112:
            key.gate = miles_TO_micrometers(MEASUREMENT);
            break;
        case 113:
            key.gate = miles_TO_nanometers(MEASUREMENT);
            break;
        case 114:
            key.gate = miles_TO_angstroms(MEASUREMENT);
            break;
        case 115:
            key.gate = miles_TO_nauticalmiles(MEASUREMENT);
            break;
        case 116:
            key.gate = yards_TO_miles(MEASUREMENT);
            break;
        case 117:
            key.gate = yards_TO_arshins(MEASUREMENT);
            break;
        case 118:
            key.gate = yards_TO_fathoms(MEASUREMENT);
            break;
        case 119:
            key.gate = yards_TO_kilometers(MEASUREMENT);
            break;
        case 120:
            key.gate = yards_TO_decimeters(MEASUREMENT);
            break;
        case 121:
            key.gate = yards_TO_centimeters(MEASUREMENT);
            break;
        case 122:
            key.gate = yards_TO_meters(MEASUREMENT);
            break;
        case 123:
            key.gate = yards_TO_millimeters(MEASUREMENT);
            break;
        case 124:
            key.gate = yards_TO_foots(MEASUREMENT);
            break;
        case 125:
            key.gate = yards_TO_micrometers(MEASUREMENT);
            break;
        case 126:
            key.gate = yards_TO_nanometers(MEASUREMENT);
            break;
        case 127:
            key.gate = yards_TO_angstroms(MEASUREMENT);
            break;
        case 128:
            key.gate = yards_TO_nauticalmiles(MEASUREMENT);
            break;
        case 129:
            key.gate = foots_TO_yards(MEASUREMENT);
            break;
        case 130:
            key.gate = foots_TO_miles(MEASUREMENT);
            break;
        case 131:
            key.gate = foots_TO_arshins(MEASUREMENT);
            break;
        case 132:
            key.gate = foots_TO_fathoms(MEASUREMENT);
            break;
        case 133:
            key.gate = foots_TO_kilometers(MEASUREMENT);
            break;
        case 134:
            key.gate = foots_TO_decimeters(MEASUREMENT);
            break;
        case 135:
            key.gate = foots_TO_centimeters(MEASUREMENT);
            break;
        case 136:
            key.gate = foots_TO_meters(MEASUREMENT);
            break;
        case 137:
            key.gate = foots_TO_millimeters(MEASUREMENT);
            break;
        case 138:
            key.gate = foots_TO_micrometers(MEASUREMENT);
            break;
        case 139:
            key.gate = foots_TO_nanometers(MEASUREMENT);
            break;
        case 140:
            key.gate = foots_TO_angstroms(MEASUREMENT);
            break;
        case 141:
            key.gate = foots_TO_nauticalmiles(MEASUREMENT);
            break;
        case 142:
            key.gate = micrometers_TO_foots(MEASUREMENT);
            break;
        case 143:
            key.gate = micrometers_TO_yards(MEASUREMENT);
            break;
        case 144:
            key.gate = micrometers_TO_miles(MEASUREMENT);
            break;
        case 145:
            key.gate = micrometers_TO_arshins(MEASUREMENT);
            break;
        case 146:
            key.gate = micrometers_TO_fathoms(MEASUREMENT);
            break;
        case 147:
            key.gate = micrometers_TO_kilometers(MEASUREMENT);
            break;
        case 148:
            key.gate = micrometers_TO_decimeters(MEASUREMENT);
            break;
        case 149:
            key.gate = micrometers_TO_meters(MEASUREMENT);
            break;
        case 150:
            key.gate = micrometers_TO_centimeters(MEASUREMENT);
            break;
        case 151:
            key.gate = micrometers_TO_millimeters(MEASUREMENT);
            break;
        case 152:
            key.gate = micrometers_TO_nanometers(MEASUREMENT);
            break;
        case 153:
            key.gate = micrometers_TO_angstroms(MEASUREMENT);
            break;
        case 154:
            key.gate = micrometers_TO_nauticalmiles(MEASUREMENT);
            break;
        case 155:
            key.gate = nanometers_TO_micrometers(MEASUREMENT);
            break;
        case 156:
            key.gate = nanometers_TO_foots(MEASUREMENT);
            break;
        case 157:
            key.gate = nanometers_TO_yards(MEASUREMENT);
            break;
        case 158:
            key.gate = nanometers_TO_miles(MEASUREMENT);
            break;
        case 159:
            key.gate = nanometers_TO_arshins(MEASUREMENT);
            break;
        case 160:
            key.gate = nanometers_TO_fathoms(MEASUREMENT);
            break;
        case 161:
            key.gate = nanometers_TO_kilometers(MEASUREMENT);
            break;
        case 162:
            key.gate = nanometers_TO_decimeters(MEASUREMENT);
            break;
        case 163:
            key.gate = nanometers_TO_centimeters(MEASUREMENT);
            break;
        case 164:
            key.gate = nanometers_TO_meters(MEASUREMENT);
            break;
        case 165:
            key.gate = nanometers_TO_millimeters(MEASUREMENT);
            break;
        case 166:
            key.gate = nanometers_TO_angstroms(MEASUREMENT);
            break;
        case 167:
            key.gate = nanometers_TO_nauticalmiles(MEASUREMENT);
            break;
        case 168:
            key.gate = angstroms_TO_nanometers(MEASUREMENT);
            break;
        case 169:
            key.gate = angstroms_TO_micrometers(MEASUREMENT);
            break;
        case 170:
            key.gate = angstroms_TO_foots(MEASUREMENT);
            break;
        case 171:
            key.gate = angstroms_TO_yards(MEASUREMENT);
            break;
        case 172:
            key.gate = angstroms_TO_mile(MEASUREMENT);
            break;
        case 173:
            key.gate = angstroms_TO_arshins(MEASUREMENT);
            break;
        case 174:
            key.gate = angstroms_TO_fathoms(MEASUREMENT);
            break;
        case 175:
            key.gate = angstroms_TO_kilometers(MEASUREMENT);
            break;
        case 176:
            key.gate = angstroms_TO_decimeters(MEASUREMENT);
            break;
        case 177:
            key.gate = angstroms_TO_centimeters(MEASUREMENT);
            break;
        case 178:
            key.gate = angstroms_TO_meters(MEASUREMENT);
            break;
        case 179:
            key.gate = angstroms_TO_millimeters(MEASUREMENT);
            break;
        case 180:
            key.gate = angstroms_TO_nauticalmiles(MEASUREMENT);
            break;
        case 181:
            key.gate = nauticalmiles_TO_angstroms(MEASUREMENT);
            break;
        case 182:
            key.gate = nauticalmiles_TO_nanometers(MEASUREMENT);
            break;
        case 183:
            key.gate = nauticalmiles_TO_micrometers(MEASUREMENT);
            break;
        case 184:
            key.gate = nauticalmiles_TO_foots(MEASUREMENT);
            break;
        case 185:
            key.gate = nauticalmiles_TO_yards(MEASUREMENT);
            break;
        case 186:
            key.gate = nauticalmiles_TO_miles(MEASUREMENT);
            break;
        case 187:
            key.gate = nauticalmiles_TO_arshins(MEASUREMENT);
            break;
        case 188:
            key.gate = nauticalmiles_TO_fathoms(MEASUREMENT);
            break;
        case 189:
            key.gate = nauticalmiles_TO_kilometers(MEASUREMENT);
            break;
        case 190:
            key.gate = nauticalmiles_TO_decimeters(MEASUREMENT);
            break;
        case 191:
            key.gate = nauticalmiles_TO_centimeters(MEASUREMENT);
            break;
        case 192:
            key.gate = nauticalmiles_TO_meters(MEASUREMENT);
            break;
        case 193:
            key.gate = nauticalmiles_TO_millimeters(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
