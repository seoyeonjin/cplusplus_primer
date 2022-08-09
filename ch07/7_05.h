#pragma once
#include <string>

class Person {
	std::string name;
	std::string address;
public:
	std::string const get_name();
	std::string const get_address();
};

std::string const Person::get_name() {
	return name;
}

std::string const Person::get_address() {
	return address;
}