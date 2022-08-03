#include <iostream>

int main() {
	std::cout << 12 / 3 * 4 + 5 * 15 + 24 % 4 / 2 << std::endl;
	std::cout << ((((12 / 3) * 4) + (5 * 15)) + ((24 % 4) / 2)) << std::endl;
	// 4 * 4 -> 16
	// 5 * 15 -> 75
	// 24 % 4 -> 0 
	// 0 /2 -> 0
	// 16 + 75 = 91

	return 0;
}