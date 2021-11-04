#include <iostream>

int main() {

    int size, sum = 0, p = 1, k = -1;

    std::cout << "Enter size: ";
    std::cin >> size;

    int** arr = new int* [size];

    for (int i = 0; i < size; i++) {

        arr[i] = new int[size];

    }

    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < size; i++) {
        if (size / 2 >= i) {
            k++;
        }else {
            k--;
        }
        for (int j = k; j < size - k; j++) {
            sum += arr[i][j];
            p *= arr[i][j];
        }
    }

    std::cout << std::endl << "sum = " << sum << " p = " << p;

    for (int i = 0; i < size; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}