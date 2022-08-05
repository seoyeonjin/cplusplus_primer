#include <iostream>

int main() {

	int first, second;

	std::cin >> first >> second;

	if (second == 0)
		throw std::runtime_error("second is zero");
	std::cout << (float)first / second << std::endl;
	return 0;
}