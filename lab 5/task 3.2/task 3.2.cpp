//Лабораторная 5, задача 3.2. Выполнена: Михалевич М.П.
/*Создать двумерный динамический массив вещественных чисел. Определить, 
встречаются ли среди них элементы с нулевым значением. Если встречаются такие 
элементы, то определить их индексы и общее количество. Переставить элементы этого 
массива в обратном порядке и вывести на экран.
Использовать функции. */

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Oшибка. Введите ещё раз: \n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

int inputArray() {
    while (true) {
        double value;

        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Oшибка. Введите ещё раз: \n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

void outputArray(double** arr, int n, int m) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

double** rev(double** arr, int n, int m) {
    double** arr1 = new double* [n];

    for (int i = 0; i < n; i++) {
        arr1[i] = new double[m];
    }

    for(int i = 0, a = n - 1; i < n; i++, a--){
        for (int j = 0, b = m - 1; j < m; j++, b--) {
            arr1[a][b] = arr[i][j];
        }
    }
    return arr1;
}

int main() {

    setlocale(LC_ALL, "ru");

    int n, m, k = 0;

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

    double** arr = new double* [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new double[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cin >> arr[i][j];
        }
    }

    outputArray(arr, n, m);

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            if (arr[i][j] == 0) {
                std::cout << "arr[" << i << "][" << j << "] = 0" << " ";
                k++;
            }
        }
    }

    std::cout << "\nКоличество нулей: " << k;

    arr = rev(arr, n, m);

    std::cout << "\nНовый массив:\n";
    outputArray(arr, n, m);

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}