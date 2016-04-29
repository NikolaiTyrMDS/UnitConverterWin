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

// <Киломоли> ---> <Микромоли> //
double kMole2MkMole(double QOS) {
	QOS = QOS * 1000000000;
	return QOS;
}

// <Микромоли> ---> <Киломоли> //
double MkMole2kMole(double QOS) {
	QOS = QOS / 1000000000;
	return QOS;
}

// <Миллимоли> ---> <Микромоли> //
double mMole2MkMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <Микромоли> ---> <Миллимоли> //
double MkMole2mMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <Фунт-моли> ---> <Микромоли> //
double PoundMole2MkMole(double QOS) {
	QOS = (QOS * 1000000) / 0.0022046226;
	return QOS;
}

// <Микромоли> ---> <Фунт-моли> //
double MkMole2PoundMole(double QOS) {
	QOS = QOS * 1000000 * 0.0022046226;
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

// <Киломоли> ---> <Мегамоли> //
double kMole2MgMole(double QOS) {
	QOS = QOS / 1000;
	return QOS;
}

// <Мегамоли> ---> <Киломоли> //
double MgMole2kMole(double QOS) {
	QOS = QOS * 1000;
	return QOS;
}

// <Миллимоли> ---> <Мегамоли> //
double mMole2MgMole(double QOS) {
	QOS = QOS / 1000000000;
	return QOS;
}

// <Мегамоли> ---> <Миллимоли> //
double MgMole2mMole(double QOS) {
	QOS = QOS * 1000000000;
	return QOS;
}

// <Микромоли> ---> <Мегамоли> //
double MkMole2MgMole(double QOS) {
	QOS = QOS / 1000000000000;
	return QOS;
}

// <Мегамоли> ---> <Микромоли> //
double MgMole2MkMole(double QOS) {
	QOS = QOS * 1000000000000;
	return QOS;
}

// <Фунт-моли> ---> <Мегамоли> //
double PoundMole2MgMole(double QOS) {
	QOS = (QOS * 1000000) / 0.0022046226;
	return QOS;
}

// <Мегамоли> ---> <Фунт-моли> //
double MgMole2PoundMole(double QOS) {
	QOS = (QOS / 1000000) * 0.0022046226;
	return QOS;
}
