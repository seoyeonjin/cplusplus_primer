#include <iostream>

int fact(int val) {

	int ret = 1;
	while (val > 1)
		ret *= val--;
	return ret;
}

int main() {
	int input;
	std::cout << "Enter a number: ";
	std::cin >> input;
	int j = fact(input);
	std::cout << input << "! is " << j << std::endl;

	return 0;
}