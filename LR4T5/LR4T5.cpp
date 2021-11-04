#include <iostream>

int main() {

    int n, m, k = 0, s = 0;
    bool a;

    std::cout << "n: ";
    std::cin >> n;

    std::cout << "m: ";
    std::cin >> m;

    int** arr = new int* [n];
    double** arr1 = new double* [n];

    for (int i = 0; i < n; i++) {

        arr[i] = new int[m];
        arr1[i] = new double[m];

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if (i - 1 > -1) { s += arr[i - 1][j]; k++; }
            if (j - 1 > -1) { s += arr[i][j - 1]; k++; }
            if (i + 1 < n) { s += arr[i + 1][j]; k++; }
            if (j + 1 < m) { s += arr[i][j + 1]; k++; }

            arr1[i][j] = (double)s / k;


        }
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
        delete[] arr1[i];
    }

    delete[] arr;
    delete[] arr1;
}