//Лабораторная 6, задача 4. Выполнила Михалевич М.П.
/*В выходной файл вывести тот же текст, но уже соответствующий 
реформе. Если первая буква заменяемого сочетания букв была прописной, 
то первая буква замены должна быть также прописной. Вторая буква в 
заменах x→ks, qu→kv должна быть всегда строчной. */

#include <iostream> 
int main() {
	int size = 101;
	char* text = new char[size];
	std::cin.getline(text, size);
	size = strlen(text);
	for (int i = 0; i < size; ++i) {
		if (text[i] == 'c') {
			if (text[i + 1] == 'e' || text[i + 1] == 'i' || text[i + 1] == 'y') text[i] = 's';
			else text[i] = 'k';
		}
		if (text[i] == 'C') {
			if (text[i + 1] == 'e' || text[i + 1] == 'i' || text[i + 1] == 'y') text[i] = 'C';
			else text[i] = 'K';
		}
		if (text[i] == 'q') {
			text[i] = 'k';
			if (text[i + 1] == 'u') text[i + 1] = 'v';
		}
		if (text[i] == 'Q') {
			text[i] = 'K';
			if (text[i + 1] == 'u') text[i + 1] = 'v';
		}

		if (text[i] == 'x') {
			for (int k = size - 1; k > i; --k)
				text[k] = text[k - 1];

			text[i] = 'k';
			text[i + 1] = 's';
		}
		if (text[i] == 'X') {
			char tmp = 0;
			for (int m = i; text[m] != ' '; ++m)
				++tmp;

			for (int m = i + tmp + 1; m > i; --m)
				text[m - 1] = text[m];

			text[i] = 'K';
			text[i + 1] = 's';
		}
		if (text[i] == 'w')
			text[i] = 'v';

		if (text[i] == 'W')
			text[i] = 'V';

		if (text[i] == 'y' && text[i + 1] == 'o' && text[i + 2] == 'u') {
			text[i] = 'u';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 2];
		}
		if (text[i] == 'o' && text[i + 1] == 'o') {
			text[i] = 'u';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 'e' && text[i + 1] == 'e') {
			text[i] = 'i';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 't' && text[i + 1] == 'h') {
			text[i] = 'z';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 'T' && text[i + 1] == 'h') {
			text[i] = 'Z';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 'p' && text[i + 1] == 'h') {
			text[i] = 'f';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 'P' && text[i + 1] == 'h') {
			text[i] = 'F';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 1];
		}
		if (text[i] == 'Y' && text[i + 1] == 'o' && text[i + 2] == 'u') {
			text[i] = 'U';
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + 2];
		}
		if (text[i] == text[i + 1]) {
			int counter = 1;
			while (text[i + counter] == text[i]) ++counter;
			--counter;
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + counter];
		}
	}
	for (int i = 0; i < size; ++i) {
		if (text[i] == text[i + 1]) {
			int counter = 1;
			while (text[i + counter] == text[i]) ++counter;
			--counter;
			for (int k = i + 1; k < size; ++k)
				text[k] = text[k + counter];
		}

	}
	for (int i = 0; i < size; ++i) {
		if (text[i] == 32 || text[i] == 44 || text[i] == 46 || (text[i] >= 65 && text[i] <= 90) || (text[i] >= 97 && text[i] <= 122))
			std::cout << text[i];
	}
	delete[] text;
	return 0;
}
