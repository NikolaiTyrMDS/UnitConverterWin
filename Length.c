#include <stdio.h>

                // Метрические единицы измерения  мм, см, метр, км //

/////////////////////////////Миллиметры/////////////////////////////////////////////
double millimetresTOcentimetres(double LENGHT) // Перевод из миллиметров в сантиметры
{
   LENGHT = LENGHT / 10 ;
    return LENGHT ;
}

double millimetresTOmetres(double LENGHT) // Перевод из миллиметров в метры
{
    LENGHT = LENGHT / 1000 ;
     return LENGHT ;
}

double millimetresTOkilometres(double LENGHT) // Перевод из миллиметров в километры
{
    LENGHT = LENGHT / 1000000 ;
     return LENGHT ;
}
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////Сантиметры//////////////////////////////////////////
double centimetresTOmillimetres(double LENGHT) // Перевод из сантиметров в миллиметры
{
    LENGHT = LENGHT * 10  ;
     return LENGHT ;
}

double centimetresTOmetres(double LENGHT) // Перевод из сантиметров в метры
{
    LENGHT = LENGHT / 100 ;
     return LENGHT ;
}

double centimetresTOkilometres(double LENGHT) // Перевод из сантиметров в километры
{
    LENGHT = LENGHT / 100000 ;
     return LENGHT ;
}
/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////Метры////////////////////////////////////////////
double metresTOmillimetres(double LENGHT) // Перевод из метров в миллиметры
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}

double metresTOcentimetres(double LENGHT) // Перевод из метров в сантиметры
{
    LENGHT = LENGHT * 100 ;
     return LENGHT ;
}

double metresTOkilometres(double LENGHT) // Перевод из метров в километры
{
    LENGHT = LENGHT / 1000 ;
     return LENGHT ;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////Километры//////////////////////////////////////////
double kilometresTOmillimetres(double LENGHT) // Перевод из километров в миллиметры
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}

double kilometresTOcentimetres(double LENGHT) // Перевод из километров в сантиметры
{
    LENGHT = LENGHT * 100000 ;
     return LENGHT ;
}

double kilometresTOmetres(double LENGHT) // Перевод из километров в метры
{
    LENGHT = LENGHT * 1000 ;
     return LENGHT ;
}
///////////////////////////////////////////////////////////////////////////////////


                           //Английская система мер фут, ярд, миля(морская), миля(земная), Дюйм //
