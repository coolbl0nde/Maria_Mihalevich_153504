//Лабороторная 4, задача 14. Выполнена: Михалевич М.П.
/*На вход подаётся поле для игры в "сапёр" размером n*m символов, где символ '.' означает
пустое место, а символ '*' - бомбу. Требуется дополнить это поле числами , как в оригинальной игре.
Выделение памяти через функции языка С.*/

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

int inputChar() {

    char value;

    std::cin >> value;

    if (std::cin.fail() || (value != '.' && value != '*')) {
        std::cin.clear();
        std::cin.ignore(32767, '\n');
        std::cout << "Oшибка. Введите ещё раз: \n";
    }
    else {
        std::cin.ignore(32767, '\n');

        return value;
    }
}


int main(){

    setlocale(LC_ALL, "ru");

    int n, m, k;

    std::cout << "Введите кол-во строк: ";
    n = input();

    std::cout << "Введите кол-во столбцов: ";
    m = input();

    char** array = (char**)malloc(n * sizeof(char*));

    for (int i = 0; i < n; i++) {
        array[i] = (char*)malloc(m * sizeof(char));
    }

    std::cout << "Введите элемнты для игрового поля:\n";

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            array[i][j] = inputChar();
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            k = 0;
            if (array[i][j] == '.') {
                if (j - 1 > -1 && array[i][j - 1] == '*') k++;
                if (j + 1 < m && array[i][j + 1] == '*') k++;
                if (i - 1 > -1 && array[i - 1][j] == '*') k++;
                if (i + 1 < n && array[i + 1][j] == '*') k++;
                if (i - 1 > -1 && j - 1 > -1 && array[i - 1][j - 1] == '*') k++;
                if (i + 1 < n && j - 1 > -1 && array[i + 1][j - 1] == '*') k++;
                if (i - 1 > -1 && j + 1 < m && array[i - 1][j + 1] == '*') k++;
                if (i + 1 < n && j + 1 < m && array[i + 1][j + 1] == '*') k++;
                array[i][j] = k + '0';
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            std::cout << array[i][j] << " ";
        }
        std::cout << std::endl;
    }

    for (int i = 0; i < n; i++) {
        free(array[i]);
    }

    free(array);

    return 0;
}
