#include <iostream>

int main() {

	int sum = 0, val, val1, val2;
	std::cout << "Enter two number: ";

	std::cin >> val1 >> val2;
	val = val1;
	while (val <= val2) {
		sum += val;
		++val;
	}
	std::cout << "Sum of " << val1 << " to " << val2 << " inclusive is "
		<< sum << std::endl;

	return 0;
}