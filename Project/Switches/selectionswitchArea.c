#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchArea(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Квадратные метры;\n"
           "2 - Гектары;\n"
           "3 - Ары;\n"
           "4 - Квадратные километры;\n"
           "5 - Акры;\n"
		   "6 - Квадратный сантиметр;\n"
           "7 - Квадратный дюйм;\n"
           "8 - Квадратный миллиметр;\n");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Квадратные метры;\n"
           "2 - Гектары;\n"
           "3 - Ары;\n"
           "4 - Квадратные километры;\n"
           "5 - Акры;\n"
		   "6 - Квадратный сантиметр;\n"
           "7 - Квадратный дюйм;\n"
           "8 - Квадратный миллиметр;\n");
    key.output_choice = parsing_id(key.out);
    //scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 8 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;
    switch(key.id) {
        case 12:
        	key.gate = SquareMeter2Hectare(MEASUREMENT);
            break;
        case 13:
            key.gate = SquareMeter2Ar(MEASUREMENT);
            break;
        case 14:
            key.gate = SquareMeter2SquarekMeter(MEASUREMENT);
            break;
        case 15:
            key.gate = SquareMeter2Acr(MEASUREMENT);
            break;
        case 16:
            key.gate = SquareMeter2SquaresMeter(MEASUREMENT);
            break;
        case 17:
            key.gate = SquareMeter2SquareInch(MEASUREMENT);
            break;
        case 18:
            key.gate = SquareMeter2SquaremMeter(MEASUREMENT);
            break;
        case 21:
            key.gate = Hectare2SquareMeter(MEASUREMENT);
            break;
        case 23:
            key.gate = SquareMeter2Ar(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 24:
            key.gate = SquareMeter2SquarekMeter(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 25:
            key.gate = SquareMeter2Acr(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 26:
            key.gate = SquareMeter2SquaresMeter(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 27:
            key.gate = SquareMeter2SquareInch(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 28:
            key.gate = SquareMeter2SquaremMeter(Hectare2SquareMeter(MEASUREMENT));
            break;
        case 31:
            key.gate = Ar2SquareMeter(MEASUREMENT);
            break;
        case 32:
            key.gate = SquareMeter2Hectare(Ar2SquareMeter(MEASUREMENT));
            break;
        case 34:
            key.gate = SquareMeter2SquarekMeter(Ar2SquareMeter(MEASUREMENT));
            break;
        case 35:
            key.gate = SquareMeter2Acr(Ar2SquareMeter(MEASUREMENT));
            break;
        case 36:
            key.gate = SquareMeter2SquaresMeter(Ar2SquareMeter(MEASUREMENT));
            break;
        case 37:
            key.gate = SquareMeter2SquareInch(Ar2SquareMeter(MEASUREMENT));
            break;
        case 38:
            key.gate = SquareMeter2SquaremMeter(Ar2SquareMeter(MEASUREMENT));
            break;
        case 41:
            key.gate = SquarekMeter2SquareMeter(MEASUREMENT);
            break;
        case 42:
            key.gate = SquareMeter2Hectare(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 43:
            key.gate = SquareMeter2Ar(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 45:
            key.gate = SquareMeter2Acr(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 46:
            key.gate = SquareMeter2SquaresMeter(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 47:
            key.gate = SquareMeter2SquareInch(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 48:
            key.gate = SquareMeter2SquaremMeter(SquarekMeter2SquareMeter(MEASUREMENT));
            break;
        case 51:
            key.gate = Acr2SquareMeter(MEASUREMENT);
            break;
        case 52:
            key.gate = SquareMeter2Hectare(Acr2SquareMeter(MEASUREMENT));
            break;
        case 53:
            key.gate = SquareMeter2Ar(Acr2SquareMeter(MEASUREMENT));
            break;
        case 54:
            key.gate = SquareMeter2SquarekMeter(Acr2SquareMeter(MEASUREMENT));
            break;
        case 56:
            key.gate = SquareMeter2SquaresMeter(Acr2SquareMeter(MEASUREMENT));
            break;
        case 57:
            key.gate = SquareMeter2SquareInch(Acr2SquareMeter(MEASUREMENT));
            break;
        case 58:
            key.gate = SquareMeter2SquaremMeter(Acr2SquareMeter(MEASUREMENT));
            break;
        case 61:
            key.gate = SquaresMeter2SquareMeter(MEASUREMENT);
            break;
        case 62:
            key.gate = SquareMeter2Hectare(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 63:
            key.gate = SquareMeter2Ar(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 64:
            key.gate = SquareMeter2SquarekMeter(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 65:
            key.gate = SquareMeter2Acr(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 67:
            key.gate = SquareMeter2SquareInch(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 68:
            key.gate = SquareMeter2SquaremMeter(SquaresMeter2SquareMeter(MEASUREMENT));
            break;
        case 71:
            key.gate = SquareInch2SquareMeter(MEASUREMENT);
            break;
        case 72:
            key.gate = SquareMeter2Hectare(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 73:
            key.gate = SquareMeter2Ar(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 74:
            key.gate = SquareMeter2SquarekMeter(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 75:
            key.gate = SquareMeter2Acr(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 76:
            key.gate = SquareMeter2SquaresMeter(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 78:
            key.gate = SquareMeter2SquaremMeter(SquareInch2SquareMeter(MEASUREMENT));
            break;
        case 81:
            key.gate = SquaremMeter2SquareMeter(MEASUREMENT);
            break;
        case 82:
            key.gate = SquareMeter2Hectare(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        case 83:
            key.gate = SquareMeter2Ar(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        case 84:
            key.gate = SquareMeter2SquarekMeter(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        case 85:
            key.gate = SquareMeter2Acr(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        case 86:
            key.gate = SquareMeter2SquaresMeter(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        case 87:
            key.gate = SquareMeter2SquareInch(SquaremMeter2SquareMeter(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }
	
    return key.gate;
}
