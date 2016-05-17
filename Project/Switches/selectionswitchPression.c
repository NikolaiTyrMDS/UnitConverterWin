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
           " 3 - Паскаль;\n"
           " 4 - Килопаскль;\n"
           " 5 - Мегапаскаль;\n"
           " 6 - Грамм/сантиметр;\n"
           " 7 - Килограмм/сантиметр;\n"
           " 8 - Тонна/сантиметр;\n"
           " 9 - Килограмм/метр;\n"
           " 10 - Тонна/метр;\n"
           " 11 - Ньютон/сантиметр;\n"
           " 12 - Ньютон/метр;\n \t");
    //scanf("%d", &key.input_choice);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 12 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           " 1 - Бар;\n"
           " 2 - Миллибар;\n"
           " 3 - Паскаль;\n"
           " 4 - Килопаскль;\n"
           " 5 - Мегапаскаль;\n"
           " 6 - Грамм/сантиметр;\n"
           " 7 - Килограмм/сантиметр;\n"
           " 8 - Тонна/сантиметр;\n"
           " 9 - Килограмм/метр;\n"
           " 10 - Тонна/метр;\n"
           " 11 - Ньютон/сантиметр;\n"
           " 12 - Ньютон/метр;\n \t");
    //scanf("%d", &key.output_choice);
    key.output_choice = parsing_id(key.out);
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
         case 111:
            key.gate = bar_to_newtoncm(MEASUREMENT);
            break;
        case 112:
            key.gate = bar_to_newtonm(MEASUREMENT);
            break;
        case 201:
            key.gate = mbar_to_bar(MEASUREMENT);
            break;
         case 203:
            key.gate = bar_to_paskal(mbar_to_bar(MEASUREMENT));
            break;
        case 204:
            key.gate = bar_to_kpaskal(mbar_to_bar(MEASUREMENT));
            break;
        case 205:
            key.gate = bar_to_Mpaskal(mbar_to_bar(MEASUREMENT));
            break;
         case 206:
            key.gate = bar_to_gcm(mbar_to_bar(MEASUREMENT));
            break;
        case 207:
            key.gate = bar_to_kgcm(mbar_to_bar(MEASUREMENT));
            break;
        case 208:
            key.gate = bar_to_toncm(mbar_to_bar(MEASUREMENT));
            break;
         case 209:
            key.gate = bar_to_kgm(mbar_to_bar(MEASUREMENT));
            break;
        case 210:
            key.gate = bar_to_tonm(mbar_to_bar(MEASUREMENT));
            break;
        case 211:
            key.gate = bar_to_newtoncm(mbar_to_bar(MEASUREMENT));
            break;
         case 212:
            key.gate = bar_to_newtonm(mbar_to_bar(MEASUREMENT));
            break;
        case 301:
            key.gate = paskal_to_bar(MEASUREMENT);
            break;
        case 302:
            key.gate = bar_to_mbar(paskal_to_bar(MEASUREMENT));
            break;
         case 304:
            key.gate = bar_to_kpaskal(paskal_to_bar(MEASUREMENT));
            break;
         case 305:
            key.gate = bar_to_Mpaskal(paskal_to_bar(MEASUREMENT));
            break;
        case 306:
            key.gate = bar_to_gcm(paskal_to_bar(MEASUREMENT));
            break;
        case 307:
            key.gate = bar_to_kgcm(paskal_to_bar(MEASUREMENT));
            break;
         case 308:
            key.gate = bar_to_toncm(paskal_to_bar(MEASUREMENT));
            break;
        case 309:
            key.gate = bar_to_kgm(paskal_to_bar(MEASUREMENT));
            break;
        case 310:
            key.gate = bar_to_tonm(paskal_to_bar(MEASUREMENT));
            break;
         case 311:
            key.gate = bar_to_newtoncm(paskal_to_bar(MEASUREMENT));
            break;
        case 312:
            key.gate = bar_to_newtonm(paskal_to_bar(MEASUREMENT));
            break;
            
        case 401:
            key.gate = kpaskal_to_bar(MEASUREMENT);
            break;
         case 402:
            key.gate = bar_to_mbar(kpaskal_to_bar(MEASUREMENT));
            break;
        case 403:
            key.gate = bar_to_paskal(kpaskal_to_bar(MEASUREMENT));
            break;
        case 405:
            key.gate = bar_to_Mpaskal(kpaskal_to_bar(MEASUREMENT));
            break;
         case 406:
            key.gate = bar_to_gcm(kpaskal_to_bar(MEASUREMENT));
            break;
        case 407:
            key.gate = bar_to_kgcm(kpaskal_to_bar(MEASUREMENT));
            break;
        case 408:
            key.gate = bar_to_toncm(kpaskal_to_bar(MEASUREMENT));
            break;
         case 409:
            key.gate = bar_to_kgm(kpaskal_to_bar(MEASUREMENT));
            break;
        case 410:
            key.gate = bar_to_tonm(kpaskal_to_bar(MEASUREMENT));
            break;
        case 411:
            key.gate = bar_to_newtoncm(kpaskal_to_bar(MEASUREMENT));
            break;
         case 412:
            key.gate = bar_to_newtonm(kpaskal_to_bar(MEASUREMENT));
            break;
         case 501:
            key.gate = Mpaskal_to_bar(MEASUREMENT);
            break;
        case 502:
            key.gate = bar_to_mbar(Mpaskal_to_bar(MEASUREMENT));
            break;
         case 503:
            key.gate = bar_to_paskal(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 504:
            key.gate = bar_to_kpaskal(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 506:
            key.gate = bar_to_gcm(Mpaskal_to_bar(MEASUREMENT));
            break;
         case 507:
            key.gate = bar_to_kgcm(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 508:
            key.gate = bar_to_toncm(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 509:
            key.gate = bar_to_kgm(Mpaskal_to_bar(MEASUREMENT));
            break;
         case 510:
            key.gate = bar_to_tonm(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 511:
            key.gate = bar_to_newtoncm(Mpaskal_to_bar(MEASUREMENT));
            break;
        case 512:
            key.gate = bar_to_newtonm(Mpaskal_to_bar(MEASUREMENT));
            break;
         case 601:
            key.gate = gcm_to_bar(MEASUREMENT);
            break;
        case 602:
            key.gate = bar_to_mbar(gcm_to_bar(MEASUREMENT));
            break;
        case 603:
            key.gate = bar_to_paskal(gcm_to_bar(MEASUREMENT));
            break;
         case 604:
            key.gate = bar_to_kpaskal(gcm_to_bar(MEASUREMENT));
            break;
        case 605:
            key.gate = bar_to_Mpaskal(gcm_to_bar(MEASUREMENT));
            break;
        case 607:
            key.gate = bar_to_kgcm(gcm_to_bar(MEASUREMENT));
            break;
         case 608:
            key.gate = bar_to_toncm(gcm_to_bar(MEASUREMENT));
            break;
        case 609:
            key.gate = bar_to_kgm(gcm_to_bar(MEASUREMENT));
            break;
        case 610:
            key.gate = bar_to_tonm(gcm_to_bar(MEASUREMENT));
            break;
         case 611:
            key.gate = bar_to_newtoncm(gcm_to_bar(MEASUREMENT));
            break;
        case 612:
            key.gate = bar_to_newtonm(gcm_to_bar(MEASUREMENT));
            break;
        case 701:
            key.gate = kgcm_to_bar(MEASUREMENT);
            break;
         case 702:
            key.gate = bar_to_mbar(kgcm_to_bar(MEASUREMENT));
            break;
        case 703:
            key.gate = bar_to_paskal(kgcm_to_bar(MEASUREMENT));
            break;
        case 704:
            key.gate = bar_to_kpaskal(kgcm_to_bar(MEASUREMENT));
            break;
        case 705:
            key.gate = bar_to_Mpaskal(kgcm_to_bar(MEASUREMENT));
            break;
         case 706:
            key.gate = bar_to_gcm(kgcm_to_bar(MEASUREMENT));
            break;
        case 708:
            key.gate = bar_to_toncm(kgcm_to_bar(MEASUREMENT));
            break;
        case 709:
            key.gate = bar_to_kgm(kgcm_to_bar(MEASUREMENT));
            break;
        case 710:
            key.gate = bar_to_tonm(kgcm_to_bar(MEASUREMENT));
            break;
         case 711:
            key.gate = bar_to_newtoncm(kgcm_to_bar(MEASUREMENT));
            break;
        case 712:
            key.gate = bar_to_newtonm(kgcm_to_bar(MEASUREMENT));
            break;
        case 801:
            key.gate = toncm_to_bar(MEASUREMENT);
            break;
        case 802:
            key.gate = bar_to_mbar(toncm_to_bar(MEASUREMENT));
            break;
         case 803:
            key.gate = bar_to_paskal(toncm_to_bar(MEASUREMENT));
            break;
        case 804:
            key.gate = bar_to_kpaskal(toncm_to_bar(MEASUREMENT));
            break;
        case 805:
            key.gate = bar_to_Mpaskal(toncm_to_bar(MEASUREMENT));
            break;
        case 806:
            key.gate = bar_to_gcm(toncm_to_bar(MEASUREMENT));
            break;
         case 807:
            key.gate = bar_to_kgcm(toncm_to_bar(MEASUREMENT));
            break;
        case 809:
            key.gate = bar_to_kgm(toncm_to_bar(MEASUREMENT));
            break;
        case 810:
            key.gate = bar_to_tonm(toncm_to_bar(MEASUREMENT));
            break;
        case 811:
            key.gate = bar_to_newtoncm(toncm_to_bar(MEASUREMENT));
            break;
         case 812:
            key.gate = bar_to_newtonm(toncm_to_bar(MEASUREMENT));
            break;

        case 901:
            key.gate = kgm_to_bar(MEASUREMENT);
            break;
        case 902:
            key.gate = bar_to_mbar(kgm_to_bar(MEASUREMENT));
            break;
		case 903:
            key.gate = bar_to_paskal(kgm_to_bar(MEASUREMENT));
            break;
         case 904:
            key.gate = bar_to_kpaskal(kgm_to_bar(MEASUREMENT));
            break;
        case 905:
            key.gate = bar_to_Mpaskal(kgm_to_bar(MEASUREMENT));
            break;
        case 906:
            key.gate = bar_to_gcm(kgm_to_bar(MEASUREMENT));
            break;
        case 907:
            key.gate = bar_to_kgcm(kgm_to_bar(MEASUREMENT));
            break;
         case 908:
            key.gate = bar_to_toncm(kgm_to_bar(MEASUREMENT));
            break;
        case 910:
            key.gate = bar_to_tonm(kgm_to_bar(MEASUREMENT));
            break;
        case 911:
            key.gate = bar_to_newtoncm(kgm_to_bar(MEASUREMENT));
            break;
        case 912:
            key.gate = bar_to_newtonm(kgm_to_bar(MEASUREMENT));
            break;
         case 1001:
            key.gate = tonm_to_bar(MEASUREMENT);
            break;
        case 1002:
            key.gate = bar_to_mbar(tonm_to_bar(MEASUREMENT));
            break;
        case 1003:
            key.gate = bar_to_paskal(tonm_to_bar(MEASUREMENT));
            break;
        case 1004:
            key.gate = bar_to_kpaskal(tonm_to_bar(MEASUREMENT));
            break;
         case 1005:
            key.gate = bar_to_Mpaskal(tonm_to_bar(MEASUREMENT));
            break;
        case 1006:
            key.gate = bar_to_gcm(tonm_to_bar(MEASUREMENT));
            break;
        case 1007:
            key.gate = bar_to_kgcm(tonm_to_bar(MEASUREMENT));
            break;
        case 1008:
            key.gate = bar_to_toncm(tonm_to_bar(MEASUREMENT));
            break;
         case 1009:
            key.gate = bar_to_kgm(tonm_to_bar(MEASUREMENT));
            break;
        case 1011:
            key.gate = bar_to_newtoncm(tonm_to_bar(MEASUREMENT));
            break;
        case 1012:
            key.gate = bar_to_newtonm(tonm_to_bar(MEASUREMENT));
            break;
        case 1101:
            key.gate = newtoncm_to_bar(MEASUREMENT);
            break;
         case 1102:
            key.gate = bar_to_mbar(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1103:
            key.gate = bar_to_paskal(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1104:
            key.gate = bar_to_kpaskal(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1105:
            key.gate = bar_to_Mpaskal(newtoncm_to_bar(MEASUREMENT));
            break;
         case 1106:
            key.gate = bar_to_gcm(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1107:
            key.gate = bar_to_kgcm(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1108:
            key.gate = bar_to_toncm(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1109:
            key.gate = bar_to_kgm(newtoncm_to_bar(MEASUREMENT));
            break;
         case 1110:
            key.gate = bar_to_tonm(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1112:
            key.gate = bar_to_newtonm(newtoncm_to_bar(MEASUREMENT));
            break;
        case 1201:
            key.gate = newtonm_to_bar(MEASUREMENT);
            break;
        case 1202:
            key.gate = bar_to_mbar(newtonm_to_bar(MEASUREMENT));
            break;
         case 1203:
            key.gate = bar_to_paskal(newtonm_to_bar(MEASUREMENT));
            break;
        case 1204:
            key.gate = bar_to_kpaskal(newtonm_to_bar(MEASUREMENT));
            break;
        case 1205:
            key.gate = bar_to_Mpaskal(newtonm_to_bar(MEASUREMENT));
            break;
        case 1206:
            key.gate = bar_to_gcm(newtonm_to_bar(MEASUREMENT));
            break;
         case 1207:
            key.gate = bar_to_kgcm(newtonm_to_bar(MEASUREMENT));
            break;
        case 1208:
            key.gate = bar_to_toncm(newtonm_to_bar(MEASUREMENT));
            break;
        case 1209:
            key.gate = bar_to_kgm(newtonm_to_bar(MEASUREMENT));
            break;
        case 1210:
            key.gate = bar_to_tonm(newtonm_to_bar(MEASUREMENT));
            break;
         case 1211:
            key.gate = bar_to_newtoncm(newtonm_to_bar(MEASUREMENT));
            break;
      
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
