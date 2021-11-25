//Лабораторная 5, дополнительная задача 2. Выполнена: Михалевич М.П.
/*Написать рекурсивную функцию возведение в степень по модулю.
Каждая строка содержит три целых числа: k (0 < k < 1019), n (0 < n < 1019) и t (0 < t < 10).
Последняя строка содержит три нуля и не обрабатывается.*/

#include <iostream>
#include <cmath>

int input() {
    while (true) {
        unsigned long long int value;

        std::cin >> value;

        if (std::cin.fail()) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error. Enter again:  \n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

unsigned long long int F(unsigned long long int x, unsigned long long int y, unsigned long long int z) {

    if (y == 0) return 1;
    else if (y % 2)return x * F(x * x % z, y / 2, z) % z;
    else return F(x * x % z, y / 2, z);
}

int main() {

    unsigned long long int k, n, t, m, f, N = 1, l;

	std::cout << "Enter k, n, t: ";
    k = input();
    n = input();
    t = input();
    m = pow(10, t);
    l = k % m;
    int* arr = new int[1];

    while (k != 0 && n != 0) {
        if (N != 1) arr = (int*)realloc(arr, N * sizeof(int));
        arr[N - 1] = F(l, n, m);
        N++;
        k = input();
        n = input();
        t = input();
        m = pow(10, t);
        l = k % m;
    }

    for (int i = 0; i < N - 1; i++) {
        std::cout << std::endl << arr[i];
    }

    delete arr;

    return 0;
}