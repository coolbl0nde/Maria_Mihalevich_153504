#include <iostream>

int f(int time, int n);

int main()
{
	int time, n, b;
	std::cout << "Time:";
	std::cin >> time;
	std::cout << "Death slave:";
	std::cin >> n;
	
	time /= 30;

	std::cout << f(time, n);
	return 0;
}

int f(int time, int n) {
	if (n == 1) {
		return time;
	}else if (n == 2) {
		return time + 48;
	}else if(n == 3){
		return time + 96;
	}
	else if (n == 4) {
		return time + 144;
	}
	else if (n == 5) {
		return time + 192;
	}
}