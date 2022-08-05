#include <iostream>

int main() {
	char ch;
	int count = 0; 

	while (std::cin >> ch) {
		if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u')
			count++;
	}

	std::cout << count << std::endl;
	return 0;
}