//Лабороторная 4, задача 10. Выполнена: Михалевич М.П.
/*В качестве входных данных поступают две целочисленные 
матрицы A и B, которые имеют размер N и соответственно. Требуется найти 
произведение матриц A*B*/

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail() || value < 1) {
            std::cin.clear();
            std::cin.ignore(32767, '\n');
            std::cout << "Oшибка. Введите ещё раз: \n";
        }
        else {
            std::cin.ignore(32767, '\n');

            return value;
        }
    }
}

int main() {

    int n, m, k, s = 0;

    std::cout << "Введите M: ";
    m = input();

    std::cout << "Введите N: ";
    n = input();

    std::cout << "Введите K: ";
    k = input();

    int** arr = (int**)malloc(m * sizeof(int*));

    for (int i = 0; i < n; i++) {
        arr[i] = (int*)malloc(n * sizeof(int));
    }

    int** arr1 = (int**)malloc(n * sizeof(int*));

    for (int i = 0; i < n; i++) {
        arr1[i] = (int*)malloc(k * sizeof(int));
    }


    std::cout << std::endl;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            arr[i][j] = rand() % 10;
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }


    std::cout << std::endl;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < k; j++) {
            arr1[i][j] = rand() % 10;
            std::cout << arr1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << std::endl << "Произведение матриц: " << std::endl;
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


    for (int i = 0; i < n; i++) {
        free(arr[i]);
    }

    for (int i = 0; i < n; i++) {
        free(arr1[i]);
    }

    free(arr);
    free(arr1);
}