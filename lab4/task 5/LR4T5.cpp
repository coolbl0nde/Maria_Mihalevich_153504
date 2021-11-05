//Лабороторная 4, задача 5. Выполнена: Михалевич М.П.
/*Соседями элемента в матрице Aij назовем элементы АKL ; 
i-1 ≤ K≤ i+1, j-1 ≤ L ≤ j+1,(K,L) ≠ (i,j). Операция сглаживания матрицы дает новую матрицу того же размера, 
каждый элемент которой получается как среднее арифметическое имеющихся соседей соответствующего элемента исходной матрицы.
Построить результат сглаживания заданной вещественной матрицы*/

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
    srand(time(NULL));

    int n, m, k = 0, s = 0;
    bool a;

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

    double** arr = new double* [n];
    double** arr1 = new double* [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new double[m];
        arr1[i] = new double[m];
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = (double) (rand() % 100) / 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (i - 1 > -1) { s += arr[i - 1][j]; k++; }
            if (j - 1 > -1) { s += arr[i][j - 1]; k++; }
            if (i + 1 < n) { s += arr[i + 1][j]; k++; }
            if (j + 1 < m) { s += arr[i][j + 1]; k++; }

            arr1[i][j] = (double)s / k;


        }
    }

    std::cout << std::endl << "Новая матрица:" << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] arr1[i];
    }

    delete[] arr;
    delete[] arr1;
}