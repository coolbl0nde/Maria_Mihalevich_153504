#include <iostream>

int product(int* arr, int b) {
	int s = 1;
	for (int i = 0; i < b; i++) {
		s = s * arr[i];
	}
	return s;
}
void outputArray(int* arr, int b) {
	for (int i = 0; i < b; i++) {
		std::cout << arr[i];
	}
}