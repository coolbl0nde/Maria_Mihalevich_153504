//Лабороторная 4, задача 4. Выполнена: Михалевич М.П.
/*Подсчитать кол-во локальных минимумов*/

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1) {
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

int main() {

    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    int size, sum = 0, p = 1, k = 0, n, m;
    bool a;

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

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

    std::cout << "Кол-во локальных минимумов: " << k;

    for (int i = 0; i < n; i++) {
        delete[] arr[i];
    }

    delete[] arr;
}