#include <iostream>

int main(){

    srand(time(NULL));

    const int N = 10, M = 10;
    int n, m, sum = 0, array[N][M], max;

    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Enter m: ";
    std::cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            array[i][j] = 1 + rand() & 10;
            //std::cin >> array[i][j];
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            if ((j != 0 && array[i][j-1] > array[i][j]) || ( i != 0 && array[i-1][j] > array[i][j])) {
                max = (array[i - 1][j] > array[i][j - 1]) ? array[i - 1][j] : array[i][j - 1];
                array[i][j] = max;
            }

            std::cout << array[i][j] << " ";
        }
       std::cout << std::endl;
    }

    return 0;
}
