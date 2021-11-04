#include <iostream>

int main() {

    srand(time(NULL));

    int n, d1 = 0, d2 = 0, d3 = 0, d4 = 0, max1, max2;

    std::cout << "Enter n: ";
    std::cin >> n;

    int*** arr = new int** [n];

    for (int i = 0; i < n; i++) {
        arr[i] = new int* [n];
        for (int j = 0; j < n; j++) {
            arr[i][j] = new int[n];
        }

    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            for (int z = 0; z < n; z++) {
                arr[i][j][z] = rand() % 10;
                std::cout << arr[i][j][z] << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    for (int i = 0, j = n - 1; i < n; i++, j--) {
        d1 += arr[i][i][i];
        d2 += arr[i][i][j];
        d3 += arr[i][j][i];
        d4 += arr[j][j][j];
    }

    max1 = (d1 > d2) ? d1 : d2;
    max2 = (d3 > d4) ? d3 : d4;
    max1 = (max1 > max2) ? max1 : max2;

    std::cout << max1;

    return 0;
}