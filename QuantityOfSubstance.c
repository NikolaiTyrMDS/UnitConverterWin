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

// <Миллимоли> ---> <Киломоли> //
double mMole2kMole(double QOS) {
	QOS = QOS / 1000000;
	return QOS;
}

// <Киломоли> ---> <Миллимоли> //
double kMole2mMole(double QOS) {
	QOS = QOS * 1000000;
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

// <Миллимоли> ---> <Фунт-моли> //
double mMole2PoundMole(double QOS) {
	QOS = QOS * 1000 * 0.0022046226;
	return QOS;
}

// <Фунт-моли> ---> <Миллимоли> //
double PoundMole2mMole(double QOS) {
	QOS = (QOS * 1000) / 0.0022046226;
	return QOS;
}

// <Киломоли> ---> <Фунт-моли> //
double kMole2PoundMole(double QOS) {
	QOS = (QOS / 1000) * 0.0022046226;
	return QOS;
}

// <Фунт-моли> ---> <Киломоли> //
double PoundMole2kMole(double QOS) {
	QOS = (QOS / 1000) / 0.0022046226;
	return QOS;
}
