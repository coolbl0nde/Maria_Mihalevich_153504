//Лабораторная 5, задача 2. Выполнена: Михалевич М.П.
/*Для заданного одномерного массива A из N элементов проверить, что существует по 
крайней мере один элемент Ai, для которого выполняется условие Ai ≤ i
2. Рекурсивную функцию применять каждый раз отдельно для каждой из половин массива. 
Рекурсивные вызовы заканчивать, когда останется только один элемент */

#include <iostream>
#include <Windows.h>

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

	setlocale(LC_ALL, "ru");

	int n;

	std::cout << "Введите размер массива: ";
	n = input();

	int* A = new int[n];

	std::cout << "Введите элементы массива:\n";
	for (long long int i = 0; i < n; i++) {
		std::cin >> A[i];
	}

	int N = 0;

	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef int (*recursion) (int*, int&, int);
	recursion rec = (recursion)GetProcAddress(load, "recursion");

	if (n / 2 != 1)  rec(A, N, (n / 2 - 1));
	else  if (A[N] <= N * N) std::cout << N++ << " элемент массива удовлетворяет условию\n";

	rec(A, N, (n - 1));

	FreeLibrary(load);
	return 0;
}