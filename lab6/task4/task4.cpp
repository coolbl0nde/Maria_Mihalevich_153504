//Лабораторная 6, задача 4. Выполнила Михалевич М.П.
/*В выходной файл вывести тот же текст, но уже соответствующий 
реформе. Если первая буква заменяемого сочетания букв была прописной, 
то первая буква замены должна быть также прописной. Вторая буква в 
заменах x→ks, qu→kv должна быть всегда строчной. */

#include <iostream> 
int main() {
	int size = 101;
	char* str = new char[size];

	std::cout << "Enter line: ";
	std::cin.getline(str, size);
	*str = strlen(str);

	for (int i = 0; i < size; ++i) {
		if (str[i] == 'x') {
			for (int k = size - 1; k > i; --k) str[k] = str[k - 1];

			str[i] = 'k';
			str[i + 1] = 's';
		}
		if (str[i] == 'X') {
			char tmp = 0;
			for (int m = i; str[m] != ' '; ++m) ++tmp;

			for (int m = i + tmp + 1; m > i; --m) str[m - 1] = str[m];

			str[i] = 'K';
			str[i + 1] = 's';
		}
		if (str[i] == 'w') str[i] = 'v';
		if (str[i] == 'W') str[i] = 'V';
		if (str[i] == 'y' && str[i + 1] == 'o' && str[i + 2] == 'u') {
			str[i] = 'u';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 2];
		}
		if (str[i] == 'o' && str[i + 1] == 'o') {
			str[i] = 'u';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'e' && str[i + 1] == 'e') {
			str[i] = 'i';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'c') {
			if (str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'y') str[i] = 's';
			else str[i] = 'k';
		}
		if (str[i] == 'C') {
			if (str[i + 1] == 'e' || str[i + 1] == 'i' || str[i + 1] == 'y') str[i] = 'C';
			else str[i] = 'K';
		}
		if (str[i] == 'q') {
			str[i] = 'k';
			if (str[i + 1] == 'u') str[i + 1] = 'v';
		}
		if (str[i] == 'Q') {
			str[i] = 'K';
			if (str[i + 1] == 'u') str[i + 1] = 'v';
		}
		if (str[i] == 't' && str[i + 1] == 'h') {
			str[i] = 'z';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'T' && str[i + 1] == 'h') {
			str[i] = 'Z';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'p' && str[i + 1] == 'h') {
			str[i] = 'f';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'P' && str[i + 1] == 'h') {
			str[i] = 'F';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 1];
		}
		if (str[i] == 'Y' && str[i + 1] == 'o' && str[i + 2] == 'u') {
			str[i] = 'U';
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + 2];
		}
		if (str[i] == str[i + 1]) {
			int counter = 1;
			while (str[i + counter] == str[i]) ++counter;
			--counter;
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + counter];
		}
	}
	for (int i = 0; i < size; ++i) {
		if (str[i] == str[i + 1]) {
			int counter = 1;
			while (str[i + counter] == str[i]) ++counter;
			--counter;
			for (int k = i + 1; k < size; ++k)
				str[k] = str[k + counter];
		}

	}

	std::cout << "New line: ";

	for (int i = 0; i < size; ++i) {
		if (str[i] == 44 || str[i] == 46 || str[i] == 32 || (str[i] >= 65 && str[i] <= 90) || (str[i] >= 97 && str[i] <= 122))
			std::cout << str[i];
	}

	delete[] str;
	return 0;
}
