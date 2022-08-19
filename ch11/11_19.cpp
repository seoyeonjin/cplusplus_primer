#include <iostream>
#include "ch07/7_26.h"
#include <set>

bool compareIsbn(const Sales_data& lhs, const Sales_data& rhs) {
	return lhs.isbn() < rhs.isbn();
}

int main() {
	using compareisbnType = bool(*)(const Sales_data& lhs, const Sales_data& rhs);
	std::multiset<Sales_data, compareisbnType> bookstore(compareIsbn);
	std::multiset<Sales_data, compareisbnType>::iterator it = bookstore.begin();
}