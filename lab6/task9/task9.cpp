//Лабораторная 6, задача 9. Выполнила Михалевич М.П.
/* В заданной строке, состоящей из букв, цифр и прочих символов, найдите сумму всех чисел. */

#include <iostream>
#include <string>
#include <cmath>
#include <cctype>

int main() {

    int fraction, ex;
    double buff, summa = 0;
    bool minus, Minus;

    std::string text;

    std::cout << "Enter line: ";
    std::getline(std::cin, text);

    int n = 0;

    while (n < text.length()) {
        minus = false;

        if (isdigit(text[n])) {
            if (n > 0 && text[n - 1] == '-') {
                buff = text[n] - '0';
                minus = true;
            }
            else {
                buff = text[n] - '0';
            }

            ++n;

            while (isdigit(text[n])) {
                buff = buff * 10 + (text[n] - '0');
                ++n;
            }

            fraction = 1;

            if (text[n] == '.' && isdigit(text[n + 1])) {
                ++n;

                while (isdigit(text[n])) {
                    fraction *= 10;
                    buff = buff + (double)(text[n] - '0') / fraction;
                    ++n;
                }
            }

            if ((isdigit(text[n + 1]) || (text[n + 1] == '+' && isdigit(text[n + 2])) || (text[n + 1] == '-' && isdigit(text[n + 2]))) && (text[n] == 'e' || text[n] == 'E')) {
                Minus = false;

                ++n;

                if (text[n] == '-') {
                    Minus = true;
                    ++n;
                }
                else if (text[n] == '+') {
                    ++n;
                }

                ex = text[n] - '0';
                ++n;

                while (isdigit(text[n])) {
                    ex = ex * 10 + (text[n] - '0');
                    ++n;
                }

                if (Minus) {
                    ex *= -1;
                }

                buff *= pow(10, ex);
            }

            if (minus) {
                buff *= -1;
            }

            summa += buff;
        }

        ++n;
    }

    std::cout << "\nSum: " << summa;

    return 0;
}