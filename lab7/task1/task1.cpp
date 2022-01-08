//Лабораторная 7, задача 1. Выполнила Михалевич М.П. Вариант 13
/* Необходимо разработать программу для перевода чисел из одной
системы счисления в другую. Выполнить два варианта решения задачи:
без использования массивов и с помощью массивов.
13) из четырнадцатеричной в троичную; */

#include <iostream>
#include <cmath>

int pwr = -1;
bool fract = false;

double toDecimal();
double toTernary(double);

int main() {
    double k = toDecimal();
    std::cout << k << std::endl;
    std::cout << std::fixed << '\n' << toTernary(k);
}

double toDecimal() {
    char ch = getchar();
    if (ch == '\n') return 0;

    if (fract) --pwr;
    if (ch == '.') fract = true;

    double nm = toDecimal();

    if (ch == '-') {
        nm *= -1;
        return nm;
    }

    if (ch == '.') return nm;

    if (ch >= '0' && ch <= '9') {
        ++pwr;
        return nm + (ch - '0') * pow(14, pwr);
    }

    if (ch == 'A') {
        ++pwr;
        return nm + 10.0 * pow(14, pwr);
    }

    if (ch == 'B') {
        ++pwr;
        return nm + 11.0 * pow(14, pwr);
    }

    if (ch == 'C') {
        ++pwr;
        return nm + 12.0 * pow(14, pwr);
    }

    if (ch == 'D') {
        ++pwr;
        return nm + 13.0 * pow(14, pwr);
    }
}

double toTernary(double nm) {
    bool minus = false;
    double number = 0;
    pwr = -1;

    if (nm < 0) {
        nm *= -1;
        minus = true;
    }

    int intg = (int)nm;
    double flt = nm - (int)nm;

    while (intg > 0) {
        ++pwr;
        number += intg % 3 * pow(10, pwr);
        intg /= 3;
    }

    if (flt != 0) {
        pwr = 0;

        for (int i = 0; i < 10; ++i) {
            --pwr;
            number = number + pow(10, pwr) * (int)(flt * 3);
            flt = flt * 3 - (int)(flt * 3);
        }
    }

    if (minus) number *= -1;

    return number;
}