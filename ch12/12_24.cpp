#include <iostream>
#include <string>

int main() {
	int size;
	std::cin >> size;
	char* input_str = new char[size + 1]();
	std::cin.ignore();
	std::cin.get(input_str, size + 1);
	std::cout << input_str;
	//길이가 더 긴 input이 주어질 경우 자름.
	delete[] input_str;
	return 0;
}