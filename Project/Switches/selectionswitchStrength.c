#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchStrength(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Ньютоны;\n"
           "2 - Килоньютоны;\n"
           "3 - Миллиньютоны;\n"
           "4 - Меганьютоны;\n"
           "5 - Микроньютоны;\n"
           "6 - Килограмм-силы;\n"
           "7 - Фунт-силы;\n\t");
    key.input_choice = parsing_id(key.in);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        key.input_choice = parsing_id(key.in);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Ньютоны;\n"
           "2 - Килоньютоны;\n"
           "3 - Миллиньютоны;\n"
           "4 - Меганьютоны;\n"
           "5 - Микроньютоны;\n"
           "6 - Килограмм-силы;\n"
           "7 - Фунт-силы;\n\t");
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice >= 8 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        key.output_choice = parsing_id(key.out);
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
            key.gate = Newton2mNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 24:
            key.gate = Newton2MgNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 25:
            key.gate = Newton2MkNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 26:
            key.gate = Newton2kgsNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 27:
            key.gate = Newton2fsNewton(kNewton2Newton(MEASUREMENT));
            break;
        case 31:
            key.gate = mNewton2Newton(MEASUREMENT);
            break;
        case 32:
            key.gate = Newton2kNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 34:
            key.gate = Newton2MgNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 35:
            key.gate = Newton2MkNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 36:
            key.gate = Newton2kgsNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 37:
            key.gate = Newton2fsNewton(mNewton2Newton(MEASUREMENT));
            break;
        case 41:
            key.gate = MgNewton2Newton(MEASUREMENT);
            break;
        case 42:
            key.gate = Newton2kNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 43:
            key.gate = Newton2mNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 45:
            key.gate = Newton2MkNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 46:
            key.gate = Newton2kgsNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 47:
            key.gate = Newton2fsNewton(MgNewton2Newton(MEASUREMENT));
            break;
        case 51:
            key.gate = MkNewton2Newton(MEASUREMENT);
            break;
        case 52:
            key.gate = Newton2kNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 53:
            key.gate = Newton2mNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 54:
            key.gate = Newton2MgNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 56:
            key.gate = Newton2kgsNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 57:
            key.gate = Newton2fsNewton(MkNewton2Newton(MEASUREMENT));
            break;
        case 61:
            key.gate = kgsNewton2Newton(MEASUREMENT);
            break;
        case 62:
            key.gate = Newton2kNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 63:
            key.gate = Newton2mNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 64:
            key.gate = Newton2MgNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 65:
            key.gate = Newton2MkNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 67:
            key.gate = Newton2fsNewton(kgsNewton2Newton(MEASUREMENT));
            break;
        case 71:
            key.gate = fsNewton2Newton(MEASUREMENT);
            break;
        case 72:
            key.gate = Newton2kNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 73:
            key.gate = Newton2mNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 74:
            key.gate = Newton2MgNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 75:
            key.gate = Newton2MkNewton(fsNewton2Newton(MEASUREMENT));
            break;
        case 76:
            key.gate = Newton2kgsNewton(fsNewton2Newton(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }

    return key.gate;
}
