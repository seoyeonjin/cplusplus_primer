#pragma once
#include <string>
#include <iostream>

struct Person {
	std::string name;
	std::string address;
};

std::istream& read(std::istream& is, Person& item) {
	return is >> item.name >> item.address;
}

std::ostream& print(std::ostream& os, const Person& item) {
	os << item.name << " " << item.address;
	return os;
}