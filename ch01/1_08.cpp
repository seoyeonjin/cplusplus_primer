#include <iostream>

int main() {
	//예상: legal, legal, illegal, legal

	std::cout << "/*";
	std::cout << "*/";
	std::cout << /* "*/" */"; //뒤에 " 하나 더 필요
	std::cout << /* "*/" /*   "/*"    */;
	
	//결과: legal, legal, illegal, legal
	return 0;
}