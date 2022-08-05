#include <iostream>

int main() {

	int first, second;

	std::cin >> first >> second; 

	if (second == 0) {
		std::cout << "second is zero!" << std::endl;
	}
	else {
		std::cout << (float) first / second << std::endl;
	}
	return 0;
}