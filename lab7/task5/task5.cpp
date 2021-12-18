#include <iostream>
#include <string>

std::string f(int a);

int main(){
    int number;

    std::cout << "Enter number: ";
    std::cin >> number;

    std::cout << "code: " << f(number);
    return 0;
}

std::string f(int a) {
	std::string str;
	std::string* str1 = new std::string[]{ "","I","II","III","IV","V","VI","VII","VIII","IX" };
	for (int i = 0; i < a / 1000; i++){
		str += "M";
	}
	a %= 1000;
	if ((a % 500) / 100 + 5 == 9){
		str += "CM";
		a %= 900;
	}else if (a / 500 > 0){
		str += "D";
		a %= 500;
	}

	for (int i = 0; i < a / 100; i++){
		str += "C";
	}

	a %= 100;

	if ((a % 50) / 10 + 5 == 9){
		str += "XC";
		a %= 90;
	}
	else if (a / 50 > 0){
		str += "L";
		a %= 50;
	}else if (a % 10 == 4){
		str += "XL";
		a %= 40;
	}

	for (int i = 0; i < a / 10; i++){
		str += "X";
	}
	a %= 10;
	str += str1[a];
	return str;
}