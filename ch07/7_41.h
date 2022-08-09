#pragma once
#include <iostream>
#include <string>

class Sales_data {
public:
	Sales_data (std::string s, unsigned cnt, double price):
		bookNo(s), units_sold(cnt),revenue(cnt*price){}
	Sales_data(): Sales_data("", 0,0) {
		std::cout << "Sales_data()" << std::endl;
	}
	Sales_data(std::string s):Sales_data (s,0,0) {
		std::cout << "Sales_data(string)" << std::endl;
	}
	Sales_data(std::istream& is) : Sales_data() { read(is, *this); }
private:
	std::string bookNo;
	unsigned units_sold;
	double revenue;
 };