#include <stdio.h>

/* ‘”Ќ ?»»  ќЌ¬?–“»–ќ¬јЌ»я –ј«Ћ»„Ќџ’ ??»Ќ»? ћќўЌќ—“» */

// <¬аты> ---> < иловаты> //
double Vat2kVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// < иловаты> ---> <¬аты> //
double kVat2Vat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <¬аты> ---> <ћегаваты> //
double Vat2mVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <ћегаваты> ---> <¬аты> //
double mVat2Vat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// < иловаты> ---> <ћегаваты> //
double kVat2mVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <ћегаваты> ---> < иловаты> //
double mVat2kVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <¬аты> //
double kgSilaMvS2Vat(double POWER) {
	POWER = POWER * 9.81;
	return POWER;
}

// <¬аты> ---> < илограмм-сила-метр в секунду> //
double Vat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> < иловаты> //
double kgSilaMvS2kVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// < иловаты> ---> < илограмм-сила-метр в секунду> //
double kVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000) / 9.81;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <ћегаваты> //
double kgSilaMvS2mVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <ћегаваты> ---> < илограмм-сила-метр в секунду> //
double mVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000000) / 9.81;
	return POWER;
}

// <¬аты> ---> <Ёрг в секунду> //
double Vat2ErgS(double POWER) {
	POWER = POWER  * 10000000;
	return POWER;
}

// <Ёрг в секунду> ---> <¬аты> //
double ErgS2Vat(double POWER) {
	POWER = POWER / 10000000;
	return POWER;
}

// < иловаты> ---> <Ёрг в секунду> //
double kVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000;
	return POWER;
}

// <Ёрг в секунду> ---> < иловаты> //
double ErgS2kVat(double POWER) {
	POWER = POWER / 10000000000;
	return POWER;
}

// <ћегаваты> ---> <Ёрг в секунду> //
double mVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000000;
	return POWER;
}

// <Ёрг в секунду> ---> <ћегаваты> //
double ErgS2mVat(double POWER) {
	POWER = POWER / 10000000000000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <Ёрг в секунду> //
double kgSilaMvS2ErgS(double POWER) {
	POWER = POWER  * 9.81 * 10000000;
	return POWER;
}

// <Ёрг в секунду> ---> < илограмм-сила-метр в секунду> //
double ErgS2kgSilaMvS(double POWER) {
	POWER = POWER / (9.81 * 10000000);
	return POWER;
}

// <¬аты> ---> <Ћошадиные силы(метрические)> //
double Vat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <¬аты> //
double HorsePowMetr2Vat(double POWER) {
	POWER = POWER * 735.5;
	return POWER;
}

// < иловаты> ---> <Ћошадиные силы(метрические)> //
double kVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000) / 735.5;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> < иловаты> //
double HorsePowMetr2kVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <ћегаваты> ---> <Ћошадиные силы(метрические)> //
double mVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000000) / 735.5;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <ћегаваты> //
double HorsePowMetr2mVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <Ћошадиные силы(метрические)> //
double kgSilaMvS2HorsePowMetr(double POWER) {
	POWER = POWER / 75;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> < илограмм-сила-метр в секунду> //
double HorsePowMetr2kgSilaMvS(double POWER) {
	POWER = POWER * 75;
	return POWER;
}

// <Ёрг в секунду> ---> <Ћошадиные силы(метрические)> //
double ErgS2HorsePowMetr(double POWER) {
	POWER = POWER / (7.355 * 1000000000);
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <Ёрг в секунду> //
double HorsePowMetr2ErgS(double POWER) {
	POWER = POWER * 7.355 * 1000000000;
	return POWER;
}

// <¬аты> ---> <Ћошадиные силы(английские)> //
double Vat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <¬аты> //
double HorsePowEng2Vat(double POWER) {
	POWER = POWER * 745.7;
	return POWER;
}

// < иловаты> ---> <Ћошадиные силы(английские)> //
double kVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000) / 745.7;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> < иловаты> //
double HorsePowEng2kVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <ћегаваты> ---> <Ћошадиные силы(английские)> //
double mVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000000) / 745.7;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <ћегаваты> //
double HorsePowEng2mVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <Ћошадиные силы(английские)> //
double kgSilaMvS2HorsePowEng(double POWER) {
	POWER = POWER / 76.04;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> < илограмм-сила-метр в секунду> //
double HorsePowEng2kgSilaMvS(double POWER) {
	POWER = POWER * 76.04;
	return POWER;
}

// <Ёрг в секунду> ---> <Ћошадиные силы(английские)> //
double ErgS2HorsePowEng(double POWER) {
	POWER = POWER / (7.457 * 1000000000);
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <Ёрг в секунду> //
double HorsePowEng2ErgS(double POWER) {
	POWER = POWER * 7.457 * 1000000000;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <Ћошадиные силы(английские)> //
double HorsePowMetr2HorsePowEng(double POWER) {
	POWER = POWER / 1.014;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <Ћошадиные силы(метрические)> //
double HorsePowEng2HorsePowMetr(double POWER) {
	POWER = POWER * 1.014;
	return POWER;
}

// <¬аты> ---> <ћилливаты> //
double Vat2MlVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <ћилливаты> ---> <¬аты> //
double MlVat2Vat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// < иловаты> ---> <ћилливаты> //
double kVat2MlVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <ћилливаты> ---> < иловаты> //
double MlVat2kVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <ћегаваты> ---> <ћилливаты> //
double mVat2MlVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <ћилливаты> ---> <ћегаваты> //
double MlVat2mVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <ћилливаты> ---> < илограмм-сила-метр в секунду> //
double MlVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <ћилливаты> //
double kgSilaMvS2MlVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <ћилливаты> ---> <Ёрг в секунду> //
double MlVat2ErgS(double POWER) {
	POWER = POWER  * 10000;
	return POWER;
}

// <Ёрг в секунду> ---> <ћилливаты> //
double ErgS2MlVat(double POWER) {
	POWER = POWER / 10000;
	return POWER;
}

// <ћилливаты> ---> <Ћошадиные силы(метрические)> //
double MlVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <ћилливаты> //
double HorsePowMetr2MlVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <ћилливаты> ---> <Ћошадиные силы(английские)> //
double MlVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <ћилливаты> //
double HorsePowEng2MlVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <ћилливаты> ---> <ћикроваты> //
double MlVat2MkVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <ћикроваты> ---> <ћилливаты> //
double MkVat2MlVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <¬аты> ---> <ћикроваты> //
double Vat2MkVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <ћикроваты> ---> <¬аты> //
double MkVat2Vat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// < иловаты> ---> <ћикроваты> //
double kVat2MkVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <ћикроваты> ---> < иловаты> //
double MkVat2kVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <ћегаваты> ---> <ћикроваты> //
double mVat2MkVat(double POWER) {
	POWER = POWER * 1000000000000;
	return POWER;
}

// <ћикроваты> ---> <ћегаваты> //
double MkVat2mVat(double POWER) {
	POWER = POWER / 1000000000000;
	return POWER;
}

// <ћикроваты> ---> < илограмм-сила-метр в секунду> //
double MkVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000000;
	return POWER;
}

// < илограмм-сила-метр в секунду> ---> <ћикроваты> //
double kgSilaMvS2MkVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <ћикроваты> ---> <Ёрг в секунду> //
double MkVat2ErgS(double POWER) {
	POWER = POWER  * 10;
	return POWER;
}

// <Ёрг в секунду> ---> <ћикроваты> //
double ErgS2MkVat(double POWER) {
	POWER = POWER / 10;
	return POWER;
}

// <ћикроваты> ---> <Ћошадиные силы(метрические)> //
double MkVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000000;
	return POWER;
}

// <Ћошадиные силы(метрические)> ---> <ћикроваты> //
double HorsePowMetr2MkVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// <ћикроваты> ---> <Ћошадиные силы(английские)> //
double MkVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000000;
	return POWER;
}

// <Ћошадиные силы(английские)> ---> <ћикроваты> //
double HorsePowEng2MkVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}
