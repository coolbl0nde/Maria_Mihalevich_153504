//Лабороторная 4, задача 7. Выполнена: Михалевич М.П.
/*Дано натуральное число n. Требуется подсчитать количество цифр 
числа и определить, какая цифра стоит в разряде с номером i (разряды 
нумеруются с конца, т.е. разряд единиц имеет номер 0).*/

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error\n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

int main(){

    setlocale(LC_ALL, "ru");

    int n = 0, k, j;
    double m;

    std::cout << "Введите натуральное число: ";
    j = input();

    do {
        m = j / pow(10, n);
        n++;
    } while (m > 1);

    n--;

    int* arr = new int [n];

    std::cout << "Введите разряд: ";
    k = input();

    for (int i = 0; i < n; i++) {
        arr[i] = j % 10;
        j /= 10;
    }

    std::cout << "Количество цифр: " << n << " Цифра стоит в разряде с номером: " << arr[k];

    return 0;
}
