#include <iostream>

extern "C" __declspec(dllexport) void recursion(int *mass, int& N, int m) {

	if (mass[N] <= N * N) std::cout << N + 1 << " элемент массива удовлетворяет условию\n";
	if (N == m) {
		N++;
		return;
	}

	recursion(mass, ++N, m);
}