#include "Chapter6.h"
#include <iostream>

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;
	int j = fact(input);
	std::cout << input << "! is " << j << std::endl;

	return 0;
}