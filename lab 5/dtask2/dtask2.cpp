#include <iostream>
#include <cmath>

int f(int, int, int);
int fk(int, int, int);

int f(int n, int i, int k) {
	if (n == 0 && i == 0) {
		return 1;
	}
	if (n > 0 && 0 <= i < n*(k - 1) + 1) {
		return fk(n, i, k);
	}
	else {
		return 0;
	}
}


int fk(int n, int r, int k) {
	int sum = 0;

	for (int i = 0; i <= k - 1; ++i) {
		sum += f(n - 1, r - i, k);
	}

	return sum;
}

int main(){
	int k, n, t, m, x = 0;
	std::cin >> k >> n >> t;

	m = pow(10, t);

	for (int i = 0; i < n * (k - 1); i++) {
		x += f(n, i, k);
	}

	x = x % m;

	std::cout << "x = " << x;
}