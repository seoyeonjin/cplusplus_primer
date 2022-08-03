#include <iostream>

int main() {
	short short_value = 32767;
	short_value += 1;
	std::cout << "short_value: " << short_value << std::endl; //short_value: -32768

	return 0;
}