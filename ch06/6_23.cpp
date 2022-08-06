#include <iostream>

void print1(const char* p) {
	if (p)
		while (*p)
			std::cout << *p++;
}

void print2(const int* beg, const int* end) {
	while (beg != end)
		std::cout << *beg++ << std::endl;
}

void print3(const int ia[],size_t size) {
	for (size_t i = 0; i != size; ++i) {
		std::cout << ia[i] << std::endl;
	}
}

void print4(int(&arr)[10]) {
	for (auto elem : arr)
		std::cout << elem << std::endl;
}