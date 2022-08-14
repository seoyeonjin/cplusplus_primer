#include <iostream>
#include <string>

int main() {

	int i = 5; 

	auto result = [&i]() {return i > 0 ? !--i : !i; };

	while (!result())
		std::cout << i << " ";
	std::cout << i << std::endl;



	return 0;
}