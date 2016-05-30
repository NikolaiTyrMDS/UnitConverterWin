#include <stdio.h>
#include <math.h>

double bitsTObytes(double DATA)
{
    DATA = DATA/8;
    return DATA;
}
double bytesTObits(double DATA)
{
    DATA = DATA*8;
    return DATA;
}
double bitsTOkilobytes(double DATA)
{
    DATA = DATA/(1024*8);
    return DATA;
}
double kilobytesTObits(double DATA)
{
    DATA = DATA*(1024*8);
    return DATA;
}
double bitsTOmegabytes(double DATA)
{
    DATA = DATA/(pow(1024, 2)*8);
    return DATA;
}
double megabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 2)*8);
    return DATA;
}
double bitsTOgigabytes(double DATA)
{
    DATA = DATA/(pow(1024, 3)*8);
    return DATA;
}
double gigabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 3)*8);
    return DATA;
}
double bitsTOterabytes(double DATA)
{
    DATA = DATA/(pow(1024, 4)*8);
    return DATA;
}
double terabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 4)*8);
    return DATA;
}
double bitsTOpetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 5)*8);
    return DATA;
}
double petabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 5)*8);
    return DATA;
}
double bitsTOexabytes(double DATA)
{
    DATA = DATA/(pow(1024, 6)*8);
    return DATA;
}
double exabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 6)*8);
    return DATA;
}
double bitsTOzetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 7)*8);
    return DATA;
}
double zetabytesTObits(double DATA)
{
    DATA = DATA*(pow(1024, 7)*8);
    return DATA;
}
