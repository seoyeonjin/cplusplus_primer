#include <iostream>

// 42 = i -> error �߻�. 42�� rvalue
// i = 42 -> true;
int main() {
	int i;
	std::cout << (i = 42) << std::endl; //42�� ���
	return 0;
}