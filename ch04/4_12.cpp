#include <iostream>

int main() {
	int i = 1, j = 1, k = 5;
	// std::cout << i != j < k; // 오류 발생 != 왼쪽 피연산자
	std::cout << (i != j) && (j < k);
	return 0;
}