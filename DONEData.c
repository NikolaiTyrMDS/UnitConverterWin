#include <stdio.h>
// DONE;
// Конвертирование соседних величин из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
double adjacentValuesUpward(double DATA)
{
    DATA = DATA/1024;
    return DATA;
}
double adjacentValuesToDecrease(double DATA)
{
    DATA = DATA*1024;
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 1 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
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
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 2 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
double valuesBetweenTwoUpward(double DATA)
{
    DATA = DATA/(pow(1024, 3));
    return DATA;
}
double valuesBetweenTwoToDecrease(double DATA)
{
    DATA = DATA*(pow(1024, 3));
    return DATA;
}
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 3 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
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
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 4 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
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
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 5 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
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
//---------------------------------------------------------------------------------------------------------------//
// Конвертирование величин через 6 из меньшей в большую и наоборот, не касается конвертиирования из битов и в них;
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
//--------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в байты и обратно;
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
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в килобайты и обратно;
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
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в мегабайты и обратно;
double bitsTomegabytes(double DATA)
{
    DATA = DATA/(pow(1024, 2)*8);
    return DATA;
}
double megabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 2)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в гигабайты и обратно;
double bitsTogigabytes(double DATA)
{
    DATA = DATA/(pow(1024, 3)*8);
    return DATA;
}
double gigabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 3)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в терабайты и обратно;
double bitsToterabytes(double DATA)
{
    DATA = DATA/(pow(1024, 4)*8);
    return DATA;
}
double terabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 4)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в петабайты и обратно;
double bitsTopetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 5)*8);
    return DATA;
}
double petabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 5)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в эксабайты и обратно;
double bitsToexabytes(double DATA)
{
    DATA = DATA/(pow(1024, 6)*8);
    return DATA;
}
double exabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 6)*8);
    return DATA;
}
//-------------------------------------------------------------------//
// Специальная функция: Конвертирование из битов в зетабайты и обратно;
double bitsTozetabytes(double DATA)
{
    DATA = DATA/(pow(1024, 7)*8);
    return DATA;
}
double zetabytesTobits(double DATA)
{
    DATA = DATA*(pow(1024, 7)*8);
    return DATA;
}
//-------------------------------------------------------------------//
