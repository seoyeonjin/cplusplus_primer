#include <iostream>
#include <string>
#include <vector>

int main() {
	int value = 3;
	int x = 0, y = 1;
	std::cout << (value ? ++x, ++y : --x, --y) << std::endl;
	// (someValue ? ++x, ++y : --x), --y
	// someValue가 참이면 
	// 1 1 출력 (++y, --y)

	// 거짓이면 
	// -1 0 출력 

	return 0;
}