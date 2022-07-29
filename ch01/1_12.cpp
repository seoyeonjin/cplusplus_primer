#include <iostream>

int main() {
	int sum = 0; 
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;

	//for문은 -100부터 100까지의 합을 계산한다. 
	//따라서 마지막 sum의 값은 0이다. 
	return 0;
}