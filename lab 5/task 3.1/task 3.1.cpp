#include <iostream>
#include "..\StaticLib\Header.h";

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
        int value;

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

int main(){

    setlocale(LC_ALL, "ru");

    int n, m, k = 0, p = 1;

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

    int** arr = new int* [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new int[m];
    }

    std::cout << "Введите элеменеты массива: ";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = inputArray();
            if (i == j && arr[i][j] % 2 == 0) {
                k++;
            }
        }
    }

    int* arr1 = new int [k];

    for (int i = 0, z = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr[i][j] << " ";
            if (i == j && arr[i][j] % 2 == 0) {
                arr1[z] = arr[i][j];
                //p *= arr1[z];
                z++;
            }
        }
        std::cout << std::endl;
    }

    std::cout << "\n массив из элементов, расположенных на главной диагонали матрицы и имеющих четное значение:\n";
    for (int i = 0; i < k; i++) {
        std::cout << arr1[i] << " ";
    }

    std::cout << "\n произведение массива: " << product(arr1, k);


    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] arr1;
}