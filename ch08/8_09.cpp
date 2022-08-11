#include <iostream>
#include <sstream>

std::istream& f(std::istream& is) {
	std::string word;

	while (is >> word)
		std::cout << word << std::endl;
	is.clear();
	return is;
}

int main() {
	std::istringstream iss("istringstream word");
	f(iss);

}