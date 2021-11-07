//Лабороторная 4, задача 6. Выполнена: Михалевич М.П.

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1 || value > 10) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Error\n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

int main(){

    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    const int N = 10, M = 10;
    int n, m, sum = 0, max, array[N][M];

    std::cout << "Введите кол-во строк до 10: ";
    n = input();

    std::cout << "Введите кол-во столбцов до 10: ";
    m = input();

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {

            array[i][j] = 1 + rand() & 10;
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Новая матрица: " << std::endl;

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
