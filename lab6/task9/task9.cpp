//Лабораторная 6, задача 9. Выполнила Михалевич М.П.
/* В заданной строке, состоящей из букв, цифр и прочих символов, найдите сумму всех чисел. */

#include <iostream>
#include <string>
#include <cctype>
#include <cmath>

int main() {
    double buff, sum = 0;
    int fraction, ex;
    bool minus, exMinus;

    std::string str;

    std::cout << "Enter line: ";
    std::getline(std::cin, str);

    int count = 0;

    while (count < str.length()) {
        minus = false;

        if (isdigit(str[count])) {
            if (count > 0 && str[count - 1] == '-') {
                buff = str[count] - '0';
                minus = true;
            }
            else {
                buff = str[count] - '0';
            }

            ++count;

            while (isdigit(str[count])) {
                buff = buff * 10 + (str[count] - '0');
                ++count;
            }

            fraction = 1;

            if (str[count] == '.' && isdigit(str[count + 1])) {
                ++count;

                while (isdigit(str[count])) {
                    fraction *= 10;
                    buff = buff + (double)(str[count] - '0') / fraction;
                    ++count;
                }
            }

            if ((str[count] == 'e' || str[count] == 'E') && (isdigit(str[count + 1]) || (str[count + 1] == '+' && isdigit(str[count + 2])) || (str[count + 1] == '-' && isdigit(str[count + 2])))) {
                exMinus = false;

                ++count;

                if (str[count] == '-') {
                    exMinus = true;
                    ++count;
                }
                else if (str[count] == '+') {
                    ++count;
                }

                ex = str[count] - '0';
                ++count;

                while (isdigit(str[count])) {
                    ex = ex * 10 + (str[count] - '0');
                    ++count;
                }

                if (exMinus) {
                    ex *= -1;
                }

                buff *= pow(10, ex);
            }

            if (minus) {
                buff *= -1;
            }

            sum += buff;
        }

        ++count;
    }

    std::cout << "\nSum: " << sum;

    return 0;
}