#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ МОЩНОСТИ */

// <Ваты> ---> <Киловаты> //
double Vat2kVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Киловаты> ---> <Ваты> //
double kVat2Vat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Ваты> ---> <Мегаваты> //
double Vat2mVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <Мегаваты> ---> <Ваты> //
double mVat2Vat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Киловаты> ---> <Мегаваты> //
double kVat2mVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Мегаваты> ---> <Киловаты> //
double mVat2kVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Ваты> //
double kgSilaMvS2Vat(double POWER) {
	POWER = POWER * 9.81;
	return POWER;
}

// <Ваты> ---> <Килограмм-сила-метр в секунду> //
double Vat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Киловаты> //
double kgSilaMvS2kVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <Киловаты> ---> <Килограмм-сила-метр в секунду> //
double kVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000) / 9.81;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Мегаваты> //
double kgSilaMvS2mVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <Мегаваты> ---> <Килограмм-сила-метр в секунду> //
double mVat2kgSilaMvS(double POWER) {
	POWER = (POWER * 1000000) / 9.81;
	return POWER;
}

// <Ваты> ---> <Эрг в секунду> //
double Vat2ErgS(double POWER) {
	POWER = POWER  * 10000000;
	return POWER;
}

// <Эрг в секунду> ---> <Ваты> //
double ErgS2Vat(double POWER) {
	POWER = POWER / 10000000;
	return POWER;
}

// <Киловаты> ---> <Эрг в секунду> //
double kVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000;
	return POWER;
}

// <Эрг в секунду> ---> <Киловаты> //
double ErgS2kVat(double POWER) {
	POWER = POWER / 10000000000;
	return POWER;
}

// <Мегаваты> ---> <Эрг в секунду> //
double mVat2ErgS(double POWER) {
	POWER = POWER  * 10000000000000;
	return POWER;
}

// <Эрг в секунду> ---> <Мегаваты> //
double ErgS2mVat(double POWER) {
	POWER = POWER / 10000000000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Эрг в секунду> //
double kgSilaMvS2ErgS(double POWER) {
	POWER = POWER  * 9.81 * 10000000;
	return POWER;
}

// <Эрг в секунду> ---> <Килограмм-сила-метр в секунду> //
double ErgS2kgSilaMvS(double POWER) {
	POWER = POWER / (9.81 * 10000000);
	return POWER;
}

// <Ваты> ---> <Лошадиные силы(метрические)> //
double Vat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Ваты> //
double HorsePowMetr2Vat(double POWER) {
	POWER = POWER * 735.5;
	return POWER;
}

// <Киловаты> ---> <Лошадиные силы(метрические)> //
double kVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000) / 735.5;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Киловаты> //
double HorsePowMetr2kVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <Мегаваты> ---> <Лошадиные силы(метрические)> //
double mVat2HorsePowMetr(double POWER) {
	POWER = (POWER  * 1000000) / 735.5;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Мегаваты> //
double HorsePowMetr2mVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Лошадиные силы(метрические)> //
double kgSilaMvS2HorsePowMetr(double POWER) {
	POWER = POWER / 75;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Килограмм-сила-метр в секунду> //
double HorsePowMetr2kgSilaMvS(double POWER) {
	POWER = POWER * 75;
	return POWER;
}

// <Эрг в секунду> ---> <Лошадиные силы(метрические)> //
double ErgS2HorsePowMetr(double POWER) {
	POWER = POWER / (7.355 * 1000000000);
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Эрг в секунду> //
double HorsePowMetr2ErgS(double POWER) {
	POWER = POWER * 7.355 * 1000000000;
	return POWER;
}

// <Ваты> ---> <Лошадиные силы(английские)> //
double Vat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Ваты> //
double HorsePowEng2Vat(double POWER) {
	POWER = POWER * 745.7;
	return POWER;
}

// <Киловаты> ---> <Лошадиные силы(английские)> //
double kVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000) / 745.7;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Киловаты> //
double HorsePowEng2kVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <Мегаваты> ---> <Лошадиные силы(английские)> //
double mVat2HorsePowEng(double POWER) {
	POWER = (POWER * 1000000) / 745.7;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Мегаваты> //
double HorsePowEng2mVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Лошадиные силы(английские)> //
double kgSilaMvS2HorsePowEng(double POWER) {
	POWER = POWER / 76.04;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Килограмм-сила-метр в секунду> //
double HorsePowEng2kgSilaMvS(double POWER) {
	POWER = POWER * 76.04;
	return POWER;
}

// <Эрг в секунду> ---> <Лошадиные силы(английские)> //
double ErgS2HorsePowEng(double POWER) {
	POWER = POWER / (7.457 * 1000000000);
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Эрг в секунду> //
double HorsePowEng2ErgS(double POWER) {
	POWER = POWER * 7.457 * 1000000000;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Лошадиные силы(английские)> //
double HorsePowMetr2HorsePowEng(double POWER) {
	POWER = POWER / 1.014;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Лошадиные силы(метрические)> //
double HorsePowEng2HorsePowMetr(double POWER) {
	POWER = POWER * 1.014;
	return POWER;
}

// <Ваты> ---> <Милливаты> //
double Vat2MlVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Милливаты> ---> <Ваты> //
double MlVat2Vat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Киловаты> ---> <Милливаты> //
double kVat2MlVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Милливаты> ---> <Киловаты> //
double MlVat2kVat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <Мегаваты> ---> <Милливаты> //
double mVat2MlVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <Милливаты> ---> <Мегаваты> //
double MlVat2mVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <Милливаты> ---> <Килограмм-сила-метр в секунду> //
double MlVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Милливаты> //
double kgSilaMvS2MlVat(double POWER) {
	POWER = (POWER * 9.81) / 1000;
	return POWER;
}

// <Милливаты> ---> <Эрг в секунду> //
double MlVat2ErgS(double POWER) {
	POWER = POWER  * 10000;
	return POWER;
}

// <Эрг в секунду> ---> <Милливаты> //
double ErgS2MlVat(double POWER) {
	POWER = POWER / 10000;
	return POWER;
}

// <Милливаты> ---> <Лошадиные силы(метрические)> //
double MlVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Милливаты> //
double HorsePowMetr2MlVat(double POWER) {
	POWER = (POWER * 735.5) / 1000;
	return POWER;
}

// <Милливаты> ---> <Лошадиные силы(английские)> //
double MlVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Милливаты> //
double HorsePowEng2MlVat(double POWER) {
	POWER = (POWER * 745.7) / 1000;
	return POWER;
}

// <Милливаты> ---> <Микроваты> //
double MlVat2MkVat(double POWER) {
	POWER = POWER * 1000;
	return POWER;
}

// <Микроваты> ---> <Милливаты> //
double MkVat2MlVat(double POWER) {
	POWER = POWER / 1000;
	return POWER;
}

// <Ваты> ---> <Микроваты> //
double Vat2MkVat(double POWER) {
	POWER = POWER * 1000000;
	return POWER;
}

// <Микроваты> ---> <Ваты> //
double MkVat2Vat(double POWER) {
	POWER = POWER / 1000000;
	return POWER;
}

// <Киловаты> ---> <Микроваты> //
double kVat2MkVat(double POWER) {
	POWER = POWER * 1000000000;
	return POWER;
}

// <Микроваты> ---> <Киловаты> //
double MkVat2kVat(double POWER) {
	POWER = POWER / 1000000000;
	return POWER;
}

// <Мегаваты> ---> <Микроваты> //
double mVat2MkVat(double POWER) {
	POWER = POWER * 1000000000000;
	return POWER;
}

// <Микроваты> ---> <Мегаваты> //
double MkVat2mVat(double POWER) {
	POWER = POWER / 1000000000000;
	return POWER;
}

// <Микроваты> ---> <Килограмм-сила-метр в секунду> //
double MkVat2kgSilaMvS(double POWER) {
	POWER = POWER / 9.81 / 1000000;
	return POWER;
}

// <Килограмм-сила-метр в секунду> ---> <Микроваты> //
double kgSilaMvS2MkVat(double POWER) {
	POWER = (POWER * 9.81) / 1000000;
	return POWER;
}

// <Микроваты> ---> <Эрг в секунду> //
double MkVat2ErgS(double POWER) {
	POWER = POWER  * 10;
	return POWER;
}

// <Эрг в секунду> ---> <Микроваты> //
double ErgS2MkVat(double POWER) {
	POWER = POWER / 10;
	return POWER;
}

// <Микроваты> ---> <Лошадиные силы(метрические)> //
double MkVat2HorsePowMetr(double POWER) {
	POWER = POWER  / 735.5 / 1000000;
	return POWER;
}

// <Лошадиные силы(метрические)> ---> <Микроваты> //
double HorsePowMetr2MkVat(double POWER) {
	POWER = (POWER * 735.5) / 1000000;
	return POWER;
}

// <Микроваты> ---> <Лошадиные силы(английские)> //
double MkVat2HorsePowEng(double POWER) {
	POWER = POWER / 745.7 / 1000000;
	return POWER;
}

// <Лошадиные силы(английские)> ---> <Микроваты> //
double HorsePowEng2MkVat(double POWER) {
	POWER = (POWER * 745.7) / 1000000;
	return POWER;
}
