#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchDensity(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Килограмм на кубический метр;\n"
           "2 - Килограмм на кубический сантиметр;\n"
           "3 - Грамм на кубический метр;\n"
           "4 - Грамм на кубический сантиметр;\n"
           "5 - Грамм на кубический миллиметр;\n"
		   "6 - Миллирамм на кубический миллиметр;\n");
    key.input_choice = parsing_id(key.in);
    //scanf("%d", &key.input_choice);
    while(key.input_choice >= 8 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }
    
	printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Килограмм на кубический метр;\n"
           "2 - Килограмм на кубический сантиметр;\n"
           "3 - Грамм на кубический метр;\n"
           "4 - Грамм на кубический сантиметр;\n"
           "5 - Грамм на кубический миллиметр;\n"
		   "6 - Миллирамм на кубический миллиметр;\n");
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
        	key.gate = KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(MEASUREMENT);
            break;
        case 13:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMeter(MEASUREMENT);
            break;
        case 14:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicSantimeter(MEASUREMENT);
            break;
        case 15:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMillimeter(MEASUREMENT);
            break;
        case 16:
            key.gate = KilogramsPerCubicMeter2MilligramsPerCubicMeter(MEASUREMENT);
            break;
        case 21:
            key.gate = KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 23:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMeter(KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 24:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicSantimeter(KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 25:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMillimeter(KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 26:
            key.gate = KilogramsPerCubicMeter2MilligramsPerCubicMeter(KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 31:
            key.gate = GramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT);
            break;
        case 32:
            key.gate = KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(GramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 34:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicSantimeter(GramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 35:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMillimeter(GramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 36:
            key.gate = KilogramsPerCubicMeter2MilligramsPerCubicMeter(GramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 41:
            key.gate = GramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT);
            break;
        case 42:
            key.gate = KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(GramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 43:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMeter(GramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 45:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMillimeter(GramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 46:
            key.gate = KilogramsPerCubicMeter2MilligramsPerCubicMeter(GramsPerCubicSantimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 51:
            key.gate = GramsPerCubicMillimeter2KilogramsPerCubicMeter(MEASUREMENT);
            break;
        case 52:
            key.gate = KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(GramsPerCubicMillimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 53:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMeter(GramsPerCubicMillimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 54:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicSantimeter(GramsPerCubicMillimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 56:
            key.gate = KilogramsPerCubicMeter2MilligramsPerCubicMeter(GramsPerCubicMillimeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 61:
            key.gate = MilligramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT);
            break;
        case 62:
            key.gate = KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(MilligramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 63:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMeter(MilligramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 64:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicSantimeter(MilligramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        case 65:
            key.gate = KilogramsPerCubicMeter2GramsPerCubicMillimeter(MilligramsPerCubicMeter2KilogramsPerCubicMeter(MEASUREMENT));
            break;
        default:
            printf("Не введено значение конвертируемой величины, "
                   "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
            break;
    }
	
    return key.gate;
}
