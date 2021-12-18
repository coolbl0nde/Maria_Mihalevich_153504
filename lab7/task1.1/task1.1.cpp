/* Необходимо разработать программу для перевода чисел из одной
системы счисления в другую. Выполнить два варианта решения задачи:
без использования массивов и с помощью массивов.
13) из четырнадцатеричной в троичную; */

#include <iostream>
#include <cmath>

double toTen(char* input, int lenght_input);
double toTernary(double nm);

int main() {
	int N = 2, length, pwr = -1, i = 0, z = 1;
	double mass[7], a = 0;
	char* str = (char*)malloc(N * sizeof(char));
	std::cout << "Enter line: ";
	for (length = 0; '\n' - (str[length] = getchar()); ++length) {
		if (length == N - 1) {
			str = (char*)realloc(str, (N *= 2) * sizeof(char));
		}
	}
	str = (char*)realloc(str, (length + 1) * sizeof(char));
	str[length] = '\0';

	a = toTen(str, length);

	std::cout << std::endl << std::fixed << toTernary(a) << std::endl;

	free(str);
	return 0;
}

double toTen(char* input, int lenght_input) {
	bool minus = false;
	double answer = 0;
	int i = 0, step = lenght_input - 1;
	
	for (int i = 0; i < lenght_input; ++i) {
		if (input[i] == '.') {
			step = i;
			break;
		}
	}

	for (int j = 0; j < lenght_input; j++) {
		if (input[j] == '-' || input[j] == '.') {
			minus = true;
			i = 1;
			--step;
		}
	}

	for (; i < lenght_input; ++i, --step) {

		if (input[i] >= '0' && input[i] <= '9') {
			answer += (input[i] - '0') * pow(14, step);
			continue;
		}
		if (input[i] == 'A' || input[i] == 'a') {
			answer += 10 * pow(14, step);
			continue;
		}
		if (input[i] == 'B' || input[i] == 'b') {
			answer += 11 * pow(14, step);
			continue;
		}
		if (input[i] == 'C' || input[i] == 'c') {
			answer += 12 * pow(14, step);
			continue;
		}
		if (input[i] == 'D' || input[i] == 'd') {
			answer += 13 * pow(14, step);
			continue;
		}
		if (input[i] == '.') {
			step = 0;
		}
	}

	if (minus)
		answer *= -1;

	return answer;
}

double toTernary(double nm) {
	bool minus = false;
	double number = 0;
	int pwr = -1;

	if (nm < 0) {
		nm *= -1;
		minus = true;
	}

	int intg = (int)nm;
	double flt = nm - (int)nm;

	while (intg > 0) {
		++pwr;
		number += intg % 3 * pow(10, pwr);
		intg /= 3;
	}

	if (flt != 0) {
		pwr = 0;

		for (int i = 0; i < 10; ++i) {
			--pwr;
			number = number + pow(10, pwr) * (int)(flt * 3);
			flt = flt * 3 - (int)(flt * 3);
		}
	}

	if (minus) number *= -1;

	return number;
}