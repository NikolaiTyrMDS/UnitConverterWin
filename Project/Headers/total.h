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
double bitsTobytes(double DATA);
double bytesTobits(double DATA);
double bitsTokilobytes(double DATA);
double kilobytesTobits(double DATA);
double bitsTomegabytes(double DATA);
double megabytesTobits(double DATA);
double bitsTogigabytes(double DATA);
double gigabytesTobits(double DATA);
double bitsToterabytes(double DATA);
double terabytesTobits(double DATA);
double bitsTopetabytes(double DATA);
double petabytesTobits(double DATA);
double bitsToexabytes(double DATA);
double exabytesTobits(double DATA);
double bitsTozetabytes(double DATA);
double zetabytesTobits(double DATA);

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
// ROMAN PROKOPENKO

//............................................................................................................................
// ARSENI LISENKO
#endif
