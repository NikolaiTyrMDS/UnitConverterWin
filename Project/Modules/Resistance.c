#include <stdio.h>
#include <math.h>
// Конвертирование соседних величин в сторону увеличения;
double adjacentValuesUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/1000;
    return RESISTANCE;
}
// --------------------------------------------------- //
// Конвертирование соседних величин в сторону уменьшения;
double adjacentValuesToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*1000;
    return RESISTANCE;
}
// --------------------------------------------------- //
// Конвертирование величин через одну в сторону увеличения;
double valuesBetweenOneUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/(pow(1000, 2));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону уменьшения;
double valuesBetweenOneToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*(pow(1000, 2));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону увеличения;
double valuesBetweenTwoUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/(pow(1000, 3));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону уменьшения;
double valuesBetweenTwoToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*(pow(1000, 3));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону увеличения;
double valuesBetweenThreeUpward(double RESISTANCE)
{
    RESISTANCE = RESISTANCE/(pow(1000, 4));
    return RESISTANCE;
}
// ----------------------------------------------------- //
// Конвертирование величин через одну в сторону уменьшения;
double valuesBetweenThreeToDecrease(double RESISTANCE)
{
    RESISTANCE = RESISTANCE*(pow(1000, 4));
    return RESISTANCE;
}
// ----------------------------------------------------- //
