#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Neiaie '../' - escape-neiaie - eniieucoaony aey ia?aoiaa ia iaei o?iaaiu auoa;
                                Yoio neiaie eniieucoaony noieuei ?ac, ia neieuei o?iaiae io?ii iiaiyouny; */


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
           "10 - Фут;\n "
           "11 - Микрометр;\n "
           "12 - Нанометр; \n "
           "13 - Ангстрем;\n "
           "14 - Морская миля; \n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

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
           "10 - Фут;\n "
           "11 - Микрометр;\n "
           "12 - Нанометр; \n "
           "13 - Ангстрем;\n "
           "14 - Морская миля; \n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
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
        //Ieeeeiao?
        case 12:
            key.gate = millimeters_TO_meters(MEASUREMENT);
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
        case 110:
            key.gate = millimeters_TO_foots(MEASUREMENT);
            break;
        case 111:
            key.gate = millimeters_TO_micrometers(MEASUREMENT);
            break;
        case 112:
            key.gate = millimeters_TO_nanometers(MEASUREMENT);
            break;
        case 113:
            key.gate = millimeters_TO_angstroms(MEASUREMENT);
            break;
        case 114:
            key.gate = millimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Iao?
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
        //Naioeiao?
        case 32:
            key.gate = centimeters_TO_meters(MEASUREMENT);
            break;
        case 31:
            key.gate = centimeters_TO_millimeters(MEASUREMENT);
            break;
        case 34:
            key.gate = centimeters_TO_decimeters(MEASUREMENT);
            break;
        case 35:
            key.gate = centimeters_TO_kilometers(MEASUREMENT);
            break;
        case 36:
            key.gate = centimeters_TO_fathoms(MEASUREMENT);
            break;
        case 37:
            key.gate = centimeters_TO_arshins(MEASUREMENT);
            break;
        case 38:
            key.gate = centimeters_TO_miles(MEASUREMENT);
            break;
        case 39:
            key.gate = centimeters_TO_yards(MEASUREMENT);
            break;
        case 310:
            key.gate = centimeters_TO_foots(MEASUREMENT);
            break;
        case 311:
            key.gate = centimeters_TO_micrometers(MEASUREMENT);
            break;
        case 312:
            key.gate = centimeters_TO_nanometers(MEASUREMENT);
            break;
        case 313:
            key.gate = centimeters_TO_angstroms(MEASUREMENT);
            break;
        case 314:
            key.gate = centimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Aaoeiao?
        case 43:
            key.gate = decimeters_TO_centimeters(MEASUREMENT);
            break;
        case 42:
            key.gate = decimeters_TO_meters(MEASUREMENT);
            break;
        case 41:
            key.gate = decimeters_TO_millimeters(MEASUREMENT);
            break;
        case 45:
            key.gate = decimeters_TO_kilometers(MEASUREMENT);
            break;
        case 46:
            key.gate = decimeters_TO_fathoms(MEASUREMENT);
            break;
        case 47:
            key.gate = decimeters_TO_arshins(MEASUREMENT);
            break;
        case 48:
            key.gate = decimeters_TO_miles(MEASUREMENT);
            break;
        case 49:
            key.gate = decimeters_TO_yards(MEASUREMENT);
            break;
        case 410:
            key.gate = decimeters_TO_foots(MEASUREMENT);
            break;
        case 411:
            key.gate = decimeters_TO_micrometers(MEASUREMENT);
            break;
        case 412:
            key.gate = decimeters_TO_nanometers(MEASUREMENT);
            break;
        case 413:
            key.gate = decimeters_TO_angstroms(MEASUREMENT);
            break;
        case 414:
            key.gate = decimeters_TO_nauticalmiles(MEASUREMENT);
            break;
        //Eeeiiao?
        case 54:
            key.gate = kilometers_TO_decimeters(MEASUREMENT);
            break;
        case 53:
            key.gate = kilometers_TO_centimeters(MEASUREMENT);
            break;
        case 52:
            key.gate = kilometers_TO_meters(MEASUREMENT);
            break;
        case 51:
            key.gate = kilometers_TO_millimeters(MEASUREMENT);
            break;
        case 56:
            key.gate = kilometers_TO_fathoms(MEASUREMENT);
            break;
        case 57:
            key.gate = kilometers_TO_arshins(MEASUREMENT);
            break;
        case 58:
            key.gate = kilometers_TO_miles(MEASUREMENT);
            break;
        case 59:
            key.gate = kilometers_TO_yards(MEASUREMENT);
            break;
        case 510:
            key.gate = kilometers_TO_foots(MEASUREMENT);
            break;
        case 511:
            key.gate = kilometers_TO_micrometers(MEASUREMENT);
            break;
        case 512:
            key.gate = kilometers_TO_nanometers(MEASUREMENT);
            break;
        case 513:
            key.gate = kilometers_TO_angstroms(MEASUREMENT);
            break;
        case 514:
            key.gate = kilometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Na?aiu
        case 65:
            key.gate = fathoms_TO_kilometers(MEASUREMENT);
            break;
        case 64:
            key.gate = fathoms_TO_decimeters(MEASUREMENT);
            break;
        case 63:
            key.gate = fathoms_TO_centimeters(MEASUREMENT);
            break;
        case 62:
            key.gate = fathoms_TO_meters(MEASUREMENT);
            break;
        case 61:
            key.gate = fathoms_TO_millimeters(MEASUREMENT);
            break;
        case 67:
            key.gate = fathoms_TO_arshins(MEASUREMENT);
            break;
        case 68:
            key.gate = fathoms_TO_miles(MEASUREMENT);
            break;
        case 69:
            key.gate = fathoms_TO_yards(MEASUREMENT);
            break;
        case 610:
            key.gate = fathoms_TO_foots(MEASUREMENT);
            break;
        case 611:
            key.gate = fathoms_TO_micrometers(MEASUREMENT);
            break;
        case 612:
            key.gate = fathoms_TO_nanometers(MEASUREMENT);
            break;
        case 613:
            key.gate = fathoms_TO_angstroms(MEASUREMENT);
            break;
        case 614:
            key.gate = fathoms_TO_nauticalmiles(MEASUREMENT);
            break;
         //A?oei
        case 76:
            key.gate = arshins_TO_fathoms(MEASUREMENT);
            break;
        case 75:
            key.gate = arshins_TO_kilometers(MEASUREMENT);
            break;
        case 74:
            key.gate = arshins_TO_decimeters(MEASUREMENT);
            break;
        case 73:
            key.gate = arshins_TO_centimeters(MEASUREMENT);
            break;
        case 72:
            key.gate = arshins_TO_meters(MEASUREMENT);
            break;
        case 71:
            key.gate = arshins_TO_millimeters(MEASUREMENT);
            break;
        case 78:
            key.gate = arshins_TO_miles(MEASUREMENT);
            break;
        case 79:
            key.gate = arshins_TO_yards(MEASUREMENT);
            break;
        case 710:
            key.gate = arshins_TO_foots(MEASUREMENT);
            break;
        case 711:
            key.gate = arshins_TO_micrometers(MEASUREMENT);
            break;
        case 712:
            key.gate = arshins_TO_nanometers(MEASUREMENT);
            break;
        case 713:
            key.gate = arshins_TO_angstroms(MEASUREMENT);
            break;
        case 714:
            key.gate = arshins_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ieey
        case 87:
            key.gate = miles_TO_arshins(MEASUREMENT);
            break;
        case 86:
            key.gate = miles_TO_fathoms(MEASUREMENT);
            break;
        case 85:
            key.gate = miles_TO_kilometers(MEASUREMENT);
            break;
        case 84:
            key.gate = miles_TO_decimeters(MEASUREMENT);
            break;
        case 83:
            key.gate = miles_TO_centimeters(MEASUREMENT);
            break;
        case 82:
            key.gate = miles_TO_meters(MEASUREMENT);
            break;
        case 81:
            key.gate = miles_TO_millimeters(MEASUREMENT);
            break;
        case 89:
            key.gate = miles_TO_yards(MEASUREMENT);
            break;
        case 810:
            key.gate = miles_TO_foots(MEASUREMENT);
            break;
        case 811:
            key.gate = miles_TO_micrometers(MEASUREMENT);
            break;
        case 812:
            key.gate = miles_TO_nanometers(MEASUREMENT);
            break;
        case 813:
            key.gate = miles_TO_angstroms(MEASUREMENT);
            break;
        case 814:
            key.gate = miles_TO_nauticalmiles(MEASUREMENT);
            break;
        //??a
        case 98:
            key.gate = yards_TO_miles(MEASUREMENT);
            break;
        case 97:
            key.gate = yards_TO_arshins(MEASUREMENT);
            break;
        case 96:
            key.gate = yards_TO_fathoms(MEASUREMENT);
            break;
        case 95:
            key.gate = yards_TO_kilometers(MEASUREMENT);
            break;
        case 94:
            key.gate = yards_TO_decimeters(MEASUREMENT);
            break;
        case 93:
            key.gate = yards_TO_centimeters(MEASUREMENT);
            break;
        case 92:
            key.gate = yards_TO_meters(MEASUREMENT);
            break;
        case 91:
            key.gate = yards_TO_millimeters(MEASUREMENT);
            break;
        case 910:
            key.gate = yards_TO_foots(MEASUREMENT);
            break;
        case 911:
            key.gate = yards_TO_micrometers(MEASUREMENT);
            break;
        case 912:
            key.gate = yards_TO_nanometers(MEASUREMENT);
            break;
        case 913:
            key.gate = yards_TO_angstroms(MEASUREMENT);
            break;
        case 914:
            key.gate = yards_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ooo
        case 1009:
            key.gate = foots_TO_yards(MEASUREMENT);
            break;
        case 1008:
            key.gate = foots_TO_miles(MEASUREMENT);
            break;
        case 1007:
            key.gate = foots_TO_arshins(MEASUREMENT);
            break;
        case 1006:
            key.gate = foots_TO_fathoms(MEASUREMENT);
            break;
        case 1005:
            key.gate = foots_TO_kilometers(MEASUREMENT);
            break;
        case 1004:
            key.gate = foots_TO_decimeters(MEASUREMENT);
            break;
        case 1003:
            key.gate = foots_TO_centimeters(MEASUREMENT);
            break;
        case 1002:
            key.gate = foots_TO_meters(MEASUREMENT);
            break;
        case 1001:
            key.gate = foots_TO_millimeters(MEASUREMENT);
            break;
        case 1011:
            key.gate = foots_TO_micrometers(MEASUREMENT);
            break;
        case 1012:
            key.gate = foots_TO_nanometers(MEASUREMENT);
            break;
        case 1013:
            key.gate = foots_TO_angstroms(MEASUREMENT);
            break;
        case 1014:
            key.gate = foots_TO_nauticalmiles(MEASUREMENT);
            break;
        //Iee?iiao?
        case 1110:
            key.gate = micrometers_TO_foots(MEASUREMENT);
            break;
        case 1109:
            key.gate = micrometers_TO_yards(MEASUREMENT);
            break;
        case 1108:
            key.gate = micrometers_TO_miles(MEASUREMENT);
            break;
        case 1107:
            key.gate = micrometers_TO_arshins(MEASUREMENT);
            break;
        case 1106:
            key.gate = micrometers_TO_fathoms(MEASUREMENT);
            break;
        case 1105:
            key.gate = micrometers_TO_kilometers(MEASUREMENT);
            break;
        case 1104:
            key.gate = micrometers_TO_decimeters(MEASUREMENT);
            break;
        case 1103:
            key.gate = micrometers_TO_centimeters(MEASUREMENT);
            break;
        case 1102:
            key.gate = micrometers_TO_meters(MEASUREMENT);
            break;
        case 1101:
            key.gate = micrometers_TO_millimeters(MEASUREMENT);
            break;
        case 1112:
            key.gate = micrometers_TO_nanometers(MEASUREMENT);
            break;
        case 1113:
            key.gate = micrometers_TO_angstroms(MEASUREMENT);
            break;
        case 1114:
            key.gate = micrometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Iaiiiao?
        case 1211:
            key.gate = nanometers_TO_micrometers(MEASUREMENT);
            break;
        case 1210:
            key.gate = nanometers_TO_foots(MEASUREMENT);
            break;
        case 1209:
            key.gate = nanometers_TO_yards(MEASUREMENT);
            break;
        case 1208:
            key.gate = nanometers_TO_miles(MEASUREMENT);
            break;
        case 1207:
            key.gate = nanometers_TO_arshins(MEASUREMENT);
            break;
        case 1206:
            key.gate = nanometers_TO_fathoms(MEASUREMENT);
            break;
        case 1205:
            key.gate = nanometers_TO_kilometers(MEASUREMENT);
            break;
        case 1204:
            key.gate = nanometers_TO_decimeters(MEASUREMENT);
            break;
        case 1203:
            key.gate = nanometers_TO_centimeters(MEASUREMENT);
            break;
        case 1202:
            key.gate = nanometers_TO_meters(MEASUREMENT);
            break;
        case 1201:
            key.gate = nanometers_TO_millimeters(MEASUREMENT);
            break;
        case 1213:
            key.gate = nanometers_TO_angstroms(MEASUREMENT);
            break;
        case 1214:
            key.gate = nanometers_TO_nauticalmiles(MEASUREMENT);
            break;
        //Aiano?ai
        case 1312:
            key.gate = angstroms_TO_nanometers(MEASUREMENT);
            break;
        case 1311:
            key.gate = angstroms_TO_micrometers(MEASUREMENT);
            break;
        case 1310:
            key.gate = angstroms_TO_foots(MEASUREMENT);
            break;
        case 1309:
            key.gate = angstroms_TO_yards(MEASUREMENT);
            break;
        case 1308:
            key.gate = angstroms_TO_miles(MEASUREMENT);
            break;
        case 1307:
            key.gate = angstroms_TO_arshins(MEASUREMENT);
            break;
        case 1306:
            key.gate = angstroms_TO_fathoms(MEASUREMENT);
            break;
        case 1305:
            key.gate = angstroms_TO_kilometers(MEASUREMENT);
            break;
        case 1304:
            key.gate = angstroms_TO_decimeters(MEASUREMENT);
            break;
        case 1303:
            key.gate = angstroms_TO_centimeters(MEASUREMENT);
            break;
        case 1302:
            key.gate = angstroms_TO_meters(MEASUREMENT);
            break;
        case 1301:
            key.gate = angstroms_TO_millimeter(MEASUREMENT);
            break;
        case 1314:
            key.gate = angstroms_TO_nauticalmiles(MEASUREMENT);
            break;
        //Ii?neay ieey
        case 1413:
            key.gate = nauticalmiles_TO_angstroms(MEASUREMENT);
            break;
        case 1412:
            key.gate = nauticalmiles_TO_nanometers(MEASUREMENT);
            break;
        case 1411:
            key.gate = nauticalmiles_TO_micrometers(MEASUREMENT);
            break;
        case 1410:
            key.gate = nauticalmiles_TO_foots(MEASUREMENT);
            break;
        case 1409:
            key.gate = nauticalmiles_TO_yards(MEASUREMENT);
            break;
        case 1408:
            key.gate = nauticalmiles_TO_miles(MEASUREMENT);
            break;
        case 1407:
            key.gate = nauticalmiles_TO_arshins(MEASUREMENT);
            break;
        case 1406:
            key.gate = nauticalmiles_TO_fathoms(MEASUREMENT);
            break;
        case 1405:
            key.gate = nauticalmiles_TO_kilometers(MEASUREMENT);
            break;
        case 1404:
            key.gate = nauticalmiles_TO_decimeters(MEASUREMENT);
            break;
        case 1403:
            key.gate = nauticalmiles_TO_centimeters(MEASUREMENT);
            break;
        case 1402:
            key.gate = nauticalmiles_TO_meters(MEASUREMENT);
            break;
        case 1401:
            key.gate = nauticalmiles_TO_millimeters(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
