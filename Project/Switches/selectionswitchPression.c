#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchPression(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           " 1 - Бар;\n"
           " 2 - Миллибар;\n"
           " 3 - Паскль;\n"
           " 4 - Килопаскль;\n"
           " 5 - Мегапаскаль;\n"
           " 6 - Грамм/сантиметр;\n"
           " 7 - Килограмм/сантиметр;\n"
           " 8 - Тонна/сантиметр;\n"
           " 9 - Килограмм/метр;\n"
           "10 - Тона/метр;\n"
           "11 - Ньютон/сантиметр;\n \t"
           "12 - Ньютон/метр;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice > 12 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           " 1 - Бар;\n"
           " 2 - Миллибар;\n"
           " 3 - Паскль;\n"
           " 4 - Килопаскль;\n"
           " 5 - Мегапаскаль;\n"
           " 6 - Грамм/сантиметр;\n"
           " 7 - Килограмм/сантиметр;\n"
           " 8 - Тонна/сантиметр;\n"
           " 9 - Килограмм/метр;\n"
           "10 - Тона/метр;\n"
           "11 - Ньютон/сантиметр;\n "
           "12 - Ньютон/метр;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice > 12 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

   key.id = key.input_choice * 100 + key.output_choice;


    switch(key.id) {
        case 102:
            key.gate = bar_to_mbar(MEASUREMENT);
            break;
        case 103:
            key.gate = bar_to_paskal(MEASUREMENT);
            break;
        case 104:
            key.gate = bar_to_kpaskal(MEASUREMENT);
            break;
         case 105:
            key.gate = bar_to_Mpaskal(MEASUREMENT);
            break;
        case 106:
            key.gate = bar_to_gcm(MEASUREMENT);
            break;
        case 107:
            key.gate = bar_to_kgcm(MEASUREMENT);
            break;
         case 108:
            key.gate = bar_to_toncm(MEASUREMENT);
            break;
        case 109:
            key.gate = bar_to_kgm(MEASUREMENT);
            break;
        case 110:
            key.gate = bar_to_tonm(MEASUREMENT);
            break;
         case 11:
            key.gate = bar_to_newtoncm(MEASUREMENT);
            break;
        case 112:
            key.gate = bar_to_newtonm(MEASUREMENT);
            break;
        case 201:
            key.gate = mbar_to_bar(MEASUREMENT);
            break;
         case 203:
            key.gate = mbar_to_paskal(MEASUREMENT);
            break;
        case 204:
            key.gate = mbar_to_kpaskal(MEASUREMENT);
            break;
        case 205:
            key.gate = mbar_to_Mpaskal(MEASUREMENT);
            break;
         case 206:
            key.gate = mbar_to_gcm(MEASUREMENT);
            break;
        case 207:
            key.gate = mbar_to_kgcm(MEASUREMENT);
            break;
        case 208:
            key.gate = mbar_to_toncm(MEASUREMENT);
            break;
         case 209:
            key.gate = mbar_to_kgm(MEASUREMENT);
            break;
        case 210:
            key.gate = mbar_to_tonm(MEASUREMENT);
            break;
        case 211:
            key.gate = mbar_to_newtoncm(MEASUREMENT);
            break;
         case 212:
            key.gate = mbar_to_newtonm(MEASUREMENT);
            break;
        case 301:
            key.gate = paskal_to_bar(MEASUREMENT);
            break;
        case 302:
            key.gate = paskal_to_mbar(MEASUREMENT);
            break;
         case 304:
            key.gate = paskal_to_kpaskal(MEASUREMENT);
            break;
         case 305:
            key.gate = paskal_to_Mpaskal(MEASUREMENT);
            break;
        case 306:
            key.gate = paskal_to_gcm(MEASUREMENT);
            break;
        case 307:
            key.gate = paskal_to_kgcm(MEASUREMENT);
            break;
         case 308:
            key.gate = paskal_to_toncm(MEASUREMENT);
            break;
        case 309:
            key.gate = paskal_to_kgm(MEASUREMENT);
            break;
        case 310:
            key.gate = paskal_to_tonm(MEASUREMENT);
            break;
         case 311:
            key.gate = paskal_to_newtoncm(MEASUREMENT);
            break;
        case 312:
            key.gate = paskal_to_newtonm(MEASUREMENT);
            break;
            double kpaskal_to_bar(double PRESS);
        case 401:
            key.gate = kpaskal_to_bar(MEASUREMENT);
            break;
         case 402:
            key.gate = kpaskal_to_mbar(MEASUREMENT);
            break;
        case 403:
            key.gate = kpaskal_to_paskal(MEASUREMENT);
            break;
        case 405:
            key.gate = kpaskal_to_Mpaskal(MEASUREMENT);
            break;
         case 406:
            key.gate = kpaskal_to_gcm(MEASUREMENT);
            break;
        case 407:
            key.gate = kpaskal_to_kgcm(MEASUREMENT);
            break;
        case 408:
            key.gate = kpaskal_to_toncm(MEASUREMENT);
            break;
         case 409:
            key.gate = kpaskal_to_kgm(MEASUREMENT);
            break;
        case 410:
            key.gate = kpaskal_to_tonm(MEASUREMENT);
            break;
        case 411:
            key.gate = kpaskal_to_newtoncm(MEASUREMENT);
            break;
         case 412:
            key.gate = kpaskal_to_newtonm(MEASUREMENT);
            break;
         case 501:
            key.gate = Mpaskal_to_bar(MEASUREMENT);
            break;
        case 502:
            key.gate = Mpaskal_to_mbar(MEASUREMENT);
            break;
         case 503:
            key.gate = Mpaskal_to_paskal(MEASUREMENT);
            break;
        case 504:
            key.gate = Mpaskal_to_kpaskal(MEASUREMENT);
            break;
        case 506:
            key.gate = Mpaskal_to_gcm(MEASUREMENT);
            break;
         case 507:
            key.gate = Mpaskal_to_kgcm(MEASUREMENT);
            break;
        case 508:
            key.gate = Mpaskal_to_toncm(MEASUREMENT);
            break;
        case 509:
            key.gate = Mpaskal_to_kgm(MEASUREMENT);
            break;
         case 510:
            key.gate = Mpaskal_to_tonm(MEASUREMENT);
            break;
        case 511:
            key.gate = Mpaskal_to_newtoncm(MEASUREMENT);
            break;
        case 512:
            key.gate = Mpaskal_to_newtonm(MEASUREMENT);
            break;
         case 601:
            key.gate = gcm_to_bar(MEASUREMENT);
            break;
        case 602:
            key.gate = gcm_to_mbar(MEASUREMENT);
            break;
        case 603:
            key.gate = gcm_to_paskal(MEASUREMENT);
            break;
         case 604:
            key.gate = gcm_to_kpaskal(MEASUREMENT);
            break;
        case 605:
            key.gate = gcm_to_Mpaskal(MEASUREMENT);
            break;
        case 607:
            key.gate = gcm_to_kgcm(MEASUREMENT);
            break;
         case 608:
            key.gate = gcm_to_toncm(MEASUREMENT);
            break;
        case 609:
            key.gate = gcm_to_kgm(MEASUREMENT);
            break;
        case 610:
            key.gate = gcm_to_tonm(MEASUREMENT);
            break;
         case 611:
            key.gate = gcm_to_newtoncm(MEASUREMENT);
            break;
        case 612:
            key.gate = gcm_to_newtonm(MEASUREMENT);
            break;
        case 701:
            key.gate = kgcm_to_bar(MEASUREMENT);
            break;
         case 702:
            key.gate = kgcm_to_mbar(MEASUREMENT);
            break;
        case 703:
            key.gate = kgcm_to_paskal(MEASUREMENT);
            break;
        case 704:
            key.gate = kgcm_to_kpaskal(MEASUREMENT);
            break;
        case 705:
            key.gate = kgcm_to_Mpaskal(MEASUREMENT);
            break;
         case 706:
            key.gate = kgcm_to_gcm(MEASUREMENT);
            break;
        case 708:
            key.gate = kgcm_to_toncm(MEASUREMENT);
            break;
        case 709:
            key.gate = kgcm_to_kgm(MEASUREMENT);
            break;
        case 710:
            key.gate = kgcm_to_tonm(MEASUREMENT);
            break;
         case 711:
            key.gate = kgcm_to_newtoncm(MEASUREMENT);
            break;
        case 712:
            key.gate = kgcm_to_newtonm(MEASUREMENT);
            break;
        case 801:
            key.gate = toncm_to_bar(MEASUREMENT);
            break;
        case 802:
            key.gate = toncm_to_mbar(MEASUREMENT);
            break;
         case 803:
            key.gate = toncm_to_paskal(MEASUREMENT);
            break;
        case 804:
            key.gate = toncm_to_kpaskal(MEASUREMENT);
            break;
        case 805:
            key.gate = toncm_to_Mpaskal(MEASUREMENT);
            break;
        case 806:
            key.gate = toncm_to_gcm(MEASUREMENT);
            break;
         case 807:
            key.gate = toncm_to_kgcm(MEASUREMENT);
            break;
        case 809:
            key.gate = toncm_to_kgm(MEASUREMENT);
            break;
        case 810:
            key.gate = toncm_to_tonm(MEASUREMENT);
            break;
        case 811:
            key.gate = toncm_to_newtoncm(MEASUREMENT);
            break;
         case 812:
            key.gate = toncm_to_newtonm(MEASUREMENT);
            break;

        case 901:
            key.gate = kgm_to_bar(MEASUREMENT);
            break;
        case 902:
            key.gate = kgm_to_mbar(MEASUREMENT);
            break;
		case 903:
            key.gate = kgm_to_paskal(MEASUREMENT);
            break;
         case 904:
            key.gate = kgm_to_kpaskal(MEASUREMENT);
            break;
        case 905:
            key.gate = kgm_to_Mpaskal(MEASUREMENT);
            break;
        case 906:
            key.gate = kgm_to_gcm(MEASUREMENT);
            break;
        case 907:
            key.gate = kgm_to_kgcm(MEASUREMENT);
            break;
         case 908:
            key.gate = kgm_to_toncm(MEASUREMENT);
            break;
        case 910:
            key.gate = kgm_to_tonm(MEASUREMENT);
            break;
        case 911:
            key.gate = kgm_to_newtoncm(MEASUREMENT);
            break;
        case 912:
            key.gate = kgm_to_newtonm(MEASUREMENT);
            break;
         case 1001:
            key.gate = tonm_to_bar(MEASUREMENT);
            break;
        case 1002:
            key.gate = tonm_to_mbar(MEASUREMENT);
            break;
        case 1003:
            key.gate = tonm_to_paskal(MEASUREMENT);
            break;
        case 1004:
            key.gate = tonm_to_kpaskal(MEASUREMENT);
            break;
         case 1005:
            key.gate = tonm_to_Mpaskal(MEASUREMENT);
            break;
        case 1006:
            key.gate = tonm_to_gcm(MEASUREMENT);
            break;
        case 1007:
            key.gate = tonm_to_kgcm(MEASUREMENT);
            break;
        case 1008:
            key.gate = tonm_to_toncm(MEASUREMENT);
            break;
         case 1009:
            key.gate = tonm_to_kgm(MEASUREMENT);
            break;
        case 1011:
            key.gate = tonm_to_newtoncm(MEASUREMENT);
            break;
        case 1012:
            key.gate = tonm_to_newtonm(MEASUREMENT);
            break;
        case 1101:
            key.gate = newtoncm_to_bar(MEASUREMENT);
            break;
         case 1102:
            key.gate = newtoncm_to_mbar(MEASUREMENT);
            break;
        case 1103:
            key.gate = newtoncm_to_paskal(MEASUREMENT);
            break;
        case 1104:
            key.gate = newtoncm_to_kpaskal(MEASUREMENT);
            break;
        case 1105:
            key.gate = newtoncm_to_Mpaskal(MEASUREMENT);
            break;
         case 1106:
            key.gate = newtoncm_to_gcm(MEASUREMENT);
            break;
        case 1107:
            key.gate = newtoncm_to_kgcm(MEASUREMENT);
            break;
        case 1108:
            key.gate = newtoncm_to_toncm(MEASUREMENT);
            break;
        case 1109:
            key.gate = newtoncm_to_kgm(MEASUREMENT);
            break;
         case 1110:
            key.gate = newtoncm_to_tonm(MEASUREMENT);
            break;
        case 1112:
            key.gate = newtoncm_to_newtonm(MEASUREMENT);
            break;
        case 1201:
            key.gate = newtonm_to_bar(MEASUREMENT);
            break;
        case 1202:
            key.gate = newtonm_to_mbar(MEASUREMENT);
            break;
         case 1203:
            key.gate = newtonm_to_paskal(MEASUREMENT);
            break;
        case 1204:
            key.gate = newtonm_to_kpaskal(MEASUREMENT);
            break;
        case 1205:
            key.gate = newtonm_to_Mpaskal(MEASUREMENT);
            break;
        case 1206:
            key.gate = newtonm_to_gcm(MEASUREMENT);
            break;
         case 1207:
            key.gate = newtonm_to_kgcm(MEASUREMENT);
            break;
        case 1208:
            key.gate = newtonm_to_toncm(MEASUREMENT);
            break;
        case 1209:
            key.gate = newtonm_to_kgm(MEASUREMENT);
            break;
        case 1210:
            key.gate = newtonm_to_tonm(MEASUREMENT);
            break;
         case 1211:
            key.gate = newtonm_to_newtoncm(MEASUREMENT);
            break;
      
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
