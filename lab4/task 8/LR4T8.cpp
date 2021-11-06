//Лабороторная 4, задача 8. Выполнена: Михалевич М.П.
/*Заменить нулями все элементы, которые находятся в ячейках 
между минимальным и максимальным элементами (не включая их). 
Изначально все элементы в массиве различные. Если после данного действия 
большая часть массива будет содержать нули, то удалить все нулевые 
элементы из массива (c сохранением порядка следования остальных 
элементов).*/

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
    std::ios_base::sync_with_stdio(0);
    srand(time(NULL));

    int n, max, min, a = 0, b = 0, k = 0;

    std::cout << "Введите размер массива: ";
    n = input();

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n + 1;
        for (int j = 0; j < i; j++) {
            if (arr[i] == arr[j]) {
                arr[i] = rand() % n + 1;
                j = -1;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    min = arr[0];
    max = arr[0];

    for (int i = 0; i < n; i++) {
        if (arr[i] > max) {
            max = arr[i];
            a = i;
        }
        if (arr[i] < min) {
            min = arr[i];
            b = i;
        }
    }

    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        if ((i > b && i < a) || (i > a && i < b)) {
            arr[i] = 0;
            k++;
        }
        std::cout << arr[i] << " ";
    }

    if (k > n / 2) {
        for (int i = 0; i < n - 2; i++) {
            if (arr[i] == 0) {
                arr[i] = arr[i + k];
            }
        }
    }else k = 0;

    std::cout << std::endl;
    for (int i = 0; i < n - k; i++) {
        std::cout << arr[i] << " ";
    }

	return 0;
}