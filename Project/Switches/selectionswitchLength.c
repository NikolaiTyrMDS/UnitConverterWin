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
  //scanf("%d", &key.input_choice);
   key.input_choice = parsing_id(key.in);
    while(key.input_choice > 14 || key.input_choice == 0) {
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
    //scanf("%d", &key.output_choice);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 14 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    if(key.input_choice < 10 && key.output_choice < 10)
		key.id = key.input_choice * 10 + key.output_choice;
	if(key.input_choice == 10 && key.output_choice <= 10)
		key.id = key.input_choice * 100 + key.output_choice;
	if(key.input_choice < 10 && key.output_choice == 10)
		key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id) {
        //Миллиметр
        case 12:
            key.gate = millimeters_TO_meters(MEASUREMENT);
            break;
        case 13:
            key.gate = meters_TO_centimeters(millimeters_TO_meters(MEASUREMENT));
            break;
        case 14:
            key.gate = meters_TO_decimeters(millimeters_TO_meters(MEASUREMENT));
            break;
        case 15:
            key.gate = meters_TO_kilometers(millimeters_TO_meters(MEASUREMENT));
            break;
        case 16:
            key.gate = meters_TO_fathoms(millimeters_TO_meters(MEASUREMENT));
            break;
        case 17:
            key.gate = meters_TO_arshins(millimeters_TO_meters(MEASUREMENT));
            break;
        case 18:
            key.gate = meters_TO_miles(millimeters_TO_meters(MEASUREMENT));
            break;
        case 19:
            key.gate = meters_TO_yards(millimeters_TO_meters(MEASUREMENT));
            break;
        case 110:
            key.gate = meters_TO_foots(millimeters_TO_meters(MEASUREMENT));
            break;
        case 111:
            key.gate = meters_TO_micrometers(millimeters_TO_meters(MEASUREMENT));
            break;
        case 112:
            key.gate = meters_TO_nanometers(millimeters_TO_meters(MEASUREMENT));
            break;
        case 113:
            key.gate = meters_TO_angstroms(millimeters_TO_meters(MEASUREMENT));
            break;
        case 114:
            key.gate = meters_TO_nauticalmiles(millimeters_TO_meters(MEASUREMENT));
            break;
        //Метр
        case 21:
            key.gate = meters_TO_millimeters(MEASUREMENT);
            break;
        case 23:
            key.gate = meters_TO_centimeters(MEASUREMENT);
            break;
        case 24:
            key.gate = meters_TO_decimeters(MEASUREMENT);
            break;
        case 25:
            key.gate = meters_TO_kilometers(MEASUREMENT);
            break;
        case 26:
            key.gate = meters_TO_fathoms(MEASUREMENT);
            break;
        case 27:
            key.gate = meters_TO_arshins(MEASUREMENT);
            break;
        case 28:
            key.gate = meters_TO_miles(MEASUREMENT);
            break;
        case 29:
            key.gate = meters_TO_yards(MEASUREMENT);
            break;
        case 210:
            key.gate = meters_TO_foots(MEASUREMENT);
            break;
        case 211:
            key.gate = meters_TO_micrometers(MEASUREMENT);
            break;
        case 212:
            key.gate = meters_TO_nanometers(MEASUREMENT);
            break;
        case 213:
            key.gate = meters_TO_angstroms(MEASUREMENT);
            break;
        case 214:
            key.gate = meters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Сантиметр
        case 32:
            key.gate = centimeters_TO_meters(MEASUREMENT);
            break;
        case 31:
            key.gate = meters_TO_millimeters(centimeters_TO_meters(MEASUREMENT));
            break;
        case 34:
            key.gate = meters_TO_decimeters(centimeters_TO_meters(MEASUREMENT));
            break;
        case 35:
            key.gate = meters_TO_kilometers(centimeters_TO_meters(MEASUREMENT));
            break;
        case 36:
            key.gate = meters_TO_fathoms(centimeters_TO_meters(MEASUREMENT));
            break;
        case 37:
            key.gate = meters_TO_arshins(centimeters_TO_meters(MEASUREMENT));
            break;
        case 38:
            key.gate = meters_TO_miles(centimeters_TO_meters(MEASUREMENT));
            break;
        case 39:
            key.gate = meters_TO_yards(centimeters_TO_meters(MEASUREMENT));
            break;
        case 310:
            key.gate = meters_TO_foots(centimeters_TO_meters(MEASUREMENT));
            break;
        case 311:
            key.gate = meters_TO_micrometers(centimeters_TO_meters(MEASUREMENT));
            break;
        case 312:
            key.gate = meters_TO_nanometers(centimeters_TO_meters(MEASUREMENT));
            break;
        case 313:
            key.gate = meters_TO_angstroms(centimeters_TO_meters(MEASUREMENT));
            break;
        case 314:
            key.gate = meters_TO_nauticalmiles(centimeters_TO_meters(MEASUREMENT));
            break;
        //Дециметр
        case 43:
            key.gate = meters_TO_centimeters(decimeters_TO_meters(MEASUREMENT));
            break;
        case 42:
            key.gate = decimeters_TO_meters(MEASUREMENT);
            break;
        case 41:
            key.gate = meters_TO_millimeters(decimeters_TO_meters(MEASUREMENT));
            break;
        case 45:
            key.gate = meters_TO_kilometers(decimeters_TO_meters(MEASUREMENT));
            break;
        case 46:
            key.gate = meters_TO_fathoms(decimeters_TO_meters(MEASUREMENT));
            break;
        case 47:
            key.gate = meters_TO_arshins(decimeters_TO_meters(MEASUREMENT));
            break;
        case 48:
            key.gate = meters_TO_miles(decimeters_TO_meters(MEASUREMENT));
            break;
        case 49:
            key.gate = meters_TO_yards(decimeters_TO_meters(MEASUREMENT));
            break;
        case 410:
            key.gate = meters_TO_foots(decimeters_TO_meters(MEASUREMENT));
            break;
        case 411:
            key.gate = meters_TO_micrometers(decimeters_TO_meters(MEASUREMENT));
            break;
        case 412:
            key.gate = meters_TO_nanometers(decimeters_TO_meters(MEASUREMENT));
            break;
        case 413:
            key.gate = meters_TO_angstroms(decimeters_TO_meters(MEASUREMENT));
            break;
        case 414:
            key.gate = meters_TO_nauticalmiles(decimeters_TO_meters(MEASUREMENT));
            break;
        //Километр
        case 54:
            key.gate = meters_TO_decimeters(kilometers_TO_meters(MEASUREMENT));
            break;
        case 53:
            key.gate = meters_TO_centimeters(kilometers_TO_meters(MEASUREMENT));
            break;
        case 52:
            key.gate = kilometers_TO_meters(MEASUREMENT);
            break;
        case 51:
            key.gate = meters_TO_millimeters(kilometers_TO_meters(MEASUREMENT));
            break;
        case 56:
            key.gate = meters_TO_fathoms(kilometers_TO_meters(MEASUREMENT));
            break;
        case 57:
            key.gate = meters_TO_arshins(kilometers_TO_meters(MEASUREMENT));
            break;
        case 58:
            key.gate = meters_TO_miles(kilometers_TO_meters(MEASUREMENT));
            break;
        case 59:
            key.gate = meters_TO_yards(kilometers_TO_meters(MEASUREMENT));
            break;
        case 510:
            key.gate = meters_TO_foots(kilometers_TO_meters(MEASUREMENT));
            break;
        case 511:
            key.gate = meters_TO_micrometers(kilometers_TO_meters(MEASUREMENT));
            break;
        case 512:
            key.gate = meters_TO_nanometers(kilometers_TO_meters(MEASUREMENT));
            break;
        case 513:
            key.gate = meters_TO_angstroms(kilometers_TO_meters(MEASUREMENT));
            break;
        case 514:
            key.gate = meters_TO_nauticalmiles(kilometers_TO_meters(MEASUREMENT));
            break;
        //Сажень
        case 65:
            key.gate = meters_TO_kilometers(fathoms_TO_meters(MEASUREMENT));
            break;
        case 64:
            key.gate = meters_TO_decimeters(fathoms_TO_meters(MEASUREMENT));
            break;
        case 63:
            key.gate = meters_TO_centimeters(fathoms_TO_meters(MEASUREMENT));
            break;
        case 62:
            key.gate = fathoms_TO_meters(MEASUREMENT);
            break;
        case 61:
            key.gate = meters_TO_millimeter(fathoms_TO_meters(MEASUREMENT));
            break;
        case 67:
            key.gate = meters_TO_arshins(fathoms_TO_meters(MEASUREMENT));
            break;
        case 68:
            key.gate = meters_TO_miles(fathoms_TO_meters(MEASUREMENT));
            break;
        case 69:
            key.gate = meters_TO_yards(fathoms_TO_meters(MEASUREMENT));
            break;
        case 610:
            key.gate = meters_TO_foots(fathoms_TO_meters(MEASUREMENT));
            break;
        case 611:
            key.gate = meters_TO_micrometers(fathoms_TO_meters(MEASUREMENT));
            break;
        case 612:
            key.gate = meters_TO_nanometers(fathoms_TO_meters(MEASUREMENT));
            break;
        case 613:
            key.gate = meters_TO_angstroms(fathoms_TO_meters(MEASUREMENT));
            break;
        case 614:
            key.gate = meters_TO_nauticalmiles(fathoms_TO_meters(MEASUREMENT));
            break;
         //Аршин
        case 76:
            key.gate = meters_TO_fathoms(arshins_TO_meters(MEASUREMENT));
            break;
        case 75:
            key.gate = meters_TO_kilometers(arshins_TO_meters(MEASUREMENT));
            break;
        case 74:
            key.gate = meters_TO_decimeters(arshins_TO_meters(MEASUREMENT));
            break;
        case 73:
            key.gate = meters_TO_centimeters(arshins_TO_meters(MEASUREMENT));
            break;
        case 72:
            key.gate = arshins_TO_meters(MEASUREMENT);
            break;
        case 71:
            key.gate = meters_TO_millimeters(arshins_TO_meters(MEASUREMENT));
            break;
        case 78:
            key.gate = meters_TO_miles(arshins_TO_meters(MEASUREMENT));
            break;
        case 79:
            key.gate = meters_TO_yards(arshins_TO_meters(MEASUREMENT));
            break;
        case 710:
            key.gate = meters_TO_foots(arshins_TO_meters(MEASUREMENT));
            break;
        case 711:
            key.gate = meters_TO_micrometers(arshins_TO_meters(MEASUREMENT));
            break;
        case 712:
            key.gate = meters_TO_nanometers(arshins_TO_meters(MEASUREMENT));
            break;
        case 713:
            key.gate = meters_TO_angstroms(arshins_TO_meters(MEASUREMENT));
            break;
        case 714:
            key.gate = meters_TO_nauticalmiles(arshins_TO_meters(MEASUREMENT));
            break;
        //Миля
        case 87:
            key.gate = meters_TO_arshins(miles_TO_meters(MEASUREMENT));
            break;
        case 86:
            key.gate = meters_TO_fathoms(miles_TO_meters(MEASUREMENT));
            break;
        case 85:
            key.gate = meters_TO_kilometers(miles_TO_meters(MEASUREMENT));
            break;
        case 84:
            key.gate = meters_TO_decimeters(miles_TO_metersMEASUREMENT));
            break;
        case 83:
            key.gate = meters_TO_centimeters(miles_TO_meters(MEASUREMENT));
            break;
        case 82:
            key.gate = miles_TO_meters(MEASUREMENT);
            break;
        case 81:
            key.gate = meters_TO_millimeters(miles_TO_meters(MEASUREMENT));
            break;
        case 89:
            key.gate = meters_TO_yards(miles_TO_meters(MEASUREMENT));
            break;
        case 810:
            key.gate = meters_TO_foots(miles_TO_meters(MEASUREMENT));
            break;
        case 811:
            key.gate = meters_TO_micrometers(miles_TO_meters(MEASUREMENT));
            break;
        case 812:
            key.gate = meters_TO_nanometers(miles_TO_meters(MEASUREMENT));
            break;
        case 813:
            key.gate = meters_TO_angstroms(miles_TO_meters(MEASUREMENT));
            break;
        case 814:
            key.gate = meters_TO_nauticalmiles(miles_TO_meters(MEASUREMENT));
            break;
        //Ярд
        case 98:
            key.gate = meters_TO_miles(yards_TO_meters(MEASUREMENT));
            break;
        case 97:
            key.gate = meters_TO_arshins(yards_TO_meters(MEASUREMENT));
            break;
        case 96:
            key.gate = meters_TO_fathoms(yards_TO_meters(MEASUREMENT));
            break;
        case 95:
            key.gate = meters_TO_kilometers(yards_TO_meters(MEASUREMENT));
            break;
        case 94:
            key.gate = meters_TO_decimeters(yards_TO_meters(MEASUREMENT));
            break;
        case 93:
            key.gate = meters_TO_centimeters(yards_TO_meters(MEASUREMENT));
            break;
        case 92:
            key.gate = meters_TO_meters(MEASUREMENT);
            break;
        case 91:
            key.gate = meters_TO_millimeters(yards_TO_meters(MEASUREMENT));
            break;
        case 910:
            key.gate = meters_TO_foots(yards_TO_meters(MEASUREMENT));
            break;
        case 911:
            key.gate = meters_TO_micrometers(yards_TO_meters(MEASUREMENT));
            break;
        case 912:
            key.gate = meters_TO_nanometers(yards_TO_meters(MEASUREMENT));
            break;
        case 913:
            key.gate = meters_TO_angstroms(yards_TO_meters(MEASUREMENT));
            break;
        case 914:
            key.gate = meters_TO_nauticalmiles(yards_TO_meters(MEASUREMENT));
            break;
        //Фут
        case 1009:
            key.gate = meters_TO_yards(foots_TO_meters(MEASUREMENT));
            break;
        case 1008:
            key.gate = meters_TO_miles(foots_TO_meters(MEASUREMENT));
            break;
        case 1007:
            key.gate = meters_TO_arshins(foots_TO_meters(MEASUREMENT));
            break;
        case 1006:
            key.gate = meters_TO_fathoms(foots_TO_meters(MEASUREMENT));
            break;
        case 1005:
            key.gate = meters_TO_kilometers(foots_TO_meters(MEASUREMENT));
            break;
        case 1004:
            key.gate = meters_TO_decimeters(foots_TO_meters(MEASUREMENT));
            break;
        case 1003:
            key.gate = meters_TO_centimeters(foots_TO_meters(MEASUREMENT));
            break;
        case 1002:
            key.gate = foots_TO_meters(MEASUREMENT);
            break;
        case 1001:
            key.gate = meters_TO_millimeters(foots_TO_meters(MEASUREMENT));
            break;
        case 1011:
            key.gate = meters_TO_micrometers(foots_TO_meters(MEASUREMENT));
            break;
        case 1012:
            key.gate = meters_TO_nanometers(foots_TO_meters(MEASUREMENT));
            break;
        case 1013:
            key.gate = meters_TO_angstroms(foots_TO_meters(MEASUREMENT));
            break;
        case 1014:
            key.gate = meters_TO_nauticalmiles(foots_TO_meters(MEASUREMENT));
            break;
        //Микрометр
        case 1110:
            key.gate = meters_TO_foots(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1109:
            key.gate = meters_TO_yards(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1108:
            key.gate = meters_TO_miles(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1107
            key.gate = meters_TO_arshins(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1106:
            key.gate = meters_TO_fathoms(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1105:
            key.gate = meters_TO_kilometers(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1104;
            key.gate = meters_TO_decimeters(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1103:
            key.gate = meters_TO_centimeters(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1102:
            key.gate = meters_TO_meters(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1101:
            key.gate = meters_TO_millimeters(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1112:
            key.gate = meters_TO_nanometers(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1113:
            key.gate = meters_TO_angstroms(micrometers_TO_meters(MEASUREMENT));
            break;
        case 1114:
            key.gate = meters_TO_nauticalmiles(micrometers_TO_meters(MEASUREMENT));
            break;
        //Нанометр
        case 1211:
            key.gate = meters_TO_micrometers(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1210:
            key.gate = meters_TO_foots(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1209:
            key.gate = meters_TO_yards(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1208:
            key.gate = meters_TO_miles(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1207:
            key.gate = meters_TO_arshins(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1206:
            key.gate = meters_TO_fathoms(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1205:
            key.gate = meters_TO_kilometers(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1204:
            key.gate = meters_TO_decimeters(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1203:
            key.gate = meters_TO_centimeters(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1202:
            key.gate = nanometers_TO_meters(MEASUREMENT);
            break;
        case 1201:
            key.gate = meters_TO_millimeters(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1213:
            key.gate = meters_TO_angstroms(nanometers_TO_meters(MEASUREMENT));
            break;
        case 1214:
            key.gate = meters_TO_nauticalmiles(nanometers_TO_meters(MEASUREMENT));
            break;
        //Ангстрем
        case 1312:
            key.gate = meters_TO_nanometers(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1311:
            key.gate = meters_TO_micrometers(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1310:
            key.gate = meters_TO_foots(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1309:
            key.gate = meters_TO_yards(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1308:
            key.gate = meters_TO_miles(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1307:
            key.gate = meters_TO_arshins(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1306:
            key.gate = meters_TO_fathoms(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1305:
            key.gate = meters_TO_kilometers(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1304:
            key.gate = meters_TO_decimeters(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1303:
            key.gate = meters_TO_centimeters(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1302:
            key.gate = angstroms_TO_meters(MEASUREMENT);
            break;
        case 1301:
            key.gate = meters_TO_millimeters(angstroms_TO_meters(MEASUREMENT));
            break;
        case 1314:
            key.gate = meters_TO_nauticalmiles(angstroms_TO_meters(MEASUREMENT));
            break;
        //Морская миля
        case 1413:
            key.gate = meters_TO_angstroms(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1412:
            key.gate = meters_TO_nanometers(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1411:
            key.gate = meters_TO_micrometers(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1410:
            key.gate = meters_TO_foots(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1409:
            key.gate = meters_TO_yards(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1408:
            key.gate = meters_TO_miles(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1407:
            key.gate = meters_TO_arshins(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1406:
            key.gate = meters_TO_fathoms(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1405:
            key.gate = meters_TO_kilometers(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1404:
            key.gate = meters_TO_decimeters(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1403:
            key.gate = meters_TO_centimeters(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        case 1402:
            key.gate = nauticalmiles_TO_meters(MEASUREMENT);
            break;
        case 1401:
            key.gate = meters_TO_millimeters(nauticalmiles_TO_meters(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
