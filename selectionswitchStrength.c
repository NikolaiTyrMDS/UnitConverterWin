#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchAngle(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Ньютон;\n"
           "2 - Килоньютон;\n"
           "3 - Миллиньютон;\n"
           "4 - Меганьютон;\n"
           "5 - Микроньютон;\n"
           "6 - Килограмм-сила;\n"
           "7 - Фунт-сила;\n\t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Ньютон;\n"
           "2 - Килоньютон;\n"
           "3 - Миллиньютон;\n"
           "4 - Меганьютон;\n"
           "5 - Микроньютон;\n"
           "6 - Килограмм-сила;\n"
           "7 - Фунт-сила;\n\t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }
key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = Newton2kNewton(MEASUREMENT);
            break;
        case 13:
            key.gate = Newton2mNewton(MEASUREMENT);
            break;
        case 14:
            key.gate = Newton2MgNewton(MEASUREMENT);
            break;
        case 15:
            key.gate = Newton2MkNewton(MEASUREMENT);
            break;
        case 16:
            key.gate = Newton2kgsNewton(MEASUREMENT);
            break;
        case 17:
            key.gate = Newton2fsNewton(MEASUREMENT);
            break;
        case 21:
            key.gate = kNewton2Newton(MEASUREMENT);
            break;
        case 23:
            key.gate = kNewton2mNewton(MEASUREMENT);
            break;
        case 24:
            key.gate = kNewton2MgNewton(MEASUREMENT);
            break;
        case 25:
            key.gate = kNewton2MkNewton(MEASUREMENT);
            break;
        case 26:
            key.gate = kNewton2kgsNewton(MEASUREMENT);
            break;
        case 27:
            key.gate = kNewton2fsNewton(MEASUREMENT);
            break;
        case 31:
            key.gate = mNewton2Newton(MEASUREMENT);
            break;
        case 32:
            key.gate = mNewton2kNewton(MEASUREMENT);
            break;
        case 34:
            key.gate = mNewton2MgNewton(MEASUREMENT);
            break;
        case 35:
            key.gate = mNewton2MkNewton(MEASUREMENT);
            break;
        case 36:
            key.gate = mNewton2kgsNewton(MEASUREMENT);
            break;
        case 37:
            key.gate = mNewton2fsNewton(MEASUREMENT);
            break;
        case 41:
            key.gate = MgNewton2Newton(MEASUREMENT);
            break;
        case 42:
            key.gate = MgNewton2kNewton(MEASUREMENT);
            break;
        case 43:
            key.gate = MgNewton2mNewton(MEASUREMENT);
            break;
        case 45:
            key.gate = MgNewton2MkNewton(MEASUREMENT);
            break;
        case 46:
            key.gate = MgNewton2kgsNewton(MEASUREMENT);
            break;
        case 47:
            key.gate = MgNewton2fsNewton(MEASUREMENT);
            break;
        case 51:
            key.gate = MkNewton2Newton(MEASUREMENT);
            break;
        case 52:
            key.gate = MkNewton2kNewton(MEASUREMENT);
            break;
        case 53:
            key.gate = MkNewton2mNewton(MEASUREMENT);
            break;
        case 54:
            key.gate = MkNewton2MgNewton(MEASUREMENT);
            break;
        case 56:
            key.gate = MkNewton2kgsNewton(MEASUREMENT);
            break;
        case 57:
            key.gate = MkNewton2fsNewton(MEASUREMENT);
            break;
        case 61:
            key.gate = kgsNewton2Newton(MEASUREMENT);
            break;
        case 62:
            key.gate = kgsNewton2kNewton(MEASUREMENT);
            break;
        case 63:
            key.gate = kgsNewton2mNewton(MEASUREMENT);
            break;
        case 64:
            key.gate = kgsNewton2MgNewton(MEASUREMENT);
            break;
        case 65:
            key.gate = kgsNewton2MkNewton(MEASUREMENT);
            break;
        case 67:
            key.gate = kgsNewton2fsNewton(MEASUREMENT);
            break;
        case 71:
            key.gate = fsNewton2Newton(MEASUREMENT);
            break;
        case 72:
            key.gate = fsNewton2kNewton(MEASUREMENT);
            break;
        case 73:
            key.gate = fsNewton2mNewton(MEASUREMENT);
            break;
        case 74:
            key.gate = fsNewton2MgNewton(MEASUREMENT);
            break;
        case 75:
            key.gate = fsNewton2MkNewton(MEASUREMENT);
            break;
        case 76:
            key.gate = fsNewton2kgsNewton(MEASUREMENT);
            break;
        default:
            printf("I? aa?a?ii ci?ЃЂ?i?? ?iia?????o??ie a?e?ЃЂ?i?, "
                   "?e? A? ????????u ?iia?????ia??u a a?e?ЃЂ?io, ?i?i?o? o?? ???ia??co???\n");
            break;
    }

    return key.gate;
}
