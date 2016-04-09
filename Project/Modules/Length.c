#include <stdio.h>

                // - Метрические единицы измерения - мм, см, метр, км ( дм, ???) -//

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


                //-Английская система мер - фут, ярд, миля(морская), миля(земная), Дюйм -//

//--------------------------------------ФУТЫ--------------------------------------------------//
double FootTOYard(double LENGTH) // Перевод из футов  в ярды
{
    LENGTH = LENGTH / 3;
     return LENGTH;
}


double FootTONauticalMile(double LENGTH) // Перевод из футов в морскую милю.
{
    LENGTH = LENGTH / 6076.1154855643 ft;// нужно уточннить
     return LENGTH;
}


double FootTOStatuteMile(double LENGTH) // Перевод из футов в земную  милю.
{
    LENGTH = LENGTH / 5280.0000010236 ft (survey) ft;// нужно уточннить
     return LENGTH;
}


double FootTOInch(double LENGTH) // Перевод из футов в дюйм.
{
    LENGTH = LENGTH * 12;
     return LENGTH;
}
//--------------------------------------------------------------------------------------------//

//--------------------------------------ЯРДЫ--------------------------------------------------//
double YardTOFoot(double LENGTH) // Перевод из ярдов  в футы
{
    LENGTH = LENGTH * 3;
     return LENGTH;
}

double YardTONauticalMile(double LENGTH) // Перевод из ярдов  в морские милю
{
    LENGTH = LENGTH / 2025.3718285214 yd // надо уточнить
     return LENGTH;
}


double YardTOStatuteMile(double LENGTH) // Перевод из ярдов  в земную  милю
{
    LENGTH = LENGTH /1760.........;//уточнить
     return LENGTH;
}

double YardTOInch(double LENGTH) // Перевод из ярдов  в дюйм
{
    LENGTH = LENGTH * 36;
     return LENGTH;
}

//--------------------------------------Миля Морская--------------------------------------------------//
double NauticalMileTOFoot(double LENGTH) // Перевод из морской милли в футы
{
    LENGTH = LENGTH * 6076.1154855643 ft;// уточнить
     return LENGTH;
}

double NauticalMileTOYard(double LENGTH) // Перевод из морской милли в ярды
{
    LENGTH = LENGTH * 2025.3718285214 yd;// уточнить
    return LENGTH;
}

double NauticalMileTOStatuteMile(double LENGTH) // Перевод из морской милли в земную милю
{
    LENGTH = LENGTH ??????????????????;// уточнить
     return LENGTH;
}

double NauticalMileTOInch(double LENGTH) // Перевод из морской милли в  дюйм
{
    LENGTH = LENGTH / 1.3714902807775E-5 miles;
     return LENGTH;
}

//--------------------------------------Миля земная--------------------------------------------------//


//---------------------------------------------------------------------------------------------------//


//--------------------------------------Дюйм---------------------------------------------------------//
double InchTOFoot(double LENGTH) // Перевод из дюйма  в футы
{
    LENGTH = LENGTH / 12;
     return LENGTH;
}

double InchTOYard(double LENGTH) // Перевод из дюйма  в ярд
{
    LENGTH = LENGTH / 36;
     return LENGTH;
}

double InchTONauticalMile(double LENGTH) // Перевод из дюйма  в Морскую милю
{
    LENGTH = LENGTH / 72913.385826772 in;// уточню
     return LENGTH;
}

double InchTOStatuteMile(double LENGTH) // Перевод из дюйма  в Земную  милю
{
    LENGTH = LENGTH / !????????????????
     return LENGTH;
}
//---------------------------------------------------------------------------------------------------//
