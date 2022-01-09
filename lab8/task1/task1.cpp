//Лабораторная 8, задача 1. Выполнена: Михалевич 
/*Задание 1:Разработать программу в соответствии с вариантом, реализующуюработу со структурами в консольном приложении.
Использовать динамический массив структур, содержащий поля согласно варианту индивидуального задания.
Программа должна содержать необходимые комментарии. Следует ввод/вывод на экран входных и выходных данных. Для форматированного
ввода-вывода использовать scanf и printf, предусмотреть некорректный ввод. Обрабатываемая структура должна иметь не менее пяти
полей (элементов) двух и более типов (если в задании указано меньше -добавить). В каждом варианте задания реализовать следующие функции
для работы со структурой:
1. Функцию формирования динамического одномерного массива структур, значения которых вводятся с клавиатуры. Предусмотреть возможность
заполнения одного поля структуры, используя известные значения других полей структуры (придумать самим). С массивом структур работать
через оператор new.При вводе структур необходимо реализовать следующие механизмы:
• ввод заранее заданного количества структур;
• ввод до появления структуры с заданным признаком;
• диалог с пользователем о необходимости продолжать ввод.
2. Функцию просмотра содержимого динамического массива структур.
3. Функцию дополнения уже существующего массива структур новыми структурами.
4. Функцию поиска и вывода на экран структуры (структур) с заданным значением элемента.
5. Функции удаления и изменения элемента массива структур с заданным значением элемента.
6. Функцию упорядочения массива структур по одному из полей (элементов). Поле для сортировки выбрать самим. Способ указан в скобках.
**13 вариант**
У администратора железнодорожных касс имеется информацияо свободных местах в поездах на текущие сутки в следующем виде:
пункт назначения, время отправления, число свободных мест.Вывести информацию о числе свободных мест в поездах, следующих до
заданного пункта назначения (сортировка вставкой по убыванию).*/


#include <iostream>
#include <string>

using namespace std;

struct station {
	string destination;
	int departuretimeHours;
	int departuretimeMinutes;
	int numberofavailableseats;
	station() {
		destination = "-";
		departuretimeHours = 0;
		departuretimeMinutes = 0;
		numberofavailableseats = 0;
	}
};

station* AddStruct(station* Obj, int& OldSize, int& NewSize);
void SetData(station* Obj, int& OldSize, int NewSize);
void ShowData(station* Obj, int NewSize);
void FindData(station* Obj, int NewSize);
station* DeleteStruct(station* Obj, int& Size);
void insertSort(station* Obj, int size);

int main() {

	setlocale(LC_ALL, "Rus");

	station* stations = 0;
	int size = 0, size1 = 0;

	do {
		int n;
		cout << "Выберите действие(1 - создать массив структур, 2 - просмотреть данные,3 - найти по элементу,4 - сортировать(по убыванию), 5 - удалить/изменить, 6 - очистить консоль, 0 - выход): ";

		while (!(cin >> n) || n > 6) {
			cout << "Введите корректное значение: ";
			cin.clear();
			cin.ignore(1000, '\n');
		}

		if (n == 1) {
			printf("Введите размер массива: ");
			scanf_s("%d", &size1);
			stations = AddStruct(stations, size, size1);
			SetData(stations, size, size1);
			size = size1;
		}
		else if (n == 2) {
			ShowData(stations, size1);
		}
		else if (n == 3) {
			if (stations != 0)
				FindData(stations, size1);
		}
		else if (n == 4) {
			if (stations != 0)
				insertSort(stations, size1);
		}
		else if (n == 5) {
			if (stations != 0)
				stations = DeleteStruct(stations, size1);
		}
		else if (n == 6) {
			system("cls");
		}
		else if (n == 0) {
			break;
		}
	} while (true);

	return 0;
}

station* AddStruct(station* Obj, int& size, int& size1) { // освободить память для структуры
	size1 = size + size1;
	if (size == 0) {
		Obj = new station[size1];
	}
	else {
		station* newObj = new station[size1];
		for (int i = 0; i < size; i++) {
			newObj[i] = Obj[i];
		}
		delete[] Obj;
		Obj = newObj;
	}
	return Obj;
}

void SetData(station* Obj, int& size, int size1) { // ввод данный в структуру
	setlocale(LC_ALL, "Rus");
	int index;
	cout << "Выберите, как ввести данные(1 - заполнить всю память, 2 - заполнить до определённого элемента):\n";
	while (!(cin >> index)) {
		cout << "Введите корректное значение:\n";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	if (index == 1) {
		for (int i = size; i < size1; i++) {
			printf("Введите Пункт назначения:\n");
			rewind(stdin);
			while (!(cin >> Obj[i].destination)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			printf("Введите время отправления,часы:\n");
			while (!(cin >> Obj[i].departuretimeHours)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			printf("Введите время отправления,минуты:n");
			while (!(cin >> Obj[i].departuretimeMinutes)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			printf("Введите число свободных мест:\n");
			while (!(cin >> Obj[i].numberofavailableseats)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
		}
		size = size1;
	}
	else if (index == 2) {
		cout << "Выберите элемент(1 - Пункт назначения,2 - время отправления,часы, 3 - время отправления,минуты, 4 - число свободных мест):\n";
		int count;
		while (!(cin >> count)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		string value;
		cout << "Введите значение:\n";
		while (!(cin >> value)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		for (int i = size; i < size1; i++) {
			printf("Введите Пункт назначения:\n");
			rewind(stdin);
			while (!(cin >> Obj[i].destination)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			if (count == 1 && (Obj[i].destination == value)) {
				break;
			}
			printf("Введите время отправления,часы:\n");
			while (!(cin >> Obj[i].departuretimeHours)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			if (count == 2 && (to_string(Obj[i].departuretimeHours) == value)) {
				break;
			}
			printf("Введите время отправления,минуты:\n");
			while (!(cin >> Obj[i].departuretimeMinutes)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			if (count == 3 && (to_string(Obj[i].departuretimeMinutes) == value)) {
				break;
			}
			printf("Введите число свободных мест:\n");
			while (!(cin >> Obj[i].numberofavailableseats)) {
				cout << "Введите корректное значение:\n";
				cin.clear();
				cin.ignore(10000, '\n');
			}
			if (count == 4 && (to_string(Obj[i].numberofavailableseats) == value)) {
				break;
			}
		}
	}
}

void ShowData(station* Obj, int size1) { // вывести структуру
	setlocale(LC_ALL, "Rus");
	cout << "№\t\t" << "Пункт назначения:\t" << "Время отправления,часы:\t\t" << "Время отправления,минуты:\t\t" << "Число свободных мест:\n";
	for (int i = 0; i < size1; i++) {
		cout << i + 1 << "\t\t\t      " << Obj[i].destination << "\t\t\t      " << Obj[i].departuretimeHours << "\t\t\t      " << Obj[i].departuretimeMinutes << "\t\t\t\t      " << Obj[i].numberofavailableseats << "\n";
	}
}

void FindData(station* Obj, int size1) { // поиск по элементу
	setlocale(LC_ALL, "Rus");
	int N;
	cout << "Выберите элемент для поиска(1 - Пункт назначения, 2 - время отправления,часы, 3 - время отправления,часы, 4 - число свободных мест):\n";
	cin >> N;
	if (N == 1) {
		string k;
		cout << "Введите заначение:\n";
		cin >> k;
		cout << "№\t\t" << "Пункт назначения:\t" << "Время отправления,часы:\t\t" << "Время отправления,минуты:\t\t" << "Число свободных мест:\n";
		for (int i = 0; i < size1; i++) {
			if (Obj[i].destination == k)
				cout << i + 1 << "\t\t\t      " << Obj[i].destination << "\t\t\t      " << Obj[i].departuretimeHours << "\t\t\t      " << Obj[i].departuretimeMinutes << "\t\t\t\t      " << Obj[i].numberofavailableseats << "\n";
		}
	}
	else if (N == 2) {
		int k;
		cout << "Введите значение:\n";
		cin >> k;
		cout << "№\t\t" << "Пункт назначения:\t" << "Время отправления,часы:\t\t" << "Время отправления,минуты:\t\t" << "Число свободных мест:\n";
		for (int i = 0; i < size1; i++) {
			if (Obj[i].departuretimeHours == k)
				cout << i + 1 << "\t\t\t      " << Obj[i].destination << "\t\t\t      " << Obj[i].departuretimeHours << "\t\t\t      " << Obj[i].departuretimeMinutes << "\t\t\t\t      " << Obj[i].numberofavailableseats << "\n";
		}
	}
	else if (N == 3) {
		int k;
		cout << "Введите значение:\n";
		cin >> k;
		cout << "№\t\t" << "Пункт назначения:\t" << "Время отправления,часы:\t\t" << "Время отправления,минуты:\t\t" << "Число свободных мест:\n";
		for (int i = 0; i < size1; i++) {
			if (Obj[i].departuretimeMinutes == k)
				cout << i + 1 << "\t\t\t      " << Obj[i].destination << "\t\t\t      " << Obj[i].departuretimeHours << "\t\t\t      " << Obj[i].departuretimeMinutes << "\t\t\t\t      " << Obj[i].numberofavailableseats << "\n";
		}
	}
	else if (N == 4) {
		int k;
		cout << "Введите значение:\n";
		cin >> k;
		cout << "№\t\t" << "Пункт назначения:\t" << "Время отправления,часы:\t\t" << "Время отправления,минуты:\t\t" << "Число свободных мест:\n";
		for (int i = 0; i < size1; i++) {
			if (Obj[i].numberofavailableseats == k)
				cout << i + 1 << "\t\t\t      " << Obj[i].destination << "\t\t\t      " << Obj[i].departuretimeHours << "\t\t\t      " << Obj[i].departuretimeMinutes << "\t\t\t\t      " << Obj[i].numberofavailableseats << "\n";
		}
	}
}

station* DeleteStruct(station* Obj, int& size1) { // удаление/изменение структуры
	setlocale(LC_ALL, "Rus");
	int k;
	cout << "1 - удалить структуру, 2 - изменить структуру:\n";
	while (!(cin >> k)) {
		cout << "Введите корректное значение:\n";
		cin.clear();
		cin.ignore(10000, '\n');
	}
	if (k == 1) {
		int m;
		ShowData(Obj, size1);
		cout << "Выберите элемент, который хотите удалить:\n";
		while (!(cin >> m)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		int j = 0;
		station* newObj = new station[size1 - 1];
		for (int i = 0; i < size1; i++) {
			if (i != m - 1) {
				newObj[j] = Obj[i];
				j++;
			}
			else
				continue;
		}
		size1--;
		delete[] Obj;
		Obj = newObj;
	}
	else if (k == 2) {
		int m;
		ShowData(Obj, size1);
		cout << "Выберите элемент, который хотите изменить:\n";
		while (!(cin >> m)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		m--;
		printf("Введите Пункт назначения:\n");
		rewind(stdin);
		while (!(cin >> Obj[m].destination)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		printf("Введите время отправления,часы:\n");
		while (!(cin >> Obj[m].departuretimeHours)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		printf("Введите время отправления,часы:\n");
		while (!(cin >> Obj[m].departuretimeMinutes)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
		printf("Введите день производства:\n");
		while (!(cin >> Obj[m].numberofavailableseats)) {
			cout << "Введите корректное значение:\n";
			cin.clear();
			cin.ignore(10000, '\n');
		}
	}
	return Obj;
}

void insertSort(station* Obj, int size1){
	setlocale(LC_ALL, "Rus");
	cout << "Cортировка:";
	station temp;
	for (int i = 1; i < size1; i++)
	{
		for (int j = i; j > 0; j--)
		{
			if (Obj[j - 1].numberofavailableseats > Obj[j].numberofavailableseats)
			{
				temp = Obj[j];
				Obj[j] = Obj[j - 1];
				Obj[j - 1] = temp;
			}
		}
	}
}