//������������ 6, ������ 1. ��������� ��������� �.�.
/*���� ������, ��������� �� ����, ����������� ���������. �������
�� ����� ���������� ����� ����� ������������ ����� � ����� �������
������ � ������� ��� ����������.*/

#include <iostream>

int main() { 

	setlocale(LC_ALL, "ru");

	int n = 0, m = 0, j = 0, max = 0, k = 0;
	char a[80];

	std::cout << "������� ������: ";
	gets_s(a);

	while (a[n])++n;
	for (int i = 0, z = 0; i <= n; i++) {
		if (a[i] != ' ' && a[i] != '\0') {
			m++;
		}
		else {
			z++;
			if (m > max) {
				max = m;
				j = i - m;
				k = z;
			}
		m = 0;
		}
	}
	std::cout << "���������� ����� ����� ������������ �����: " << k << " .����� ������� ������ � ������� ��� ����������: " << j;

	return 0;
}