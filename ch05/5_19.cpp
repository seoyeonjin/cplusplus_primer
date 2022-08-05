#include <iostream>
#include <string>

using std::string;

int main() {
	
	string str1, str2;

	do {
		std::cin >> str1 >> str2;
		if (str1 < str2)
			std::cout << str1 << "이 더 작다" << std::endl;
		else
			std::cout << str2 << "이 더 작다" << std::endl;
	} while (std::cin);
	return 0;
}