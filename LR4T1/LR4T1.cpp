//Лабороторная 4, задача 1. Выполнена: Михалевич М.П. Вариант 13
/*Определить кол-во элементов, значение которых больше среднего значения*/

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cout << "Введите размер массива: ";
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
    srand(time(NULL));
    
    const int  N = 100;
    int array[N], k, sum = 0, n = 0;

    k = input();

    for (int i = 0; i < k; i++) {
        array[i] = rand() % 100;
        sum += array[i];

        std::cout << array[i] << " ";
    }

    sum = sum / k;

    for (int i = 0; i < k; i++) {
        if (array[i] > sum) {
            n++;
        }
    }

    std::cout << "\nКол-во элементов, значение которых больше среднего значения: " << n;

    return 0;
}
