#include <iostream>

int main() {
	int i = 1, j = 1, k = 5;
	// std::cout << i != j < k; // ���� �߻� != ���� �ǿ�����
	std::cout << (i != j) && (j < k);
	return 0;
}