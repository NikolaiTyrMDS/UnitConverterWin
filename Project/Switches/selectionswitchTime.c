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
           " 10 - Века;\n \t");
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        key.input_choice = parsing_id(key.in);
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
           " 10 - Века;\n \t");
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice > 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        key.output_choice = parsing_id(key.out);
    }

    key.id = key.input_choice * 100 + key.output_choice;

    //printf("ID равно %d", key.id);

    switch(key.id) {
        case 102:
            key.gate = min_to_mksec(nsec_to_min(MEASUREMENT));
            break;
        case 103:
            key.gate = min_to_msec(nsec_to_min(MEASUREMENT));
            break;
        case 104:
            key.gate = min_to_sec(nsec_to_min(MEASUREMENT));
            break;
        case 105:
            key.gate = nsec_to_min(MEASUREMENT);
            break;
        case 106:
            key.gate = min_to_chas(nsec_to_min(MEASUREMENT));
            break;
        case 107:
            key.gate = min_to_sut(nsec_to_min(MEASUREMENT));
            break;
        case 108:
            key.gate = min_to_week(nsec_to_min(MEASUREMENT));
            break;
        case 109:
            key.gate = min_to_year(nsec_to_min(MEASUREMENT));
            break;
        case 110:
            key.gate = min_to_vek(nsec_to_min(MEASUREMENT));
            break;
        case 201:
            key.gate = min_to_nsec(mksec_to_min(MEASUREMENT));
            break;
        case 203:
            key.gate = min_to_msec(mksec_to_min(MEASUREMENT));
            break;
        case 204:
            key.gate = min_to_sec(mksec_to_min(MEASUREMENT));
            break;
        case 205:
            key.gate = mksec_to_min(MEASUREMENT);
            break;
        case 206:
            key.gate = min_to_chas(mksec_to_min(MEASUREMENT));
            break;
        case 207:
            key.gate = min_to_sut(mksec_to_min(MEASUREMENT));
            break;
        case 208:
            key.gate = min_to_week(mksec_to_min(MEASUREMENT));
            break;
        case 209:
            key.gate = min_to_year(mksec_to_min(MEASUREMENT));
            break;
        case 210:
            key.gate = min_to_vek(mksec_to_min(MEASUREMENT));
            break;
        case 301:
            key.gate = min_to_nsec(msec_to_min(MEASUREMENT));
            break;
        case 302:
            key.gate = min_to_mksec(msec_to_min(MEASUREMENT));
            break;
        case 304:
            key.gate = min_to_sec(msec_to_min(MEASUREMENT));
            break;
        case 305:
            key.gate = msec_to_min(MEASUREMENT);
            break;
        case 306:
            key.gate = min_to_chas(msec_to_min(MEASUREMENT));
            break;
        case 307:
            key.gate = min_to_sut(msec_to_min(MEASUREMENT));
            break;
        case 308:
            key.gate = min_to_week(msec_to_min(MEASUREMENT));
            break;
        case 309:
            key.gate = min_to_year(msec_to_min(MEASUREMENT));
            break;
        case 310:
            key.gate = min_to_vek(msec_to_min(MEASUREMENT));
            break;
        case 401:
            key.gate = min_to_nsec(sec_to_min(MEASUREMENT));
            break;
        case 402:
            key.gate = min_to_mksec(sec_to_min(MEASUREMENT));
            break;
        case 403:
            key.gate = min_to_msec(sec_to_min(MEASUREMENT));
            break;
        case 405:
            key.gate = sec_to_min(MEASUREMENT);
            break;
        case 406:
            key.gate = min_to_chas(sec_to_min(MEASUREMENT));
            break;
        case 407:
            key.gate = min_to_sut(sec_to_min(MEASUREMENT));
            break;
        case 408:
            key.gate = min_to_week(sec_to_min(MEASUREMENT));
            break;
        case 409:
            key.gate = min_to_year(sec_to_min(MEASUREMENT));
            break;
        case 410:
			key.gate = min_to_vek(sec_to_min(MEASUREMENT));
            break;
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
            key.gate = min_to_nsec(chas_to_min(MEASUREMENT));
            break;
        case 602:
            key.gate = min_to_mksec(chas_to_min(MEASUREMENT));
            break;
        case 603:
            key.gate = min_to_msec(chas_to_min(MEASUREMENT));
            break;
        case 604:
            key.gate = min_to_sec(chas_to_min(MEASUREMENT));
            break;
        case 605:
            key.gate = chas_to_min(MEASUREMENT);
            break;
        case 607:
            key.gate = min_to_sut(chas_to_min(MEASUREMENT));
            break;
        case 608:
            key.gate = min_to_week(chas_to_min(MEASUREMENT));
            break;
        case 609:
            key.gate = min_to_year(chas_to_min(MEASUREMENT));
            break;
        case 610:
            key.gate = min_to_vek(chas_to_min(MEASUREMENT));
            break;
        case 701:
            key.gate = min_to_nsec(sut_to_min(MEASUREMENT));
            break;
        case 702:
            key.gate = min_to_mksec(sut_to_min(MEASUREMENT));
            break;
        case 703:
            key.gate = min_to_msec(sut_to_min(MEASUREMENT));
            break;
        case 704:
            key.gate = min_to_sec(sut_to_min(MEASUREMENT));
            break;
        case 705:
            key.gate = sut_to_min(MEASUREMENT);
            break;
        case 706:
            key.gate = min_to_chas(sut_to_min(MEASUREMENT));
            break;
        case 708:
            key.gate = min_to_week(sut_to_min(MEASUREMENT));
            break;
        case 709:
            key.gate = min_to_year(sut_to_min(MEASUREMENT));
            break;
        case 710:
            key.gate = min_to_vek(sut_to_min(MEASUREMENT));
            break;
        case 801:
            key.gate = min_to_nsec(week_to_min(MEASUREMENT));
            break;
        case 802:
            key.gate = min_to_mksec(week_to_min(MEASUREMENT));
            break;
        case 803:
            key.gate = min_to_msec(week_to_min(MEASUREMENT));
            break;
        case 804:
            key.gate = min_to_sec(week_to_min(MEASUREMENT));
            break;
        case 805:
            key.gate = week_to_min(MEASUREMENT);
            break;
        case 806:
            key.gate = min_to_chas(week_to_min(MEASUREMENT));
            break;
        case 807:
            key.gate = min_to_sut(week_to_min(MEASUREMENT));
            break;
        case 809:
            key.gate = min_to_year(week_to_min(MEASUREMENT));
            break;
        case 810:
            key.gate = min_to_vek(week_to_min(MEASUREMENT));
            break;
        case 901:
            key.gate = min_to_nsec(year_to_min(MEASUREMENT));
            break;
        case 902:
            key.gate = min_to_mksec(year_to_min(MEASUREMENT));
            break;
        case 903:
            key.gate = min_to_msec(year_to_min(MEASUREMENT));
            break;
        case 904:
            key.gate = min_to_sec(year_to_min(MEASUREMENT));
            break;
        case 905:
            key.gate = year_to_min(MEASUREMENT);
            break;
        case 906:
            key.gate = min_to_chas(year_to_min(MEASUREMENT));
            break;
        case 907:
            key.gate = min_to_sut(year_to_min(MEASUREMENT));
            break;
        case 908:
            key.gate = min_to_week(year_to_min(MEASUREMENT));
            break;
        case 910:
            key.gate = min_to_vek(year_to_min(MEASUREMENT));
            break;
        case 1001:
            key.gate = min_to_nsec(vek_to_min(MEASUREMENT));
            break;
        case 1002:
            key.gate = min_to_mksec(vek_to_min(MEASUREMENT));
            break;
        case 1003:
            key.gate = min_to_msec(vek_to_min(MEASUREMENT));
            break;
        case 1004:
            key.gate = min_to_sec(vek_to_min(MEASUREMENT));
            break;
        case 1005:
            key.gate = vek_to_min(MEASUREMENT);
            break;
        case 1006:
            key.gate = min_to_chas(vek_to_min(MEASUREMENT));
            break;
        case 1007:
            key.gate = min_to_sut(vek_to_min(MEASUREMENT));
            break;
        case 1008:
            key.gate = min_to_week(vek_to_min(MEASUREMENT));
            break;
        case 1009:
            key.gate = min_to_year(vek_to_min(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
