//Лабораторная 7, задача 2. Выполнила Михалевич М.П. Вариант 13

#include <iostream>
#include <string>

std::string f(std::string s);

int main(){

	std::string str;

	std::cout << "Enter code: ";
	std::cin >> str;

	std::cout << "code: " << f(str);
	return 0;
}

std::string f(std::string s) {
	if (s[0] == '0') {
		return s;
	}else {

		for (int i = 1; i < s.size(); i++) {
			if (s[i] == '1')
				s[i] = '0';
			else 
				s[i] = '1';
		}

		std::string a = "1";

		for (int i = s.size() - 1, j = 1; i > 0; i--, j++) {
			if (a[j - 1] == '1' && s[i] == '1') {
				a += "1";
				s[i] = '0';
			}else if(a[j - 1] == '0' && s[i] == '0'){
				a += "0";
				s[i] = '0';
			}else {
				a += "0";
				s[i] = '1';
			}
		}
		return s;
	}
}