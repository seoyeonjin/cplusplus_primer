#include <iostream>
#include <string>

int main() {
	int size;
	std::cin >> size;
	char* input_str = new char[size + 1]();
	std::cin.ignore();
	std::cin.get(input_str, size + 1);
	std::cout << input_str;
	//���̰� �� �� input�� �־��� ��� �ڸ�.
	delete[] input_str;
	return 0;
}