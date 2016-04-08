#include <stdio.h>
// Êîíâåðòèðîâàíèå ñîñåäíèõ âåëè÷èí èç ìåíüøåé â áîëüøóþ è íàîáîðîò//
double adjacentValuesUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double adjacentValuesToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 1 èç ìåíüøåé â áîëüøóþ è íàîáîðîò//
double valuesBetweenOneUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 2));
    return STRENGTH;
}
double valuesBetweenOneToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 2));
    return STRENGTH;
}	
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 2 èç ìåíüøåé â áîëüøóþ è íàîáîðîò;
double valuesBetweenTwoUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 3));
    return STRENGTH;
}
double valuesBetweenTwoToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 3));
    return STRENGTH;
}
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 3 èç ìåíüøåé â áîëüøóþ è íàîáîðîò;
double valuesBetweenThreeUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 4));
    return STRENGTH;
}
double valuesBetweenThreeToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 4));
    return STRENGTH;
}
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 4 èç ìåíüøåé â áîëüøóþ è íàîáîðîò//
double valuesBetweenFourUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 5));
    return STRENGTH;
}
double valuesBetweenFourToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 5));
    return STRENGTH;
}
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 5 èç ìåíüøåé â áîëüøóþ è íàîáîðîò//
double valuesBetweenFiveUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 6));
    return STRENGTH;
}
double valuesBetweenFiveToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 6));
    return STRENGTH;
}
// Êîíâåðòèðîâàíèå âåëè÷èí ÷åðåç 6 èç ìåíüøåé â áîëüøóþ è íàîáîðîò//
double valuesBetweenSixUpward(double STRENGTH)
{
    STRENGTH = STRENGTH/(pow(1000, 7));
    return STRENGTH;
}
double valuesBetweenSixToDecrease(double STRENGTH)
{
    STRENGTH = STRENGTH*(pow(1000, 7));
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå ìèêðîíüþòîíà â íàíîíüþòîí è îáðàòíî//
double micronewtonTonanonewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double micronewtonTomillinewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå ìèëëèíüþòîíà â ìèêðîíüþòîí è îáðàòíî//
double millinewtonTomicronewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double micronewtonTomillinewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå íüþòîíà â ìèëëèíüþòîí è îáðàòíî//
double newtonTomillinewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double newtonTomillinewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå êèëîíüþòîíà â íüþòîí è îáðàòíî//
double kilonewtonTonewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double newtonTokilonewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå ìåãàíüþòîíà â êèëîíüþòîí è îáðàòíî//
double meganewtonTokilonewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double kilonewtonTomeganewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
//ôóíêöèÿ: Êîíâåðòèðîâàíèå ãèãàíüþòîíà â ìåãàíüþòîí è îáðàòíî//
double gyganewtonTomeganewton(double STRENGTH)
{
    STRENGTH = STRENGTH/1000;
    return STRENGTH;
}
double meganewtonTogyganewton(double STRENGTH)
{
    STRENGTH = STRENGTH*1000;
    return STRENGTH;
}
