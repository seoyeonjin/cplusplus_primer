#include <iostream>
#include <vector>
#include <algorithm>
#include "ch07/7_26.h"

bool compareIsbn(const Sales_data& sd1, const Sales_data& sd2) {
	return sd1.isbn().size() < sd2.isbn().size();
}


int main() {
	Sales_data sd_1("a"), sd_2("b"), sd_3("ab"), sd_4("z");
	std::vector<Sales_data> vec{ sd_1, sd_2, sd_3, sd_4 };

	std::sort(vec.begin(), vec.end(), compareIsbn);

	for (Sales_data elem : vec) {
		std::cout << elem.isbn() << " ";

	}


	return 0;
}