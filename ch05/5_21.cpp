#include <iostream>
#include <string>	

using std::string;

int main() {
	string pre = "", str1;
	while (std::cin) {
		std::cin >> str1;
		if (str1[0] >= 'A' && str1[0] <= 'Z') {
			if (str1 == pre) {
				break;
			}
			else {
				pre = str1;
			}
		}
		else
			continue;
	}

	if (!std::cin.eof()) {
		std::cout << str1 << " occurs twice in succession";
	}
	else {
		std::cout << "no word was repeated" << std::endl;
	}

	return 0;
}