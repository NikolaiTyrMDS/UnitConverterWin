#include <stdio.h>
#include <math.h>
//Микрокулон, милликулон, кулон, килокулон, мегакулон, миллиампер в час, фарадей, элементарный электрический заряд;
double microKlTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double milliKlTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double kiloKlTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double megaKlTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double milliAmperPerHourTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double FaradeiTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE
    return ELECTRICCHARGE;
}
double ElementaryElectricChargeTOKl(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}

// BackWays;
double KlTOmicroKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 1000000;
    return ELECTRICCHARGE;
}
double KlTOmilliKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 1000;
    return ELECTRICCHARGE;
}
double KlTOkiloKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1000;
    return ELECTRICCHARGE;
}
double KlTOmegaKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1000000;
    return ELECTRICCHARGE;
}
double KlTOmilliAmperPerHour(double ELECTRICCHARGE)
{

    return ELECTRICCHARGE;
}
double KlTOFaradei(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 96.48;
    return ELECTRICCHARGE;
}
double KlTOElementaryElectricCharge(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1.602176565 / pow(10, −19);
    return ELECTRICCHARGE;
}
