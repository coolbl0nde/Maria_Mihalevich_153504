#include <iostream>
#include <cmath>

int main() {

    int size, k = 1, a;

    std::cout << "Enter a: ";
    std::cin >> a;

    size = sqrt(a) + 1;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++) {
        arr[i] = new int[size];
    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = k;
            do {
                if () {

                }
            }while(arr[i][j] != a)
        }
    }

    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}