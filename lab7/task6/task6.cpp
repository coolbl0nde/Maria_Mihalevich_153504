#include<iostream>

int main()
{
    int n;
    std::cin >> n;
    while (n){
        --n;
        long long x;
        std::cin >> x;
        std::cout << (x + 1) / 10 << std::endl;
    }
}
