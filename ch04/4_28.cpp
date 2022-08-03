#include <iostream>

int main() {
	std::cout << sizeof(int) << std::endl; //4
	std::cout << sizeof(float) << std::endl; //4
	std::cout << sizeof(double) << std::endl; //8
	std::cout << sizeof(char) << std::endl; //1
	std::cout << sizeof(long) << std::endl; //4
	std::cout << sizeof(long long) << std::endl; //8
	std::cout << sizeof(long double) << std::endl; //8
	std::cout << sizeof(short) << std::endl; //2
	std::cout << sizeof(wchar_t) << std::endl; //2
	std::cout << sizeof(char16_t) << std::endl; //2
	std::cout << sizeof(char32_t) << std::endl; //4
	return 0;
}