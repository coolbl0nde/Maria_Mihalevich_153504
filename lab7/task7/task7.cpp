//Лабораторная 7, задача 7. Выполнила Михалевич М.П. Вариант 13
/*Необходимо разработать программу, которая проверяет, делится 
ли введенное пользователем число на заданное простое. Программа не 
должна содержать операций умножения, деления, вычитания (в том числе 
взятия остатка от деления). Рекомендуется использовать побитовые 
операции. Для каждого варианта нужно проверить делимость на 3 простых 
числа. Проверять можно по отдельности (сначала получить ответ для 
первого, затем для второго, затем для третьего).
13) 3, 23, 107*/

#include <iostream>

int main(){
	int number;
	bool m = false;

	std::cout << "Enter number: ";
	std::cin >> number;

	for (int i = 0; i <= number; i += 3) {
		if (i == number) m = true;
	}

	if (m) std::cout << "divide into 3" << std::endl;
	else  std::cout << "no divide into 3" << std::endl;

	m = false;
	for (int i = 0; i <= number; i += 23) {
		if (i == number) m = true;
	}

	if (m) std::cout << "divide into 23" << std::endl;
	else  std::cout << "no divide into 23" << std::endl;

	m = false;
	for (int i = 0; i <= number; i += 107) {
		if (i == number) m = true;
	}

	if (m) std::cout << "divide into 107" << std::endl;
	else  std::cout << "no divide into 107" << std::endl;

	return 0;
}

