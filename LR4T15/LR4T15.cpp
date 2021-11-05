#include <iostream>
#include <cmath>

int main() {

    int size, k = 1, a, b = 0, c = 0;

    std::cout << "Enter a: ";
    std::cin >> a;

    size = sqrt(a) + 1;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    arr[0][0] = k;

    if (k != a) {
        c++;
        k++;
        while (k != a) {
            if (b < c) {
              arr[b][c] = k;
              b++;
            }else if (b >= c && c != 0) {
              arr[b][c] = k;
              c--;
            }else if (c == 0) {
              arr[b][c] = k;
              c = b + 1;
              b = 0;
            }
            k++;
        }
    }



    std::cout << b << " " << c;

    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}