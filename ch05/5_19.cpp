#include <iostream>
#include <string>

using std::string;

int main() {
	
	string str1, str2;

	do {
		std::cin >> str1 >> str2;
		if (str1 < str2)
			std::cout << str1 << "�� �� �۴�" << std::endl;
		else
			std::cout << str2 << "�� �� �۴�" << std::endl;
	} while (std::cin);
	return 0;
}