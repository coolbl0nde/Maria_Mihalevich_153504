//Лабороторная 4, задача 3. Выполнена: Михалевич М.П. Вариант 13
/*Дана действительная квадратная матрица порядка N. Найти сумму и произведение элементов*/

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

int main() {

    setlocale(LC_ALL, "ru");

    double size, sum = 0, p = 1, k = -1;

    std::cout << "Введите размер массива: ";
    size = input();

    double** arr = new double* [size];

    for (int i = 0; i < size; i++) {
        arr[i] = new double[size];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = (double) (rand() % 100) / 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < size; i++) {
        if (size / 2 >= i) {
            k++;
        }else {
            k--;
        }
        for (int j = k; j < size - k; j++) {
            sum += arr[i][j];
            p *= arr[i][j];
        }
    }

    std::cout << std::endl << "Cумма = " << sum << " Произведение = " << p;

    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}