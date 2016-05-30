#ifndef TOTAL
#define TOTAL

typedef struct entered_and_gated_parameters {
    double result, VOLUME;
    float version;
    int like_to_continue;
    char measurement_id[5];
    char MEASUREMENT[261];
} MainParameters;
// ÈÇÌÅÍÅÍÈÅ ÏÀÐÀÌÅÒÐÎÂ ÎÏÀÑÍÎ ÄËß ÆÈÇÍÈ;

typedef struct working_values {
    double gate;
    int id;
    int input_choice, output_choice;
    char in[5], out[5];
} FunctionsParameters;


// Ñëóæåáíûå ôóíêöèè;
double parsing(char *MEASUREMENT);
void convert(double RESULT);
int parsing_id(char *MEASUREMENT);


//СЕНЯ
double selectionswitchTemperature(double MEASUREMENT);
double selectionswitchMass(double MEASUREMENT);
double selectionswitchAmount(double MEASUREMENT);
double selectionswitchLength(double MEASUREMENT);
//КОЛЯ
double selectionswitchData(double MEASUREMENT);
double selectionswitchRadiation(double MEASUREMENT);

//ПАХОМ

//РОМА
double selectionswitchPower(double MEASUREMENT);
double selectionswitchQuantityOfSubstance(double MEASUREMENT);
double selectionswitchAngle(double MEASUREMENT);
double selectionswitchFrequency(double MEASUREMENT);

//МИХА
double selectionswitchPression(double MEASUREMENT);
double selectionswitchSpeed(double MEASUREMENT);
double selectionswitchTime(double MEASUREMENT);
double selectionswitchEnergy(double MEASUREMENT);





// Ïðîòîòèïû ðàáî÷èõ ôóíêöèé;
double bitsTObytes(double DATA);
double bytesTObits(double DATA);
double bitsTOkilobytes(double DATA);
double kilobytesTObits(double DATA);
double bitsTOmegabytes(double DATA);
double megabytesTObits(double DATA);
double bitsTOgigabytes(double DATA);
double gigabytesTObits(double DATA);
double bitsTOterabytes(double DATA);
double terabytesTObits(double DATA);
double bitsTOpetabytes(double DATA);
double petabytesTObits(double DATA);
double bitsTOexabytes(double DATA);
double exabytesTObits(double DATA);
double bitsTOzetabytes(double DATA);
double zetabytesTObits(double DATA);

// RADIATION
double PTOmP(double RADIATION);
double PTOuP(double RADIATION);
double PTOKlperKg(double RADIATION);
double mPTOP(double RADIATION);
double uPTOP(double RADIATION);
double KlperKgTOP(double RADIATION);

//TIME
 double nsec_TO_min ( double TIME);
 double mksec_TO_min ( double TIME);
 double msec_TO_min ( double TIME);
 double sec_TO_min ( double TIME);
 double min_TO_nsec ( double TIME);
 double min_TO_mksec ( double TIME);
 double min_TO_msec ( double TIME);
 double min_TO_sec ( double TIME);
 double min_TO_chas ( double TIME);
 double min_TO_sut ( double TIME);
 double min_TO_week ( double TIME);
 double min_TO_year ( double TIME);
 double min_TO_vek ( double TIME);
 double chas_TO_min ( double TIME);
 double sut_TO_min ( double TIME);
 double week_TO_min ( double TIME);
 double year_TO_min ( double TIME);
 double vek_TO_min ( double TIME);

//ДАВЛЕНИЕ

//bar
double bar_TO_mbar(double PRESS);
double bar_TO_paskal(double PRESS);
double bar_TO_kpaskal(double PRESS);
double bar_TO_Mpaskal(double PRESS);
double bar_TO_gcm(double PRESS);
double bar_TO_kgcm(double PRESS);
double bar_TO_TOncm(double PRESS);
double bar_TO_kgm(double PRESS);
double bar_TO_TOnm(double PRESS);
double bar_TO_newTOncm(double PRESS);
double bar_TO_newTOnm(double PRESS);
//mbar
double mbar_TO_bar(double PRESS);
//paskal
double paskal_TO_bar(double PRESS);
//kpaskal
double kpaskal_TO_bar(double PRESS);
//Mpaskal
double Mpaskal_TO_bar(double PRESS);
//gcm
double gcm_TO_bar(double PRESS);
//kgcm
double kgcm_TO_bar(double PRESS);
//TOncm
double TOncm_TO_bar(double PRESS);
//kgm
double kgm_TO_bar(double PRESS);
//TOnm
double TOnm_TO_bar(double PRESS);
//newTOncm
double newTOncm_TO_bar(double PRESS);
//newTOnm
double newTOnm_TO_bar(double PRESS);

//ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ ДЛИНЫ
//Единица измерения миллиметр и её перевод
double millimeters_TO_meters(double LENGTH);
//Единица измерения метр и её перевод
double meters_TO_millimeters(double LENGTH);
double meters_TO_centimeters(double LENGTH);
double meters_TO_decimeters(double LENGTH);
double meters_TO_kilometers(double LENGTH);
double meters_TO_fathoms(double LENGTH);
double meters_TO_arshins(double LENGTH);
double meters_TO_miles(double LENGTH);
double meters_TO_yards(double LENGTH);
double meters_TO_foots(double LENGTH);
double meters_TO_micrometers(double LENGTH);
double meters_TO_nanometers(double LENGTH);
double meters_TO_angstroms(double LENGTH);
double meters_TO_nauticalmiles(double LENGTH);
//Единица измерения сантиметр и её перевод
double centimeters_TO_meters(double LENGTH);
//Единица измерения дециметр и её перевод
double decimeters_TO_meters(double LENGTH);
//Единица измерения километр и её перевод
double kilometers_TO_meters(double LENGTH);
//Единица измерения сажень и её перевод
double fathoms_TO_meters(double LENGTH);
//Единица измерения аршин и её перевод
double arshins_TO_meters(double LENGTH);
//Единица измерения миля и её перевод
double miles_TO_meters(double LENGTH);
//Единица измерения ярд и её перевод
double yards_TO_meters(double LENGTH);
//Единица измерения фут и её перевод
double foots_TO_meters(double LENGTH);
//Единица измерения микрометр и её перевод
double micrometers_TO_meters(double LENGTH);
//Единица измерения нанометр и её перевод
double nanometers_TO_meters(double LENGTH);
//Единица измерения ангстрем и её перевод
double angstroms_TO_meters(double LENGTH);
//Единица измерения морская миля
double nauticalmiles_TO_meters(double LENGTH);

// прототипы функций конвентирования различных величин КОЛИЧЕСТВА ВЕЩЕСТВА
double Mole2mMole(double QOS);
double mMole2Mole(double QOS);
double Mole2kMole(double QOS);
double kMole2Mole(double QOS);
double Mole2PoundMole(double QOS);
double PoundMole2Mole(double QOS);
double Mole2MkMole(double QOS);
double MkMole2Mole(double QOS);
double Mole2MgMole(double QOS);
double MgMole2Mole(double QOS);



//прототип функций конвентирования различных величин массы
//Единица измерения Грамм и её перевод
double Grams_TO_Kilograms(double MASS);
//Единица измерения Центнер и её перевод
double Quintals_TO_Kilograms(double MASS);
//Единица измерения Тонна и её перевод
double TOnnes_TO_Kilograms(double MASS);
//Единица измерения Карат и её перевод
double Carats_TO_Kilograms(double MASS);
//Единица измерения Стоун и её перевод
double STOnes_TO_Kilograms(double MASS);
//Единица измерения Фунт и её перевод
double Funts_TO_Kilograms(double MASS);
//Единица измерения Унция и её перевод
double Ounces_TO_Kilograms(double MASS);
//Единица измерения Драхма и её перевод
double Drachmas_TO_Kilograms(double MASS);
//Единица измерения Гран и её перевод
double Grains_TO_Kilograms(double MASS);
//Единица измерения кило и её перевод
double Kilograms_TO_Grams(double MASS);
double Kilograms_TO_Quintals(double MASS);
double Kilograms_TO_TOnnes(double MASS);
double Kilograms_TO_Carats(double MASS);
double Kilograms_TO_STOnes(double MASS);
double Kilograms_TO_Funts(double MASS);
double Kilograms_TO_Ounces(double MASS);
double Kilograms_TO_Drachmas(double MASS);
double Kilograms_TO_Grains(double MASS);


// прототипы функций конвентирования различных величин МОЩНОСТИ
double Vat2kVat(double POWER);
double kVat2Vat(double POWER);
double Vat2mVat(double POWER);
double mVat2Vat(double POWER);
double kgSilaMvS2Vat(double POWER);
double Vat2kgSilaMvS(double POWER);
double Vat2ErgS(double POWER);
double ErgS2Vat(double POWER);
double Vat2HorsePowMetr(double POWER);
double HorsePowMetr2Vat(double POWER);
double Vat2HorsePowEng(double POWER);
double HorsePowEng2Vat(double POWER);
double Vat2MlVat(double POWER);
double MlVat2Vat(double POWER);
double Vat2MkVat(double POWER);
double MkVat2Vat(double POWER);

//прототип функций конвентирования различных величин объема
//Единица измерения Кубический километр и её перевод
double squaredkilometers_TO_squaredmeters(double AMOUNT);
//Единица измерения Кубический метр и её перевод
double squaredmeters_TO_squaredkilometers(double AMOUNT);
double squaredmeters_TO_squareddecimeters(double AMOUNT);
double squaredmeters_TO_squaredcentimeters(double AMOUNT);
double squaredmeters_TO_squaredmillimeters(double AMOUNT);
double squaredmeters_TO_liters(double AMOUNT);
double squaredmeters_TO_mililiters(double AMOUNT);
double squaredmeters_TO_gallons(double AMOUNT);
double squaredmeters_TO_barrels(double AMOUNT);
double squaredmeters_TO_pints(double AMOUNT);
double squaredmeters_TO_quarts(double AMOUNT);
double squaredmeters_TO_flozs(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squareddecimeters_TO_squaredmeters(double AMOUNT);
//Единица измерения кубический дециметр и её перевод
double squaredcentimeters_TO_squaredmeters(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double squaredmillimeters_TO_squaredmeters(double AMOUNT);
//Единица измерения кубический миллиметры её перевод
double liters_TO_squaredmeters(double AMOUNT);
//Единица измерения миллитр её перевод
double mililiters_TO_squaredmeters(double AMOUNT);
//Единица измерения галлон её перевод
double gallons_TO_squaredmeters(double AMOUNT);
//Единица измерения баррель (нефтяной) её перевод
double barrels_TO_squaredmeters(double AMOUNT);
//Единица измерения кварта  её перевод
double quarts_TO_squaredmeters(double AMOUNT);
//Единица измерения пинта  её перевод
double pints_TO_squaredmeters(double AMOUNT);
//Единица жидкая унция  её перевод
double flozs_TO_squaredmeters(double AMOUNT);




// Прототипы для температуры;
double Celsius_TO_Kelvins(double TEMPERATURE);
double Fahrenheits_TO_Kelvins(double TEMPERATURE);
double Kelvins_TO_Fahrenheits(double TEMPERATURE);
double Kelvins_TO_Celsius(double TEMPERATURE);
double Kelvins_TO_Reaumurs(double TEMPERATURE);
double Kelvins_TO_Rankines(double TEMPERATURE);
double Kelvins_TO_NewTOns(double TEMPERATURE);
double Kelvins_TO_Romers(double TEMPERATURE);
double Kelvins_TO_Delisles(double TEMPERATURE);
double Reaumurs_TO_Kelvins(double TEMPERATURE);
double Rankines_TO_Kelvins(double TEMPERATURE);
double NewTOns_TO_Kelvins(double TEMPERATURE);
double Romers_TO_Kelvins(double TEMPERATURE);
double Delisles_TO_Kelvins(double TEMPERATURE);
// прототипы функций конвентирования различных величин УГЛА
double Degree2Radian(double ANGLE);
double Radian2Degree(double ANGLE);
double Degree2Min(double ANGLE);
double Min2Degree(double ANGLE);
double Degree2Sec(double ANGLE);
double Sec2Degree(double ANGLE);
double Degree2Grad(double ANGLE);
double Grad2Degree(double ANGLE);
double Sextant2Degree(double ANGLE);
double Degree2Sextant(double ANGLE);
double Rumb2Degree(double ANGLE);
double Degree2Rumb(double ANGLE);


// прототипы функций конвентирования различных величин ЧАСТОТЫ
double Herz2kHerz(double FREQUENCY);
double kHerz2Herz(double FREQUENCY);
double Herz2MlHerz(double FREQUENCY);
double MlHerz2Herz(double FREQUENCY);
double Herz2MkHerz(double FREQUENCY);
double MkHerz2Herz(double FREQUENCY);
double Herz2MgHerz(double FREQUENCY);
double MgHerz2Herz(double FREQUENCY);
double Herz2Frenel(double FREQUENCY);
double Frenel2Herz(double FREQUENCY);
double Herz2RadSec(double FREQUENCY);
double RadSec2Herz(double FREQUENCY);


//ПРОТАТИПЫ СКОРОСТИ
double kmch_TO_mc (double SPEED);
double kmch_TO_uzl (double SPEED);
double kmch_TO_mah (double SPEED);
double kmch_TO_milch (double SPEED);
double uzl_TO_kmch (double SPEED);
double mah_TO_kmch (double SPEED);
double milch_TO_kmch (double SPEED);
double mc_TO_kmch (double SPEED);


//Прототипы конвертирования ЭНЕРГИИ
//джоули
double joule_TO_kvatch (double ENERGY);
double joule_TO_electronvolt (double ENERGY);
double joule_TO_kall (double ENERGY);
double joule_TO_tnt (double ENERGY);
//Киловатт-час
double kvatch_TO_joule (double ENERGY);
//Электронвольт
double electronvolt_TO_joule (double ENERGY);
//Калории
double kall_TO_joule (double ENERGY);
//Тратиловый эквивалент
double tnt_TO_joule (double ENERGY);


#endif
