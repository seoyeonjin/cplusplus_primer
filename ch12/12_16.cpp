#include <iostream>

int main() {

	std::unique_ptr<int> p(new int(42));
	std::unique_ptr<int> p2(p); //~�� ������ �� �����ϴ�. ������ �Լ��Դϴ�. 
}