#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchResistance(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Сименс;\n"
           "2 - Микроом;\n"
           "3 - Миллиом;\n"
           "4 - Ом = Вольт на ампер;\n\t");
    scanf("%s", key.in);
    key.input_choice = parsing_id(key.in);
    while(key.input_choice >= 4 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Сименс;\n"
           "2 - Микроом;\n"
           "3 - Миллиом;\n"
           "4 - Ом = Вольт на ампер;\n\t");
    scanf("%s", key.out);
    key.output_choice = parsing_id(key.out);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = OmTOuOm(SimensTOOm(MEASUREMENT));
            break;
        case 13:
            key.gate = OmTOmOm(SimensTOOm(MEASUREMENT));
            break;
        case 14:
            key.gate = SimensTOOm(MEASUREMENT);
            break;
        case 21:
            key.gate = OmTOSimens(uOmTOOm(MEASUREMENT));
            break;
        case 23:
            key.gate = OmTOmOm(uOmTOOm(MEASUREMENT));
            break;
        case 24:
            key.gate = uOmTOOm(MEASUREMENT);
            break;
        case 31:
            key.gate = OmTOSimens(mOmTOOm(MEASUREMENT));
            break;
        case 32:
            key.gate = OmTOuOm(mOmTOOm(MEASUREMENT));
            break;
        case 34:
            key.gate = mOmTOOm(MEASUREMENT);
            break;
        case 41:
            key.gate = OmTOSimens(MEASUREMENT);
            break;
        case 42:
            key.gate = OmTOuOm(MEASUREMENT);
            break;
        case 43:
            key.gate = OmTOmOm(MEASUREMENT);
            break;
    }
    return key.gate;
}
