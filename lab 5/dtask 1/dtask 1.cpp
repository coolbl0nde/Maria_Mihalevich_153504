//Лабораторная 5, дополнительная задача 1. Выполнена: Михалевич М.П.
/*Определим следующую рекурсивную функцию f(n):
        n%10, if (n%10>0)
f(n)=   0, if n = 0
        f(n/10), otherwise

    Определим функцию S (p, q) следующим образом:
    S(p, q)+= F(i) -- (if i <= q)

    По заданным p и q необходимо вычислить S (p, q).*/

#include <iostream>

int input() {
    while (true) {
        int value;

        std::cin >> value;

        if (std::cin.fail()) {
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

int rec(int i) {
    if (i % 10 > 0) {
        return i % 10;
    }else if (i == 0) {
        return 0;
    }else {
        return rec(i / 10);
    }
}

int summa(int p, int q) {
    int S = 0;
    for (int i = p; i <= q; i++){
        S += rec(i);
    }
    return S;
}

int main(){
    int  p, q, S, n = 1;

    p = input();
    q = input();

    int* arr = new int[1];

    while (p != -1 && q != -1) {
        if (n != 1) arr = (int*)realloc(arr, n * sizeof(int));
        arr[n - 1] = summa(p, q);
        n++;
        p = input();
        q = input();
    }

    for (int i = 0; i < n - 1; i++) {
        std::cout << std::endl << arr[i];
    }

    delete arr;

    return 0;
}
