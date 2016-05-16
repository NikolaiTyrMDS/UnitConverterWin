#include <stdio.h>

/* ФУНКЦИИ КОНВЕРТИРОВАНИЯ РАЗЛИЧНЫХ ЕДИНИЦ КОЛИЧЕСТВА ВЕЩЕСТВА */
/* Параметр QOS - Quantity Of Substance, с англ. - Количество Вещества */

// <Моли> ---> <Миллимоли> //
double Mole2mMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <Миллимоли> ---> <Моли> //
double mMole2Mole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <Моли> ---> <Киломоли> //
double Mole2kMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <Киломоли> ---> <Моли> //
double kMole2Mole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <Моли> ---> <Фунт-моли> //
double Mole2PoundMole(double QOS) {
	QOS = QOS * 0.0022046226;
	return QOS;
}

// <Фунт-моли> ---> <Моли> //
double PoundMole2Mole(double QOS) {
	QOS = QOS / 0.0022046226;
	return QOS;
}


// <Моли> ---> <Микромоли> //
double Mole2MkMole(double QOS) {
	QOS = QOS * 1000000;
	return QOS;
}

// <Микромоли> ---> <Моли> //
double MkMole2Mole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <Моли> ---> <Мегамоли> //
double Mole2MgMole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <Мегамоли> ---> <Моли> //
double MgMole2Mole(double QOS) {
	QOS = QOS * 1000000;
	return QOS;
}
