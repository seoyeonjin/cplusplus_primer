#include <iostream>

int main() {

	int sum = 0, val1, val2;

	std::cout << "Enter two number: ";
	std::cin >> val1 >> val2;

	if (val1 <= val2) {
		std::cout << "Sum of " << val1 << " to " << val2 << " inclusive is ";
		while (val1 <= val2) {
			sum += val1;
			++val1;
		}
		 std::cout << sum << std::endl;
	}
	else {
		std::cout << "Sum of " << val2 << " to " << val1 << " inclusive is ";
		while (val2 <= val1) {
			sum += val2;
			++val2;
		}
		std::cout << sum << std::endl;
	}
}