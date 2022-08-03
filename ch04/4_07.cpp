#include <iostream>

int main() {
	int value = 1;
	if (value % 2 == 0)
		std::cout << value << "´Â Â¦¼ö" << std::endl;
	else
		std::cout << value << "´Â È¦¼ö" << std::endl;

	return 0;
}