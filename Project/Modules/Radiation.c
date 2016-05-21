#include <stdio.h>
#include <math.h>

double PTOmP(double RADIATION)
{
    RADIATION = RADIATION * 1000;
    return RADIATION;
}
double PTOuP(double RADIATION)
{
    RADIATION = RADIATION * 1000000;
    return RADIATION;
}
double PTOKlperKg(double RADIATION)
{
    RADIATION = RADIATION * 2.57976 * pow(10, -4);
    return RADIATION;
}

double mPTOP(double RADIATION)
{
    RADIATION = RADIATION / 1000;
    return RADIATION;
}
double uPTOP(double RADIATION)
{
    RADIATION = RADIATION / 1000000;
    return RADIATION;
}
double KlperKgTOP(double RADIATION)
{
    RADIATION = RADIATION / 2.57976 / pow(10, -4);
    return RADIATION;
}
