#include <iostream>

int main() {
	int sum = 0; 
	for (int i = -100; i <= 100; ++i)
		sum += i;
	std::cout << sum;

	//for���� -100���� 100������ ���� ����Ѵ�. 
	//���� ������ sum�� ���� 0�̴�. 
	return 0;
}