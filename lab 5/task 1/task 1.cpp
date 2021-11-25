//Лабораторная 5, задача 1. Выполнена: Михалевич М.П.
/*Составить программу вычисления элементов двумерного динамического 
массива-матрицы A размерностью n x n. Значения элементов 
ij a определить согласно выражениям. Размерность массивов (n = 3) ввести с клавиатуры.
Значения элементов двумерных массивов-матриц В и С ввести с клавиатуры.
Результат – значения массива А вывести на экран. Использовать функции. */

#include <iostream>
#include <cmath>

int inputValue() {
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

void outputArray(int** arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

void input(int **arr, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            std::cin >> arr[i][j];
        }
    }
}

void arrayA(int **arr1, int** arr2, int** arr3, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (abs(arr2[i][j]) > abs(arr3[i][j])) {
                arr1[i][j] = arr2[i][j];
            }
            if (abs(arr2[i][j]) <= abs(arr3[i][j])) {
                arr1[i][j] = arr3[i][j];
            }
        }
    }
}

int main(){
	int n;

	std::cout << "n: ";
	n = inputValue();

    int** arrA = new int*[n];
    int** arrB = new int*[n];
    int** arrC = new int*[n];

    for (int i = 0; i < n; i++) {
        arrA[i] = new int[n];
        arrB[i] = new int[n];
        arrC[i] = new int[n];
    }

    std::cout << "Enter Array B: ";
    input(arrB, n);
    std::cout << "Enter Array C: ";
    input(arrC, n);

    std::cout << "Array B: " << std::endl;
    outputArray(arrB, n);
    std::cout << "Array C: " << std::endl;
    outputArray(arrC, n);

    arrayA(arrA, arrB, arrC, n);

    std::cout << "Array A: " << std::endl;
    outputArray(arrA, n);

    for (int i = 0; i < n; i++) {
        delete[] arrA[i];
        delete[] arrB[i];
        delete[] arrC[i];

    }

    delete[] arrA;
    delete[] arrB;
    delete[] arrC;

    return 0;
}
