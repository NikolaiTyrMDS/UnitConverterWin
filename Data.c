#include <stdio.h>

double adjacentValuesUpward(double DATA)
// Конвертирование соседних величин из меньшей в большую, не касается конвертиирования битов в байты;
{
    DATA = DATA/1024;
    return DATA;
}
double adjacentValuesToDecrease(double DATA)
// Конвертирование соседних величиин из большей в меньшую, не касается конвертирования байтов в биты;
{
    DATA = DATA*1024;
    return DATA;
}
double valuesBetweenOneUpward(double DATA)
{
    DATA = DATA/(pow(1024, 2));
    return DATA;
}
double valuesBetweenOneToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 2));
    return DATA;
}
double valuesBetweenOTwoUpward(double DATA)
{
    DATA = DATA/(pow(1024, 3));
    return DATA;
}
double valuesBetweenTwoToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 3));
    return DATA;
}
double valuesBetweenThreeUpward(double DATA)
{
    DATA = DATA/(pow(1024, 4));
    return DATA;
}
double valuesBetweenThreeToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 4));
    return DATA;
}
double valuesBetweenFourUpward(double DATA)
{
    DATA = DATA/(pow(1024, 5));
    return DATA;
}
double valuesBetweenFourToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 5));
    return DATA;
}
double valuesBetweenFiveUpward(double DATA)
{
    DATA = DATA/(pow(1024, 6));
    return DATA;
}
double valuesBetweenFiveToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 6));
    return DATA;
}
double valuesBetweenSixUpward(double DATA)
{
    DATA = DATA/(pow(1024, 7));
    return DATA;
}
double valuesBetweenSixToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 7));
    return DATA;
}
double bitsTobytes(double DATA)
{
    DATA = DATA/8;
    return DATA;
}
double bytesTobits(double DATA)
{
    DATA = DATA*8;
    return DATA;
}
double bitsTokilobytes(double DATA)
{
    DATA = DATA/(1024*8);
    return DATA;
}
double kilobytesTobits(double DATA)
{
    DATA = DATA*(1024*8);
    return DATA;
}
