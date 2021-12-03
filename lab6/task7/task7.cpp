//Лабораторная 6, задача 7. Выполнила Михалевич М.П.
/*В заданной строке S найти максимальную по длине подстроку, которая 
не является палиндромом.*/

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

int main() {

	std::string text;
	std::cout << "Enter the line:\n";
	text = input(1, 105);
	int m = 0;

	for (int i = 0, j = text.length() - 1; i < text.length() / 2; i++, j--) {
		if (text[i] == text[j]) {
			m++;
		}
		if (text[i] == text[i + 1]) {
			m++;
		}
	}

	if (m == text.length() / 2) {
		std::cout << text.length() - 1;
	}else if(m == text.length()){
		std::cout << "-1";
	}else {
		std::cout << text.length();
	}

	return 0;
}