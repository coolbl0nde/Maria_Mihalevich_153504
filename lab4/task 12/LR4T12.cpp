//Лабороторная 4, задача 12. Выполнена: Михалевич М.П.
/* Написать функцию которая будет удалять дубликаты элементов 
из массива. Входные параметры: массив, длинна массива. Выходные 
параметры: новый массив, новый размер.*/

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

int array(int[], int);
int array(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                for (int z = j; z < n - 1; z++) {
                    arr[z] = arr[z + 1];
                }
                n--;
            }
        }
    }

    return n;
}

int main(){

    setlocale(LC_ALL, "ru");

    int n;

    std::cout << "Введите размер массива: ";
    n = input();

    int* arr = new int[n];

    std::cout << "Введите элементы массива: ";
    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    n = array(arr, n);

    std::cout << "Новый массив: ";

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
