typedef struct entered_and_gated_parameters {
    char MEASUREMENT[261];
    double result, VOLUME;
    int measurement_id;
    float version;
} MainParameters;

typedef struct working_values {
    double gate;
    int input_choice, id, output_choice;
} FunctionsParameters;

double transfer(char *MEASUREMENT);

double adjacentValuesUpward(double DATA);
double adjacentValuesToDecrease(double DATA);
double valuesBetweenOneUpward(double DATA);
double valuesBetweenOneToDecrease(double DATA);
double valuesBetweenTwoUpward(double DATA);
double valuesBetweenTwoToDecrease(double DATA);
double valuesBetweenThreeUpward(double DATA);
double valuesBetweenThreeToDecrease(double DATA);
double valuesBetweenFourUpward(double DATA);
double valuesBetweenFourToDecrease(double DATA);
double valuesBetweenFiveUpward(double DATA);
double valuesBetweenFiveToDecrease(double DATA);
double valuesBetweenSixUpward(double DATA);
double valuesBetweenSixToDecrease(double DATA);
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

double selectionswitchData(double MEASUREMENT);
