#include <iostream>
#include "Sales_item.h"

int main() {

	Sales_item sum, item;
	int count = 1;
	std::cin >> sum;
	while (std::cin >> item) {
		if (item.isbn() == sum.isbn()) {
			count++;
			sum += item;
		}
		else {
			std::cout << sum << ": count = " << count << std::endl;
			sum = item;
			count = 1;
		}
	}

	std::cout << sum << ": count = " << count << std::endl;
	return 0;
}
