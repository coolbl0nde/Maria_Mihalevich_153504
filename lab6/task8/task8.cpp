//Лабораторная 6, задача 8. Выполнила Михалевич М.П.
/*У вас есть строка s и фишка, которую вы можете поставить на любой символ 
этой строки.
После того, как вы поставите фишку, вы можете подвинуть ее вправо 
несколько (возможно, ноль) раз, то есть сделать следующее действие 
несколько раз: если текущая позиция фишки обозначена как i, фишка 
перемещается в позицию i+1. Конечно же, это действие невозможно, если 
фишка находится в последней позиции строки.
После того, как вы закончите двигать фишку вправо, вы можете подвинуть ее 
влево несколько (возможно, ноль) раз, то есть сделать следующее действие 
несколько раз: если текущая позиция фишки обозначена как i, фишка 
перемещается в позицию i−1. Конечно же, это действие невозможно, если 
фишка находится в первой позиции строки.
Когда вы ставите фишку или перемещаете ее, вы выписываете символ, на 
котором оказалась фишка. Например, если строка s — abcdef, вы ставите 
фишку на 3-й символ, двигаете ее вправо 2 раза, а затем двигаете ее влево 3 
раза, вы выпишете строку cdedcb.
Вам даны две строки s и t. Ваше задание — определить, можно ли так 
выполнить описанные операции со строкой s, что в результате вы выпишете 
строку t*/

#include <iostream>
#include <string>

std::string input(int min, int max) {
	std::string text;
	while (true)
	{
		std::cin >> text;
		if (text.length() < max && text.length() > min)
			return text;
		std::cin.clear();
		std::cin.ignore(32000, '\n');
		text = "";
		std::cout << "Enter correct word" << std::endl;
	}
}

int inputInt() {
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

int main() {
	int n, m = 1;
	std::string s, t;

	std::cout << "Enter n: ";
	n = inputInt();

	int* arr = new int[1];

	while (true) {
		int j = 1, p = -1;

		s = input(0, 501);
		t = input(0, 1000);

		for (int i = 0; i < s.length(); i++) {
			if (s[i] == t[0]) {
				p = i;
				break;
			}
		}

		for (int i = 0; i < t.length() - 1; i++) {
			if (s[p + 1] == t[j]) {
				p++;
				j++;
			}
			else break;
		}
		
		if (j != t.length()) {
			for (int i = 0; i < t.length() - 1; i++) {
				if (j < t.length() && p > 0 && (s[p - 1] == t[j])) {
					j++;
					p--;
				}
				else break;
			}
		}
		
		if (j == t.length()) {
			arr[m - 1] = 1;
		}
		else {
			arr[m - 1] = 0;
		}
		if (m < n) ++m;
		else break;

		if (m != 1) arr = (int*)realloc(arr, m * sizeof(int));
	}

	for (int i = 0; i < m; ++i) {
		if (arr[i] == 1) std::cout << "Yes" << std::endl;
		else std::cout << "No" << std::endl;
	}

	return 0;
}