//Лабороторная 4, задача 13. Выполнена: Михалевич М.П.
/*У Миши в общежитии всего лишь 1 розетка. Дабы исправить это 
недоразумение, Миша купил N удлинителей таких, что i-й удлинитель имеет 
a[i] входов. Вычислите, сколько розеток получится у Миши, если он 
оптимально соединит удлинители?*/

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

    int N, sum = 0;

    std::cout << "Введите кол-во удлинителей: ";
    N = input();

    int* a = new int[N];

    std::cout << "Введите кол-во входов: " << std::endl;
    for (int i = 0; i < N; i++) {
        std::cout << "a[" << i << "] = ";
        a[i] = input();
    }

    for (int i = 0; i < N; i++) {
        if (i == N - 1 || i == 0) {
            sum += a[i] - 1;
        }else {
            sum += a[i] - 2;
        }
    }

    std::cout << "Кол-во розеток: " << sum;

    return 0;
}
