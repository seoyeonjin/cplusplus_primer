#include <iostream>
#include <string>
#include <vector>

int main() {
	int value = 3;
	int x = 0, y = 1;
	std::cout << (value ? ++x, ++y : --x, --y) << std::endl;
	// (someValue ? ++x, ++y : --x), --y
	// someValue�� ���̸� 
	// 1 1 ��� (++y, --y)

	// �����̸� 
	// -1 0 ��� 

	return 0;
}