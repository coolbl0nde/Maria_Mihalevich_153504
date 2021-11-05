//Лабороторная 4, задача 2. Выполнена: Михалевич М.П. Вариант 13
/*Найти сумму сумму элементов, расположенных в четных(по номеру) строках матрицы.*/

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

int main(){

    setlocale(LC_ALL, "ru");
    srand(time(NULL));

    const int N = 100, M = 100;
    int n, m, sum = 0, array[N][M];

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

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

    std::cout << "Сумма: " << sum;

    return 0;
}
