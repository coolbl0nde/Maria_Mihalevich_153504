#include <iostream>
#include "..\StaticLib\Header.h";

int main()
{
    int a = 10, b = 10;
    int* arr = new int[a];

    for (int i = 0; i < a; i++) {
        arr[i] = i;
        std::cout << arr[i] << " ";
    }

    std::cout << product(arr, b);
    sum(arr, b);

    delete arr;
}

