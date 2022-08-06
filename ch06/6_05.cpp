#include <iostream>

int absolute(int n) {
	return (n < 0 ? -n : n);
}

int main() {

	int result = absolute(-12);
	std::cout << result << std::endl;
	return 0;
}