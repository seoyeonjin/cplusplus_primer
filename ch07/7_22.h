#pragma once
#include <string>
#include <iostream>

struct Person {
public:
	friend std::istream& read(std::istream&, Person&);
	friend std::ostream& print(std::ostream&, const Person&);
	Person() = default;
	Person(const std::string n, const std::string a) : name(n), address(a) {};
private:
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