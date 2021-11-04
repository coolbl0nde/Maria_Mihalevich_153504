#include <iostream>

int main() {

    int size, sum = 0, p = 1, k = 0, n, m;
    bool a;

    std::cout << "n: ";
    std::cin >> n;

    std::cout << "m: ";
    std::cin >> m;

    int** arr = new int* [n];

    for (int i = 0; i < n; i++) {

        arr[i] = new int[m];

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
            a = true;

            if (i - 1 > -1 && arr[i - 1][j] <= arr[i][j]) a = false;
            if (j - 1 > -1 && arr[i][j - 1] <= arr[i][j]) a = false;
            if (i + 1 < n && arr[i + 1][j] <= arr[i][j]) a = false;
            if (j + 1 < m && arr[i][j + 1] <= arr[i][j]) a = false;

            if (a) k++;
        }
    }

    std::cout << "k = " << k;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}