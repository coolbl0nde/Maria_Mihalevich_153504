#include <iostream>
#include <Windows.h>

int main() {
	HINSTANCE load;
	load = LoadLibrary(L"DynamicLib.dll");
	typedef int (*recursion) (int*, int&, int);

	recursion rec;
	rec = (recursion)GetProcAddress(load, "recursion");

	setlocale(LC_ALL, "ru");

	int n;

	std::cout << "Введите размер массива: ";
	std::cin >> n;

	int* A = new int[n];

	std::cout << "Введите элементы массива:\n";
	for (long long int i = 0; i < n; i++) {
		std::cin >> A[i];
	}

	int N = 0;

	if (n / 2 != 1)  rec(A, N, (n / 2 - 1));
	else  if (A[N] <= N * N) std::cout << N++ << " элемент массива удовлетворяет условию\n";

	rec(A, N, (n - 1));

	FreeLibrary(load);
	return 0;
}