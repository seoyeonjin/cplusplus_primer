#include <iostream>

int main() {
	int a = 4, b = 3, c = 2, d = 2;
	int result = (a > b) && (b > c) && (c > d);
	std::cout << result << std::endl;

	return 0;
}