#ifndef TOTAL
#define TOTAL

typedef struct entered_and_gated_parameters {
    char MEASUREMENT[261];
    char measurement_id[5];
    double result, VOLUME;
    float version;
    int like_to_continue;
} MainParameters;
// Параметры отвечают за main();

typedef struct working_values {
    char in[5], out[5];
    double gate;
    int id;
    int input_choice, output_choice;
} FunctionsParameters;
// Параметры отвечают за функциональную часть кода;

//............................................................................................................................
// SERVICE
double parsing(char *MEASUREMENT);
void convert(double RESULT);
int parsing_id(char *MEASUREMENT);

//............................................................................................................................
// SWITCHES
double selectionswitchAmount(double MEASUREMENT);
double selectionswitchAmpere(double MEASUREMENT);
double selectionswitchAngle(double MEASUREMENT);
double selectionswitchArea(double MEASUREMENT);
double selectionswitchData(double MEASUREMENT);
double selectionswitchDensity(double MEASUREMENT);
double selectionswitchElectric_charge(double MEASUREMENT);
double selectionswitchEnergy(double MEASUREMENT);
double selectionswitchFrequency(double MEASUREMENT);
double selectionswitchLength(double MEASUREMENT);
double selectionswitchMass(double MEASUREMENT);
double selectionswitchPower(double MEASUREMENT);
double selectionswitchPression(double MEASUREMENT);
double selectionswitchQuantityOfSubstance(double MEASUREMENT);
double selectionswitchRadiation(double MEASUREMENT);
double selectionswitchResistance(double MEASUREMENT);
double selectionswitchSpeed(double MEASUREMENT);
double selectionswitchStrength(double MEASUREMENT);
double selectionswitchTemperature(double MEASUREMENT);
double selectionswitchTime(double MEASUREMENT);

//............................................................................................................................
// DATA
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

// RESISTANCE
double OmTOmOm(double RESISTANCE);
double OmTOuOm(double RESISTANCE);
double OmTOVoltperAmper(double RESISTANCE);
double OmTOSimens(double RESISTANCE);
double mOmTOOm(double RESISTANCE);
double uOmTOOm(double RESISTANCE);
double VoltperAmperTOOm(double RESISTANCE);
double SimensTOOm(double RESISTANCE);

// ELECTRIC_CHARGE
double microKlTOKl(double ELECTRICCHARGE);
double milliKlTOKl(double ELECTRICCHARGE);
double kiloKlTOKl(double ELECTRICCHARGE);
double megaKlTOKl(double ELECTRICCHARGE);
double milliAmperPerHourTOKl(double ELECTRICCHARGE);
double FaradeiTOKl(double ELECTRICCHARGE);
double ElementaryElectricChargeTOKl(double ELECTRICCHARGE);
double KlTOmicroKl(double ELECTRICCHARGE);
double KlTOmilliKl(double ELECTRICCHARGE);
double KlTOkiloKl(double ELECTRICCHARGE);
double KlTOmegaKl(double ELECTRICCHARGE);
double KlTOmilliAmperPerHour(double ELECTRICCHARGE);
double KlTOFaradei(double ELECTRICCHARGE);
double KlTOElementaryElectricCharge(double ELECTRICCHARGE);

//............................................................................................................................
// AMPERE
double Ampere2kAmpere(double AMPERE);
double kAmpere2Ampere(double AMPERE);
double Ampere2mAmpere(double AMPERE);
double mAmpere2Ampere(double AMPERE);
double Ampere2mcAmpere(double AMPERE);
double mcAmpere2Ampere(double AMPERE);
double Ampere2nAmpere(double AMPERE);
double nAmpere2Ampere(double AMPERE);

// AREA
double SquareMeter2Hectare(double AREA);
double Hectare2SquareMeter(double AREA);
double SquareMeter2Ar(double AREA);
double Ar2SquareMeter(double AREA);
double SquarekMeter2SquareMeter(double AREA);
double SquareMeter2SquarekMeter(double AREA);
double SquareMeter2Acr(double AREA);
double Acr2SquareMeter(double AREA);
double SquaresMeter2SquareMeter(double AREA);
double SquareMeter2SquaresMeter(double AREA);
double SquareInch2SquareMeter(double AREA);
double SquareMeter2SquareInch(double AREA);
double SquaremMeter2SquareMeter(double AREA);
double SquareMeter2SquaremMeter(double AREA);

// DENSITY
double KilogramsPerCubicMeter2KilogramsPerCubicSantimeter(double DENSITY);
double KilogramsPerCubicSantimeter2KilogramsPerCubicMeter(double DENSITY);
double KilogramsPerCubicMeter2GramsPerCubicMeter(double DENSITY);
double GramsPerCubicSantimeter2KilogramsPerCubicMeter(double DENSITY);
double KilogramsPerCubicMeter2GramsPerCubicSantimeter(double DENSITY);
double GramsPerCubicSantimeter2KilogramsPerCubicMeter(double DENSITY);
double KilogramsPerCubicMeter2GramsPerCubicMillimeter(double DENSITY);
double GramsPerCubicMeter2KilogramsPerCubicMeter(double DENSITY);
double KilogramsPerCubicMeter2MilligramsPerCubicMeter(double DENSITY);

// STRENGTH
double Newton2kNewton(double STRENGTH);
double Newton2mNewton(double STRENGTH);
double Newton2MkNewton(double STRENGTH);
double Newton2kgsNewton(double STRENGTH);
double Newton2fsNewton(double STRENGTH);
double kNewton2Newton(double STRENGTH);
double mNewton2Newton(double STRENGTH);
double MgNewton2Newton(double STRENGTH);
double MkNewton2Newton(double STRENGTH);
double kgsNewton2Newton(double STRENGTH);
double fsNewton2Newton(double STRENGTH);

//............................................................................................................................
// SPEED
double kmch_to_mc (double SPEED);
double kmch_to_uzl (double SPEED);
double kmch_to_mah (double SPEED);
double kmch_to_milch (double SPEED);
double uzl_to_kmch (double SPEED);
double mah_to_kmch (double SPEED);
double milch_to_kmch (double SPEED);
double mc_to_kmch (double SPEED);

// ENERGY
double joule_to_kvatch (double ENERGY);
double joule_to_electronvolt (double ENERGY);
double joule_to_kall (double ENERGY);
double joule_to_tnt (double ENERGY);
double kvatch_to_joule (double ENERGY);
double electronvolt_to_joule (double ENERGY);
double kall_to_joule (double ENERGY);
double tnt_to_joule (double ENERGY);

// PRESS
double bar_to_mbar(double PRESS);
double bar_to_paskal(double PRESS);
double bar_to_kpaskal(double PRESS);
double bar_to_Mpaskal(double PRESS);
double bar_to_gcm(double PRESS);
double bar_to_kgcm(double PRESS);
double bar_to_toncm(double PRESS);
double bar_to_kgm(double PRESS);
double bar_to_tonm(double PRESS);
double bar_to_newtoncm(double PRESS);
double bar_to_newtonm(double PRESS);
double mbar_to_bar(double PRESS);
double paskal_to_bar(double PRESS);
double kpaskal_to_bar(double PRESS);
double Mpaskal_to_bar(double PRESS);
double gcm_to_bar(double PRESS);
double kgcm_to_bar(double PRESS);
double toncm_to_bar(double PRESS);
double kgm_to_bar(double PRESS);
double tonm_to_bar(double PRESS);
double newtoncm_to_bar(double PRESS);
double newtonm_to_bar(double PRESS);

//TIME
double nsec_to_min ( double TIME);
double mksec_to_min ( double TIME);
double msec_to_min ( double TIME);
double sec_to_min ( double TIME);
double min_to_nsec ( double TIME);
double min_to_mksec ( double TIME);
double min_to_msec ( double TIME);
double min_to_sec ( double TIME);
double min_to_chas ( double TIME);
double min_to_sut ( double TIME);
double min_to_week ( double TIME);
double min_to_year ( double TIME);
double min_to_vek ( double TIME);
double chas_to_min ( double TIME);
double sut_to_min ( double TIME);
double week_to_min ( double TIME);
double year_to_min ( double TIME);
double vek_to_min ( double TIME);

//............................................................................................................................
// ANGLE
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

// FREQUENCY
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

// POWER
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

// QUANTITY OF SUBSTANCE
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

//............................................................................................................................
// AMOUNT
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
double squaredkilometers_TO_squaredmeters(double AMOUNT);
double squareddecimeters_TO_squaredmeters(double AMOUNT);
double squaredcentimeters_TO_squaredmeters(double AMOUNT);
double squaredmillimeters_TO_squaredmeters(double AMOUNT);
double liters_TO_squaredmeters(double AMOUNT);
double mililiters_TO_squaredmeters(double AMOUNT);
double gallons_TO_squaredmeters(double AMOUNT);
double barrels_TO_squaredmeters(double AMOUNT);
double quarts_TO_squaredmeters(double AMOUNT);
double pints_TO_squaredmeters(double AMOUNT);
double flozs_TO_squaredmeters(double AMOUNT);

// LENGTH
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
double millimeters_TO_meters(double LENGTH);
double centimeters_TO_meters(double LENGTH);
double decimeters_TO_meters(double LENGTH);
double kilometers_TO_meters(double LENGTH);
double fathoms_TO_meters(double LENGTH);
double arshins_TO_meters(double LENGTH);
double miles_TO_meters(double LENGTH);
double yards_TO_meters(double LENGTH);
double foots_TO_meters(double LENGTH);
double micrometers_TO_meters(double LENGTH);
double nanometers_TO_meters(double LENGTH);
double angstroms_TO_meters(double LENGTH);
double nauticalmiles_TO_meters(double LENGTH);

// MASS
double Kilograms_TO_Grams(double MASS);
double Kilograms_TO_Quintals(double MASS);
double Kilograms_TO_Tonnes(double MASS);
double Kilograms_TO_Carats(double MASS);
double Kilograms_TO_Stones(double MASS);
double Kilograms_TO_Funts(double MASS);
double Kilograms_TO_Ounces(double MASS);
double Kilograms_TO_Drachmas(double MASS);
double Kilograms_TO_Grains(double MASS);
double Grams_TO_Kilograms(double MASS);
double Quintals_TO_Kilograms(double MASS);
double Tonnes_TO_Kilograms(double MASS);
double Carats_TO_Kilograms(double MASS);
double Stones_TO_Kilograms(double MASS);
double Funts_TO_Kilograms(double MASS);
double Ounces_TO_Kilograms(double MASS);
double Drachmas_TO_Kilograms(double MASS);
double Grains_TO_Kilograms(double MASS);

// TEMPERATURE
double Kelvins_TO_Fahrenheits(double TEMPERATURE);
double Kelvins_TO_Celsius(double TEMPERATURE);
double Kelvins_TO_Reaumurs(double TEMPERATURE);
double Kelvins_TO_Rankines(double TEMPERATURE);
double Kelvins_TO_Newtons(double TEMPERATURE);
double Kelvins_TO_Romers(double TEMPERATURE);
double Kelvins_TO_Delisles(double TEMPERATURE);
double Fahrenheits_TO_Kelvins(double TEMPERATURE);
double Celsius_TO_Kelvins(double TEMPERATURE);
double Reaumurs_TO_Kelvins(double TEMPERATURE);
double Rankines_TO_Kelvins(double TEMPERATURE);
double Newtons_TO_Kelvins(double TEMPERATURE);
double Romers_TO_Kelvins(double TEMPERATURE);
double Delisles_TO_Kelvins(double TEMPERATURE);

//............................................................................................................................
#endif
