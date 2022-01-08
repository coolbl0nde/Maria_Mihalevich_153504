//Лабораторная 7, задача 8. Выполнила Михалевич М.П.

#include <iostream>
#include <string>

void tobinary(int a, std::string& str);

int main() {

	short Digit = 0, n; 
	std::cin >> n;

	std::string a = "10", b = "8", c = "1", d = "100", e = "1000";

	for (short i = 1; i <= 10000; ++i) {

		std::string digit = std::to_string(i);

		bool same = 0;

		std::string binary; 
		
		tobinary(i, binary);

		for (short j = 0; binary != digit; ++j) {
			if (binary.length() == 0) break;
			binary.erase(0, 1);
		}

		if (binary.length()) same = 1;
		if (same) ++Digit;
		if (Digit == n) {
			std::cout << i;
			break;
		}

		short A = atoi(a.c_str());
		short B = atoi(b.c_str());
		short C = atoi(c.c_str());
		short D = atoi(d.c_str());
		short E = atoi(e.c_str());

		if (i % A == C) {
			i += B;
			a += "0";
			b += "8";
			c += "1";
		}
		else if (i % E == 11) {
			i += 88;
			e += "0";
		}
		else if ((i % D) % 10 == 1 && i != 1) {
			i += 8;
			d += "0";
			continue;
		}
	}
	return (0);
}

void tobinary(int a, std::string& str) {
	int n = 0;

	while ((a >> n++) > 1);

	int num = a, bin;

	while (n > 0) {
		bin = pow(2, --n);

		if (num < bin) str += '0';
		else {
			str += '1';
			num -= bin;
		}
	}
}