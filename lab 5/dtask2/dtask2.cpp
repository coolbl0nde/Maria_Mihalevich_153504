#include <iostream>
#include <cmath>

int input() {
    while (true) {
        int value;

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

int modExp(int k, int n, int m) {
    if (n == 0) {
        return 1;
    }
    else if (n % 2 == 1) {
        return (k * modExp(k, n - 1, m)) % m;
    }

    int a = modExp(k, n / 2, m);

    return (a * a) % m;
}

int main() {

	int k, n, t, m, f, N = 1;

	std::cout << "Enter k, n, t: ";
    k = input();
    n = input();
    t = input();

    m = pow(10, t);

    int* arr = new int[1];

    while (k != 0 && n != 0) {
        if (N != 1) arr = (int*)realloc(arr, N * sizeof(int));
        arr[N - 1] = modExp(k, n, m);
        N++;
        k = input();
        n = input();
        t = input();
    }

    for (int i = 0; i < N - 1; i++) {
        std::cout << std::endl << arr[i];
    }

    delete arr;

    return 0;
}