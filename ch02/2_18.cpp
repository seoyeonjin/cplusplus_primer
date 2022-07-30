#include <iostream>

int main() {

	int a = 10, b = 12;
	int* c = &a;
	c = &b;

	*c = 11;
	std::cout << a << " " << b << std::endl;
	return 0;
}