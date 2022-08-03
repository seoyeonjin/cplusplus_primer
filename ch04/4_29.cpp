#include <iostream>
#include <string>
#include <vector>

int main() {
	// ¿¹Ãø
	// 10 ( 40 / 4) 
	// 1 ( 4/ 4)

	int x[10]; int* p = x;
	std::cout << sizeof(x) / sizeof(*x) << std::endl; //10
	std::cout << sizeof(p) / sizeof(*p) << std::endl; //1

	return 0;
}