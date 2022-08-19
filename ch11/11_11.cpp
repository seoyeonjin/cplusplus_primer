#include <iostream>
#include "ch07/7_26.h"
#include <set>

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main() {

	std::multiset<Sales_data, decltype(compareIsbn)*> bookstore(compareIsbn);
}