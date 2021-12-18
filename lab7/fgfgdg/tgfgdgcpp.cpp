/* Осуществить сложение чисел. Разработать функции для выполнения
 * операции сложения. Предусмотреть ввод положительных и отрицательных чисел.
 *
 * Найдите сумму двоичных чисел, заданных в естественной форме.
 * Сложение выполните в дополнительном коде. Ответ выразите в
 * естественной форме. */

#include <iostream>

char* inputNum();
char* twoCompl(char*);
char* sum(char*, char*);
char* est(char*);

int main() {
    setlocale(LC_ALL, "rus");

    char *num1 = inputNum();
    char* num2 = inputNum();

    std::cout << num1 << '/n' << num2 << '/n';

    num1 = twoCompl(num1);
    num2 = twoCompl(num2);

    std::cout << num1 << '/n' << num2 << '/n';

    return 0;
}

char* inputNum() {
    char* num = new char[16];
    num[0] = '0';

    int len = 0;

    num[len] = std::getchar();

    if (num[len] != '1' && num[len] != '0' && num[len] != '-' && num[len] != '+') {
        std::cout << "Ошибка. Введено не число.\n";
        num[0] = 'r';
        return num;
    }

    if (num[len] == '-') {
        num[len] = '1';
        ++len;
    }
    else if (num[len] == '+') {
        num[len] = '0';
        ++len;
    }
    else {
        ++len;
        num[len] = num[0];
        num[0] = '0';
        ++len;
    }

    while (std::cin.peek() != '\n') {
        num[len] = std::getchar();
        std::cout << num[len] << '/n';
        if (num[len] != '1' && num[len] != '0') {
            std::cout << "Ошибка. Введено не число.\n";
            num[0] = 'r';
            return num;
        }

        ++len;

        //num = (char*)realloc(num, (len + 2) * sizeof(char));
    }

    std::cout << num << "    ";

    std::cin.ignore(32324, '\n');

    num[16] = '\0';

    return num;
}

char* twoCompl(char* num) {
    int len = 0;
    int k = 15;

    while (num[len + 1] != '\0') ++len;

    if (len > 15) {
        std::cout << "Ошибка. Введённое число занимает больше 16 бит.   ";
        num[0] = 'r';
        return num;
    }

    if (len != 15) {
        while (len > 0) {
            num[k] = num[len];
            --len;
            --k;
        }

        while (k > 0) {
            num[k] = '0';
            --k;
        }
    }

    if (num[0] == '1') {
        for (int i = 1; i < 16; ++i) {
            if (num[i] == '0') {
                num[i] = '1';
            }
            else {
                num[i] = '0';
            }
        }

        bool dop = false;
        bool mega = true;

        for (int i = 15; i > 0; --i) {
            if (num[i] == '0') {
                if (dop == true) {
                    num[i] = '1';
                    break;
                }
                else if (mega) {
                    num[i] = '1';
                    break;
                }
            }
            else if (mega) {
                num[i] = '0';
                dop = true;
                mega = false;
            }
            else if (dop) {
                num[i] = '0';
            }
        }
    }

    return num;
}

char* sum(char* num1, char* num2) {
    bool v1;
    bool v2 = false;

    for (int i = 15; i > -1; --i) {
        v1 = false;

        if (v2) {
            if (num1[i] == '1' && num2[i] == '1') {
                v1 = true;
            }
            else if ((num1[i] == '1' && num2[i] == '0') || (num1[i] == '0' && num2[i] == '1')) {
                v1 = false;
            }
            else if (num1[i] == '0' && num2[i] == '0') {
                v1 = true;
                v2 = false;
            }
        }
        else {
            if (num1[i] == '1' && num2[i] == '1') {
                v1 = false;
                v2 = true;
            }
            else if ((num1[i] == '1' && num2[i] == '0') || (num1[i] == '0' && num2[i] == '1')) {
                v1 = true;
            }
            else if (num1[i] == '0' && num2[i] == '0') {
                v1 = false;
            }
        }

        if (v1) {
            num1[i] = '1';
        }
        else {
            num1[i] = '0';
        }
    }

    return num1;
}

char* est(char* num) {
    if (num[0] == '0') {
        for (int i = 0; i < 15; ++i) {
            num[i] = num[i + 1];
        }

        num[15] = '\0';

        int len = 14;

        while (true) {
            for (int i = 0; i < len; ++i) {
                num[i] = num[i + 1];
            }

            num[len] = '\0';

            --len;

            if (num[0] == '1' || len == 0) break;
        }
    }
    else {
        std::cout << "   " << num;
        num = sum(num, (char*)("1111111111111111"));
        num[0] = '-';

        int len = 15;

        for (int i = 1; i < len + 1; ++i) {
            if (num[i] == '0') {
                num[i] = '1';
            }
            else {
                num[i] = '0';
            }
        }

        while (true) {
            for (int i = 1; i < len; ++i) {
                num[i] = num[i + 1];
            }

            num[len] = '\0';

            --len;

            if (num[1] == '1' || len == 1) break;
        }
    }

    return num;
}