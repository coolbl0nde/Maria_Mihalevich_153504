//Лабороторная 4, задача 1. Выполнена: Михалевич М.П. Вариант 13

#include <iostream>

int main(){

    srand(time(NULL));
    
    const int  N = 100;
    int array[N], k, sum = 0, n = 0;

    std::cout << "Enter k: ";
    std::cin >> k;

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

    std::cout << "\nn = " << n;

    return 0;
}
