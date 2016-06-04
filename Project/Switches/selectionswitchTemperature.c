#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */


double selectionswitchTemperature(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Цельсии;\n"
           "2 - Фаренгейты;\n"
           "3 - Кельвины;\n"
           "4 - Реомюры;\n"
           "5 - Ранкины;\n"
           "6 - Ньютоны;\n"
           "7 - Рёмеры;\n"
           "8 - Делисле;\n \t");
    key.input_choice = parsing_id(key.in);
    while(key.input_choice > 8|| key.input_choice == 0)
    {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        key.input_choice = parsing_id(key.in);
    }

    switch(key.input_choice)
    {
    case 1:
        while(MEASUREMENT < -273.15)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 2:
        while(MEASUREMENT < -459.67)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 3:
        while(MEASUREMENT < 0)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 4:
        while(MEASUREMENT < -218.52)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 5:
        while(MEASUREMENT < 0.33)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 6:
        while(MEASUREMENT < -90.14)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 7:
        while(MEASUREMENT < -135.9)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    case 8:
        while(MEASUREMENT > 559.72)
        {
            printf("Температура вне допустимых пределов. Повторите ввод: \n");
            scanf("%lf", &MEASUREMENT);
        }
        break;
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Цельсии;\n"
           "2 - Фаренгейты;\n"
           "3 - Кельвины;\n"
           "4 - Реомюры;\n"
           "5 - Ранкины;\n"
           "6 - Ньютоны;\n"
           "7 - Рёмеры;\n"
           "8 - Делисле;\n \t");
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.output_choice > 8 || key.output_choice == 0 )
    {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        key.output_choice = parsing_id(key.out);
    }

    if(key.input_choice < 10 && key.output_choice < 10)
        key.id = key.input_choice * 10 + key.output_choice;
    if(key.input_choice == 10 && key.output_choice <= 10)
        key.id = key.input_choice * 100 + key.output_choice;
    if(key.input_choice < 10 && key.output_choice == 10)
        key.id = key.input_choice * 100 + key.output_choice;

    switch(key.id)
    {
    //Цельсий
    case 12:
        key.gate = Kelvins_TO_Fahrenheits(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    case 13:
        key.gate = Celsius_TO_Kelvins(MEASUREMENT);
        break;
    case 14:
        key.gate = Kelvins_TO_Reaumurs(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    case 15:
        key.gate = Kelvins_TO_Rankines(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    case 16:
        key.gate = Kelvins_TO_Newtons(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    case 17:
        key.gate = Kelvins_TO_Romers(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    case 18:
        key.gate = Kelvins_TO_Delisles(Celsius_TO_Kelvins(MEASUREMENT));
        break;
    //Фаренгейт
    case 23:
        key.gate = Fahrenheits_TO_Kelvins(MEASUREMENT);
        break;
    case 21:
        key.gate = Kelvins_TO_Celsius(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    case 24:
        key.gate = Kelvins_TO_Reaumurs(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    case 25:
        key.gate = Kelvins_TO_Rankines(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    case 26:
        key.gate = Kelvins_TO_Newtons(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    case 27:
        key.gate = Kelvins_TO_Romers(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    case 28:
        key.gate = Kelvins_TO_Delisles(Fahrenheits_TO_Kelvins(MEASUREMENT));
        break;
    //Кельвин
    case 32:
        key.gate = Kelvins_TO_Fahrenheits(MEASUREMENT);
        break;
    case 31:
        key.gate = Kelvins_TO_Celsius(MEASUREMENT);
        break;
    case 34:
        key.gate = Kelvins_TO_Reaumurs(MEASUREMENT);
        break;
    case 35:
        key.gate = Kelvins_TO_Rankines(MEASUREMENT);
        break;
    case 36:
        key.gate = Kelvins_TO_Newtons(MEASUREMENT);
        break;
    case 37:
        key.gate = Kelvins_TO_Romers(MEASUREMENT);
        break;
    case 38:
        key.gate = Kelvins_TO_Delisles(MEASUREMENT);
        break;
    //Реомюр
    case 43:
        key.gate = Reaumurs_TO_Kelvins(MEASUREMENT);
        break;
    case 42:
        key.gate = Kelvins_TO_Fahrenheits(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    case 41:
        key.gate = Kelvins_TO_Celsius(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    case 45:
        key.gate = Kelvins_TO_Rankines(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    case 46:
        key.gate = Kelvins_TO_Newtons(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    case 47:
        key.gate = Kelvins_TO_Romers(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    case 48:
        key.gate = Kelvins_TO_Delisles(Reaumurs_TO_Kelvins(MEASUREMENT));
        break;
    //Ранкин
    case 54:
        key.gate = Kelvins_TO_Reaumurs(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    case 53:
        key.gate = Rankines_TO_Kelvins(MEASUREMENT);
        break;
    case 52:
        key.gate = Kelvins_TO_Fahrenheits(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    case 51:
        key.gate = Kelvins_TO_Celsius(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    case 56:
        key.gate = Kelvins_TO_Newtons(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    case 57:
        key.gate = Kelvins_TO_Romers(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    case 58:
        key.gate = Kelvins_TO_Delisles(Rankines_TO_Kelvins(MEASUREMENT));
        break;
    //Ньютон
    case 65:
        key.gate = Kelvins_TO_Rankines(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    case 64:
        key.gate = Kelvins_TO_Reaumurs(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    case 63:
        key.gate = Newtons_TO_Kelvins(MEASUREMENT);
        break;
    case 62:
        key.gate = Kelvins_TO_Fahrenheits(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    case 61:
        key.gate = Kelvins_TO_Celsius(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    case 67:
        key.gate = Kelvins_TO_Romers(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    case 68:
        key.gate = Kelvins_TO_Delisles(Newtons_TO_Kelvins(MEASUREMENT));
        break;
    //Рёмер
    case 76:
        key.gate = Kelvins_TO_Newtons(Romers_TO_Kelvins(MEASUREMENT));
        break;
    case 75:
        key.gate = Kelvins_TO_Rankines(Romers_TO_Kelvins(MEASUREMENT));
        break;
    case 74:
        key.gate = Kelvins_TO_Reaumurs(Romers_TO_Kelvins(MEASUREMENT));
        break;
    case 73:
        key.gate = Romers_TO_Kelvins(MEASUREMENT);
        break;
    case 72:
        key.gate = Kelvins_TO_Fahrenheits(Romers_TO_Kelvins(MEASUREMENT));
        break;
    case 71:
        key.gate = Kelvins_TO_Celsius(Romers_TO_Kelvins(MEASUREMENT));
        break;
    case 78:
        key.gate = Kelvins_TO_Delisles(Romers_TO_Kelvins(MEASUREMENT));
        break;
    //Делисле
    case 87:
        key.gate = Kelvins_TO_Romers(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    case 86:
        key.gate = Kelvins_TO_Newtons(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    case 85:
        key.gate = Kelvins_TO_Rankines(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    case 84:
        key.gate = Kelvins_TO_Reaumurs(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    case 83:
        key.gate = Delisles_TO_Kelvins(MEASUREMENT);
        break;
    case 82:
        key.gate = Kelvins_TO_Fahrenheits(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    case 81:
        key.gate = Kelvins_TO_Celsius(Delisles_TO_Kelvins(MEASUREMENT));
        break;
    default:
        printf("Не введено значение конвертируемой величины, "
               "или Вы пытаетесь конвертировать в величину, которую уже преобразуете\n");
        break;
    }

    return key.gate;
}
