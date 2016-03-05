#include <stdio.h>

                // Метрические единицы измерения  мм, см, метр, км //

/////////////////////////////Миллиметры/////////////////////////////////////////////
double millimetresTOcentimetres(double LENGTH) // Перевод из миллиметров в сантиметры
{
   LENGTH = LENGTH / 10;
    return LENGTH;
}

double millimetresTOmetres(double LENGTH) // Перевод из миллиметров в метры
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}

double millimetresTOkilometres(double LENGTH) // Перевод из миллиметров в километры
{
    LENGTH = LENGTH / 1000000;
     return LENGTH;
}
//////////////////////////////////////////////////////////////////////////////////////


//////////////////////////////////Сантиметры//////////////////////////////////////////
double centimetresTOmillimetres(double LENGTH) // Перевод из сантиметров в миллиметры
{
    LENGTH = LENGTH * 10;
     return LENGTH;
}

double centimetresTOmetres(double LENGTH) // Перевод из сантиметров в метры
{
    LENGTH = LENGTH / 100;
     return LENGTH;
}

double centimetresTOkilometres(double LENGTH) // Перевод из сантиметров в километры
{
    LENGTH = LENGTH / 100000;
     return LENGTH;
}
/////////////////////////////////////////////////////////////////////////////////////


///////////////////////////////////Метры////////////////////////////////////////////
double metresTOmillimetres(double LENGTH) // Перевод из метров в миллиметры
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double metresTOcentimetres(double LENGTH) // Перевод из метров в сантиметры
{
    LENGTH = LENGTH * 100;
     return LENGTH;
}

double metresTOkilometres(double LENGTH) // Перевод из метров в километры
{
    LENGTH = LENGTH / 1000;
     return LENGTH;
}
////////////////////////////////////////////////////////////////////////////////////


/////////////////////////////////Километры//////////////////////////////////////////
double kilometresTOmillimetres(double LENGTH) // Перевод из километров в миллиметры
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}

double kilometresTOcentimetres(double LENGTH) // Перевод из километров в сантиметры
{
    LENGTH = LENGTH * 100000;
     return LENGTH;
}

double kilometresTOmetres(double LENGTH) // Перевод из километров в метры
{
    LENGTH = LENGTH * 1000;
     return LENGTH;
}
///////////////////////////////////////////////////////////////////////////////////


                           //Английская система мер фут, ярд, миля(морская), миля(земная), Дюйм //
