#include <iostream>

int main(){

    srand(time(NULL));

    const int N = 100, M = 100;
    int n, m, sum = 0, array[N][M];

    std::cout << "Enter n: ";
    std::cin >> n;

    std::cout << "Enter m: ";
    std::cin >> m;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            array[i][j] = rand() & 10;
            std::cout << array[i][j] << " ";

            if (i % 2 == 0 && i != 0) {
                sum += array[i][j];
            }
        }
        std::cout << std::endl;
    }

    std::cout << sum;

    return 0;
}
