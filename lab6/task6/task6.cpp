//Лабораторная 6, задача 6. Выполнила Михалевич М.П.
/*Анаграммой слова называется любая перестановка всех букв слова. 
Например, из слова SOLO можно получить 12 анаграмм: SOLO, LOSO, 
OSLO, OLSO, OSOL, OLOS, SLOO, LSOO, OOLS, OOSL, LOOS, 
SOOL. 
Напишите программу, которая выводит количество различных 
анаграмм, которые могут получиться из этого слова.*/

#include <iostream>
#include<string>

long long factorial(int a) {
	if (a == 1)
		return 1;
	return a * factorial(a - 1);
}

int f6(std::string text) {
	const int size = 4;
	int* letter = new int[size];
	for (short i = 0; text[i] != '\0'; ++i) {
		int counter = 0;
		for (short j = i; text[j] != '\0'; ++j)
			if (text[i] == text[j]) ++counter;
		letter[i] = counter;
	}
	long long a = factorial(size);
	long long b = 1;
	for (short i = 0; i < size; ++i) {
		if (letter[i] == 1) continue;
		b *= factorial(letter[i]);
	}
	long long answer = a / b;
	return answer;
}

std::string input(int minValue, int maxValue) {
	std::string text;
	while (true)
	{
		std::cin >> text;
		if (text.length() < maxValue && text.length() > minValue)
			return text;
		std::cin.clear();
		std::cin.ignore(32000, '\n');
		text = "";
		std::cout << "Enter correct word" << std::endl;
	}
}

int main() {

	int count;
	std::string text = input(0, 15);
	
	count = f6(text);

	std::cout << count;

    return 0;
}