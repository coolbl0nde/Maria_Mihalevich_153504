#include <iostream>

int array(int[], int);
int array(int arr[], int n) {

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (arr[i] == arr[j] && i != j) {
                for (int z = j; z < n - 1; z++) {
                    arr[z] = arr[z + 1];
                }
                n--;
            }
        }
    }

    return n;
}

int main(){

    int n;

    std::cout << "n: ";
    std::cin >> n;

    int* arr = new int[n];

    for (int i = 0; i < n; i++) {
        std::cin >> arr[i];
    }

    n = array(arr, n);

    for (int i = 0; i < n; i++) {
        std::cout << arr[i] << " ";
    }

    return 0;
}
