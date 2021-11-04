#include <iostream>

int main() {

    int n, m, k, s = 0;

    std::cout << "m: ";
    std::cin >> m;

    std::cout << "n: ";
    std::cin >> n;

    std::cout << "k: ";
    std::cin >> k;

    int** arr = new int* [m];
    double** arr1 = new double* [n];

    for (int i = 0; i < m; i++) {
        arr[i] = new int[n];
    }

    for (int i = 0; i < n; i++) {
        arr1[i] = new double[k];
    }



    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;
            //std::cin >> arr[i][j];
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            arr1[i][j] = rand() % 10;
            //std::cin >> arr1[i][j];
        }
    }




    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            s = 0;
            for (int z = 0; z < n; z++) {
                s += arr[i][z] * arr1[z][j];
            }
            std::cout << s << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < m; i++) {
        delete[] arr1[i];
    }

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
    delete[] arr1;
}