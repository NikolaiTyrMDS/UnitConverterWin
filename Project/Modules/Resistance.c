#include <stdio.h>
#include <math.h>
// ќм, миллиом, микроом, вольт на ампер, сименс;
double OmTOmOm(double RESISTANCE)
{
    RESISTANCE = RESISTANCE * 1000;
    return RESISTANCE;
}
double OmTOuOm(double RESISTANCE)
{
    RESISTANCE = RESISTANCE * 1000000;
    return RESISTANCE;
}
double OmTOVoltperAmper(double RESISTANCE)
{
    return RESISTANCE;
}
double OmTOSimens(double RESISTANCE)
{
    RESISTANCE = 1 / RESISTANCE;
    return RESISTANCE;
}

double mOmTOOm(double RESISTANCE)
{
    RESISTANCE = RESISTANCE / 1000;
    return RESISTANCE;
}
double uOmTOOm(double RESISTANCE)
{
    RESISTANCE = RESISTANCE / 1000000;
    return RESISTANCE;
}
double VoltperAmperTOOm(double RESISTANCE)
{
    return RESISTANCE;
}
double SimensTOOm(double RESISTANCE)
{
    RESISTANCE = 1 / RESISTANCE;
    return RESISTANCE;
}
