#include <iostream>


std::istream& f(std::istream& is) {
	std::string word;

	while (is >> word)
		std::cout << word << std::endl;
	is.clear();
	return is;
}