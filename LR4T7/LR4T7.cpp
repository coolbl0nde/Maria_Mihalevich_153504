#include <iostream>

int main(){
    int n = 0, k, j;
    double m;

    std::cout << "Enter j: ";
    std::cin >> j;

    do {
        m = j / pow(10, n);
        n++;
    } while (m > 1);

    n--;

    int* arr = new int [n];

    std::cout << "Enter k: ";
    std::cin >> k;

    for (int i = 0; i < n; i++) {
        arr[i] = j % 10;
        j /= 10;
    }

    std::cout << arr[k];

    return 0;
}
