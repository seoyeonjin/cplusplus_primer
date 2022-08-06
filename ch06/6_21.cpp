#include <iostream>

int compare(const int i, const int* p) {
	return (i > *p) ? i : *p;
}

int main() {
	int p = 2;
	std::cout << compare(1, &p) << std::endl;
}