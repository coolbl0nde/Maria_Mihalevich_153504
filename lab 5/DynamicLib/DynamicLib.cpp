#include <iostream>

extern "C" __declspec(dllexport) void recursion(int *mass, int& N, int m) {

	if (mass[N] <= N * N) std::cout << N + 1 << " ������� ������� ������������� �������\n";
	if (N == m) {
		N++;
		return;
	}

	recursion(mass, ++N, m);
}