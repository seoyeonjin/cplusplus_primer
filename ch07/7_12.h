#pragma once
#include <iostream>
#include <string>

struct Sales_data {

	Sales_data() = default;
	Sales_data(const std::string& s) :bookNo(s) {};
	Sales_data(const std::string& s, unsigned n, double m) :bookNo(s), units_sold(n), revenue(n* m) {};
	Sales_data(std::istream& is);
	std::string isbn() const { return bookNo; };
	Sales_data& combine(const Sales_data&);

	std::string bookNo;
	unsigned units_sold = 0;
	double revenue = 0.0;
};

Sales_data& Sales_data::combine(const Sales_data& rhs) {
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}

std::istream& read(std::istream& is, Sales_data& item) {
	double price = 0;
	is >> item.bookNo >> item.units_sold >> price;
	item.revenue = price * item.units_sold;
	return is;
}

std::ostream& print(std::ostream& os, const Sales_data& item) {
	os << item.isbn() << " " << item.units_sold << " "
		<< item.revenue;
	return os;
}

Sales_data add(const Sales_data& lhs, const Sales_data& rhs) {
	Sales_data sum = lhs;
	sum.combine(rhs);
	return sum;
}

Sales_data::Sales_data(std::istream& is) {
	read(is, *this);
}