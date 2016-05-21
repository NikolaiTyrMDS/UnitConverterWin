#include <stdio.h>
#include <math.h>
#include"../Headers/total.h" /* Символ '../' - escape-символ - используется для перехода на один уровень выше;
                                Этот символ используется столько раз, на сколько уровней нужно подняться; */

double selectionswitchData(double MEASUREMENT)
{
    FunctionsParameters key;

    printf("Выберите величину, из которой Вы хотите произвести конвертирование:\n"
           "1 - Кулон на килограмм;\n"
           "2 - Микрорентген;\n"
           "3 - Миллирентген;\n"
           "4 - Рентген;\n \t");
    scanf("%d", &key.input_choice);
    while(key.input_choice >= 10 || key.input_choice == 0) {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.input_choice);
    }

    printf("Выберите величину, в которую Вы хотите конвертировать Вашу величину.\n"
           "Не нужно выбирать ту же величину, что Вы выбрали в качестве конвертируемой:\n"
           "1 - Кулон на килограмм;\n"
           "2 - Микрорентген;\n"
           "3 - Миллирентген;\n"
           "4 - Рентген;\n \t");
    scanf("%d", &key.output_choice);
    while(key.output_choice == key.input_choice || key.input_choice >= 10 || key.input_choice == 0 )  {
        fprintf(stderr, "\nВы выбрали величину, которой нет в списке доступных величин, \nили Вы пытаетесь конвертировать "
                "одну и ту же величину. \nПожалуйста, сделайте корректный выбор\n\t");
        scanf("%d", &key.output_choice);
    }

    key.id = key.input_choice * 10 + key.output_choice;

    switch(key.id) {
        case 12:
            key.gate = bitsTObytes(MEASUREMENT);
            break;
        case 13:
            key.gate = bitsTOkilobytes(MEASUREMENT);
            break;
        case 14:
            key.gate = bitsTOmegabytes(MEASUREMENT);
            break;
        case 21:
            key.gate = bytesTObits(MEASUREMENT);
            break;
        case 23:
            key.gate = bitsTOkilobytes(bytesTObits(MEASUREMENT));
            break;
        case 24:
            key.gate = bitsTOmegabytes(bytesTObits(MEASUREMENT));
            break;
        case 31:
            key.gate = kilobytesTObits(MEASUREMENT);
            break;
        case 32:
            key.gate = bitsTObytes(kilobytesTObits(MEASUREMENT));
            break;
        case 34:
            key.gate = bitsTOmegabytes(kilobytesTObits(MEASUREMENT));
            break;
        case 41:
            key.gate = megabytesTObits(MEASUREMENT);
            break;
        case 42:
            key.gate = bitsTObytes(megabytesTObits(MEASUREMENT));
            break;
        case 43:
            key.gate = bitsTOkilobytes(megabytesTObits(MEASUREMENT));
            break;
    return key.gate;
}
