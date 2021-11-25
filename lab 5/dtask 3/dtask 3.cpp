//Лабораторная 5, дополнительная задача 3. Выполнена: Михалевич М.П.
/*Пусть f(n) - наибольший нечетный делитель натурального числа n. По заданному 
натуральному n необходимо вычислить значение суммы f(1) + f(2) + ... + f(n).*/

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

int max(int* arr, int k) {
    int max = arr[0];
    for (int i = 0; i < k; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main(){
    int n, s = 0;

    std::cout << "n = ";
    n = input();

    int* arr = new int[n];

    for (int i = 1, k = 0; i <= n; i++) {
        for (int j = 1; j <= i; j++) {
            k = 0;
            if (i % j == 0 && j % 2 != 0) {
                arr[k] = j;
                k++;
            }
        }
        s += max(arr, k);;
    }

    std::cout << "S = " << s;

    delete arr;

    return 0;
}

