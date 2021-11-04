#include <iostream>

int main() {

    int N, sum = 0;

    std::cout << "N: ";
    std::cin >> N;

    int* a = new int[N];

    for (int i = 0; i < N; i++) {
        std::cout << "a[" << i << "] = ";
        std::cin >> a[i];
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1 || i == 0) {
            sum += a[i] - 1;
        }else {
            sum += a[i] - 2;
        }
    }

    std::cout << "sum = " << sum;

    return 0;
}
