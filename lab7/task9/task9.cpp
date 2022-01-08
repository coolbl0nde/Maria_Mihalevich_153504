//Лабораторная 7, задача 9. Выполнила Михалевич М.П.
/* Вчера на уроке математики Саша (возможно Богом данный) узнал о том,
что иногда полезно использовать  вместо десятичной системы счисления какую-нибудь другую.
Однако, учительница (как иронично) не объяснила, почему в системе счисления по основанию b в
качестве цифр выбирают числа от 0 до b - 1. Немного подумав, Саша понял, что можно выбирать
и другие наборы цифр. Например, вместо троичной системы счисления можно рассмотреть систему
счисления, где вместо обычных цифр 0, 1, 2 есть цифры 1, 2 и 3.
Саша заинтересовался вопросом, а как перевести число n в эту систему счисления?
Например, число 7 в этой системе записывается как 21, так как 7 = 2∙3+1,
а число 22 записывается как 211, так как 22 = 2 ∙ 9 + 1 ∙ 3 + 1. */

#include <iostream>
#include <string>

bool MINUS;

void toTernary(int a, std::string& str);
void newToTernary(std::string str1, std::string& str, int i);

int main() {
	short n;

	std::string str;

	std::cin >> n;

	if (n < 0) { 
		n *= -1; 
		MINUS = 1; 
	}

	if (n == 0) {
		std::cout << 0;
		return (0); 
	}

	toTernary(n, str);

	std::string str1 = str;

	newToTernary(str1, str, str.length() - 1);
}

void toTernary(int a, std::string& str) {
	if (a / 3) toTernary(a / 3, str);

	std::string temp = std::to_string(a % 3);

	str.push_back(temp[0]);
}

void newToTernary(std::string str1, std::string& str, int i) {
	std::string temp1; 

	temp1[0] = str1[i];

	short a;
	if (atoi(temp1.c_str()) < 1) {
		std::string temp = std::to_string(atoi(temp1.c_str()) + 3);
		str[i] = temp[0];
		if (i == 0) {
			std::string newStr;

			newStr.resize(str.length() + 1);
			newStr[0] = '2';

			for (short j = 0, k = 1; j < str.length(); ++j, ++k) newStr[k] = str[j];

			std::cout << newStr;
			return;
		}

		temp[0] = str1[i - 1];
		a = atoi(temp.c_str()) - 1;

		if (a >= 0) {
			temp.erase(0, 1);

			std::string y = std::to_string(a);

			temp.push_back(y[0]);

			str1[i - 1] = temp[0];
		}
		else {
			bool zero = 0;

			a += 3;

			temp.erase(0, 1);
			std::string y = std::to_string(a);
			temp.push_back(y[0]);

			if (str1[i - 1] == '0') zero = 1;

			str1[i - 1] = temp[0];

			if (zero) {
				temp[0] = str1[i - 2];
				a = atoi(temp.c_str()) - 1;
				temp = std::to_string(a);
				str1[i - 2] = temp[0];
			}
		}
	}
	else str[i] = str1[i];

	if (i - 1 == 0 && str1[i - 1] == '0') {
		if (MINUS) putchar('-');
		str.erase(0, 1);
		std::cout << str;
		return;
	}
	if (i == 0) {
		if (MINUS) putchar('-');
		std::cout << str;
		return;
	}
	return newToTernary(str1, str, --i);
}