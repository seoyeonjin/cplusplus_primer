#include <iostream>

int main() {
	//����: legal, legal, illegal, legal

	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */"; //�ڿ� " �ϳ� �� �ʿ�
	std::cout << /* "*/" /*   "/*"    */;
	
	//���: legal, legal, illegal, legal
	return 0;
}