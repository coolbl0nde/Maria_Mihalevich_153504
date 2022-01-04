//Лабораторная 6, задача 5. Выполнила Михалевич М.П.

#include<iostream>
#include<string>

using namespace std;

int inputInt(int min, int max);

int findWordAmount(const int& L, const int& m, const std::string s1, const std::string s2);

int main() {

	int n = inputInt(0, 101);

	while (n > 0){
		int m = inputInt(0, 10e4 + 1), L = inputInt(0, 10e9 + 1);

		std::string s1, s2;

		std::cin.ignore(32767, '\n');
		std::getline(std::cin, s1);
		std::getline(std::cin, s2);

		cout << findWordAmount(m, L, s1, s2);
		--n;
	}

	return 0;
}

int findWordAmount(int& m, int& L, std::string s1, std::string s2) {
	int  firstPref = 0, amount = 0;

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] == s2[firstPref]) {
			for (int j = i; j < s1.length(); j++)
			{
				if (s1[j] == s2[firstPref])
				{
					++firstPref;
				}
				else {
					firstPref = 0;
					break;
				}
			}

		}
	}

	int l = L - (s1.length() + s2.length() - firstPref);

	if (l > 0)
		amount = pow(26, l) * 2;
	else if (l == 0)
		amount = 1;
	else
		amount = 0;
	return amount % m;
}

int inputInt(int min, int max) {
	int x;
	while (true)
	{
		std::cin >> x;

		if (x < max && x > min)
			return x;

		std::cin.clear();
		std::cin.ignore(32000, '\n');
		std::cout << "Enter correct word" << std::endl;
	}
}