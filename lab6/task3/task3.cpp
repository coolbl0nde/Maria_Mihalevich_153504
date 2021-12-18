//Лабораторная 6, задача 3. Выполнила Михалевич М.П.
/*Ввести строку и определить все входящие в неё символы. 
Например: строка «abccbbbabba» состоит из символов «a», «b» и «с». 
Результат вывести на экран. Стандартных функций работы со строками не 
использовать. */

#include <iostream>

int main(){
	int N = 2, length;
	char* str = (char*)malloc(N * sizeof(char));
	std::cout << "Enter line: ";
	for (length = 0; '\n' - (str[length] = getchar()); ++length) {
		if (length == N - 1) {
			str = (char*)realloc(str, (N *= 2) * sizeof(char));
		}
	}
	str = (char*)realloc(str, (length + 1) * sizeof(char));
	str[length] = '\0';

	for (int i = 0, j = 0; i < length; ++i) {
        if (str[i] == '\0') ++j;
        j = i + 1;
        for (; j < length; ++j){
            if (str[i] == str[j])str[j] = '\0';
        }
	}
	std::cout << "Symbols: ";
    for (int i = 0; i < length; ++i){
        if (str[i] == '\0') continue;
        else std::cout << str[i];
    }

	free(str);

	return 0;
}