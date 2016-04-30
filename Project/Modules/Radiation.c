#include <stdio.h>
#include <math.h>
// DONE;
// Конвертирование соседних величин в сторону увеличения;
double adjacentValuesUpward(double RADIATION)
{
    RADIATION = RADIATION/1000;
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование соседних величин в сторону уменьшения;
double adjacentValuesToDecrease(double RADIATION)
{
    RADIATION = RADIATION*1000;
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону увеличения;
double valuesBetweenOneUpward(double RADIATION)
{
    RADIATION = RADIATION/(pow(1000, 2));
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону уменьшения;
double valuesBetweenOneToDecrease(double RADIATION)
{
    RADIATION = RADIATION*(pow(1000, 2));
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование величин через две в сторону увеличения;
double valuesBetweenTwoUpward(double RADIATION)
{
    RADIATION = RADIATION/(pow(1000, 3));
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование величин через две в сторону уменьшения;
double valuesBetweenTwoToDecrease(double RADIATION)
{
    RADIATION = RADIATION*(pow(1000, 3));
    return RADIATION;
}
// ----------------------------------------------------- //
// Конвертирование из беккерелей в кюри; //
double ciTobq(double RADIATION)
{
    RADIATION = RADIATION*37000000000;
    return RADIATION;
}
