#include <stdio.h>
#include <math.h>

double microKlTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1000000;
    return ELECTRICCHARGE;
}
double milliKlTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1000;
    return ELECTRICCHARGE;
}
double kiloKlTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 1000;
    return ELECTRICCHARGE;
}
double megaKlTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 1000000;
    return ELECTRICCHARGE;
}
double milliAmperPerHourTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 3600 * 1000;
    return ELECTRICCHARGE;
}
double FaradeiTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 96.48;
    return ELECTRICCHARGE;
}
double ElementaryElectricChargeTOKl(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE * 1.602176565 * pow(10, − 19);
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
    ELECTRICCHARGE = ELECTRICCHARGE / 3600 / 1000;
    return ELECTRICCHARGE;
}
double KlTOFaradei(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 96.48;
    return ELECTRICCHARGE;
}
double KlTOElementaryElectricCharge(double ELECTRICCHARGE)
{
    ELECTRICCHARGE = ELECTRICCHARGE / 1.602176565 / pow(10, − 19);
    return ELECTRICCHARGE;
}
