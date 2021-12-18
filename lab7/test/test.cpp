#include <iostream>

bool IsPolindrom(char* word) {
    int k = 0;
    while (word[k]) ++k;
    for (int i = 0; i < k / 2; ++i)
        if (word[i] != word[k - i - 1]) return false;
    return true;
}

long long int returnZero(long long int anyNumber = 10000) {
    if (anyNumber == 0) return 0;
    else {
        anyNumber--;
        return returnZero(anyNumber);
    }
}

int main(){

    std::cout << returnZero();

}
