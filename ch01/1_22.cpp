#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item sum, item;
	std::cin >> sum;
	while (std::cin >> item) {
		if (item.isbn() == sum.isbn())
			sum += item;
		else {
			std::cout << sum << std::endl;
			sum = item;
		}
	}

	std::cout << sum << std::endl;
	return 0;
}
