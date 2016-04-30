#include <stdio.h>
#include <math.h>
#include "../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchTime(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           " 1 - Наносекунды;\n"
           " 2 - Микросекунды;\n"
           " 3 - Миллисекунды;\n"
           " 4 - Секунды;\n"
           " 5 - Минуты;\n"
           " 6 - Часы;\n"
           " 7 - Сутки;\n"
           " 8 - Недели;\n"
           " 9 - Года;\n"
           "10 - Века;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           " 1 - Наносекунды;\n"
           " 2 - Микросекунды;\n"
           " 3 - Миллисекунды;\n"
           " 4 - Секунды;\n"
           " 5 - Минуты;\n"
           " 6 - Часы;\n"
           " 7 - Сутки;\n"
           " 8 - Недели;\n"
           " 9 - Года;\n"
           "10 - Века;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 100 + key.output_choice;

    printf("ID равно %d", key.id);

    switch(key.id) {
        case 102:
            key.gate = nsec_to_mksec(MEASUREMENT);
            break;
        case 103:
            key.gate = nsec_to_msec(MEASUREMENT);
            break;
        case 104:
            key.gate = nsec_to_sec(MEASUREMENT);
            break;
        case 105:
            key.gate = nsec_to_min(MEASUREMENT);
            break;
        case 106:
            key.gate = nsec_to_chas(MEASUREMENT);
            break;
        case 107:
            key.gate = nsec_to_sut(MEASUREMENT);
            break;
        case 108:
            key.gate = nsec_to_week(MEASUREMENT);
            break;
        case 109:
            key.gate = nsec_to_year(MEASUREMENT);
            break;
        case 110:
            key.gate = nsec_to_vek(MEASUREMENT);
            break;
        case 201:
            key.gate = mksec_to_nsec(MEASUREMENT);
            break;
        case 203:
            key.gate = mksec_to_msec(MEASUREMENT);
            break;
        case 204:
            key.gate = mksec_to_sec(MEASUREMENT);
            break;
        case 205:
            key.gate = mksec_to_min(MEASUREMENT);
            break;
        case 206:
            key.gate = mksec_to_chas(MEASUREMENT);
            break;
        case 207:
            key.gate = mksec_to_sut(MEASUREMENT);
            break;
        case 208:
            key.gate = mksec_to_week(MEASUREMENT);
            break;
        case 209:
            key.gate = mksec_to_year(MEASUREMENT);
            break;
        case 210:
            key.gate = mksec_to_vek(MEASUREMENT);
            break;
        case 301:
            key.gate = msec_to_nsec(MEASUREMENT);
            break;
        case 302:
            key.gate = msec_to_mksec(MEASUREMENT);
            break;
        case 304:
            key.gate = msec_to_sec(MEASUREMENT);
            break;
        case 305:
            key.gate = msec_to_min(MEASUREMENT);
            break;
        case 306:
            key.gate = msec_to_chas(MEASUREMENT);
            break;
        case 307:
            key.gate = msec_to_sut(MEASUREMENT);
            break;
        case 308:
            key.gate = msec_to_week(MEASUREMENT);
            break;
        case 309:
            key.gate = msec_to_year(MEASUREMENT);
            break;
        case 310:
            key.gate = msec_to_vek(MEASUREMENT);
            break;
        case 401:
            key.gate = sec_to_nsec(MEASUREMENT);
            break;
        case 402:
            key.gate = sec_to_mksec(MEASUREMENT);
            break;
        case 403:
            key.gate = sec_to_msec(MEASUREMENT);
            break;
        case 405:
            key.gate = sec_to_min(MEASUREMENT);
            break;
        case 406:
            key.gate = sec_to_chas(MEASUREMENT);
            break;
        case 407:
            key.gate = sec_to_sut(MEASUREMENT);
            break;
        case 408:
            key.gate = sec_to_week(MEASUREMENT);
            break;
        case 409:
            key.gate = sec_to_year(MEASUREMENT);
            break;
       /* case 410:
            key.gate = sec_to_vek(MEASUREMENT);
            break;*/
        case 501:
            key.gate = min_to_nsec(MEASUREMENT);
            break;
        case 502:
            key.gate = min_to_mksec(MEASUREMENT);
            break;
        case 503:
            key.gate = min_to_msec(MEASUREMENT);
            break;
        case 504:
            key.gate = min_to_sec(MEASUREMENT);
            break;
        case 506:
            key.gate = min_to_chas(MEASUREMENT);
            break;
        case 507:
            key.gate = min_to_sut(MEASUREMENT);
            break;
        case 508:
            key.gate = min_to_week(MEASUREMENT);
            break;
        case 509:
            key.gate = min_to_year(MEASUREMENT);
            break;
        case 510:
            key.gate = min_to_vek(MEASUREMENT);
            break;
        case 601:
            key.gate = chas_to_nsec(MEASUREMENT);
            break;
        case 602:
            key.gate = chas_to_mksec(MEASUREMENT);
            break;
        case 603:
            key.gate = chas_to_msec(MEASUREMENT);
            break;
        case 604:
            key.gate = chas_to_sec(MEASUREMENT);
            break;
        case 605:
            key.gate = chas_to_min(MEASUREMENT);
            break;
        case 607:
            key.gate = chas_to_sut(MEASUREMENT);
            break;
        case 608:
            key.gate = chas_to_week(MEASUREMENT);
            break;
        case 609:
            key.gate = chas_to_year(MEASUREMENT);
            break;
        case 610:
            key.gate = chas_to_vek(MEASUREMENT);
            break;
        case 701:
            key.gate = sut_to_nsec(MEASUREMENT);
            break;
        case 702:
            key.gate = sut_to_mksec(MEASUREMENT);
            break;
        case 703:
            key.gate = sut_to_msec(MEASUREMENT);
            break;
        case 704:
            key.gate = sut_to_sec(MEASUREMENT);
            break;
        case 705:
            key.gate = sut_to_min(MEASUREMENT);
            break;
        case 706:
            key.gate = sut_to_chas(MEASUREMENT);
            break;
        case 708:
            key.gate = sut_to_week(MEASUREMENT);
            break;
        case 709:
            key.gate = sut_to_year(MEASUREMENT);
            break;
        case 710:
            key.gate = sut_to_vek(MEASUREMENT);
            break;
        case 801:
            key.gate = week_to_nsec(MEASUREMENT);
            break;
        case 802:
            key.gate = week_to_mksec(MEASUREMENT);
            break;
        case 803:
            key.gate = week_to_msec(MEASUREMENT);
            break;
        case 804:
            key.gate = week_to_sec(MEASUREMENT);
            break;
        case 805:
            key.gate = week_to_min(MEASUREMENT);
            break;
        case 806:
            key.gate = week_to_chas(MEASUREMENT);
            break;
        case 807:
            key.gate = week_to_sut(MEASUREMENT);
            break;
        case 809:
            key.gate = week_to_year(MEASUREMENT);
            break;
        case 810:
            key.gate = week_to_vek(MEASUREMENT);
            break;
        case 901:
            key.gate = year_to_nsec(MEASUREMENT);
            break;
        case 902:
            key.gate = year_to_mksec(MEASUREMENT);
            break;
        case 903:
            key.gate = year_to_msec(MEASUREMENT);
            break;
        case 904:
            key.gate = year_to_sec(MEASUREMENT);
            break;
        case 905:
            key.gate = year_to_min(MEASUREMENT);
            break;
        case 906:
            key.gate = year_to_chas(MEASUREMENT);
            break;
        case 907:
            key.gate = year_to_sut(MEASUREMENT);
            break;
        case 908:
            key.gate = year_to_week(MEASUREMENT);
            break;
        case 910:
            key.gate = year_to_vek(MEASUREMENT);
            break;
        case 1001:
            key.gate = vek_to_nsec(MEASUREMENT);
            break;
        case 1002:
            key.gate = vek_to_mksec(MEASUREMENT);
            break;
        case 1003:
            key.gate = vek_to_msec(MEASUREMENT);
            break;
        case 1004:
            key.gate = vek_to_sec(MEASUREMENT);
            break;
        case 1005:
            key.gate = vek_to_min(MEASUREMENT);
            break;
        case 1006:
            key.gate = vek_to_chas(MEASUREMENT);
            break;
        case 1007:
            key.gate = vek_to_sut(MEASUREMENT);
            break;
        case 1008:
            key.gate = vek_to_week(MEASUREMENT);
            break;
        case 1009:
            key.gate = vek_to_year(MEASUREMENT);
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
