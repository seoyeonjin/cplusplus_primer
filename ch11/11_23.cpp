#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::map;
using std::vector;
using std::string;
using std::multimap;

int main() {
	multimap<string, string>families;
	string last, child;
	std::cout << "Last name: ";
	std::cin >> last;

	std::cout << "child: " << std::endl;
	while (std::cin >> child) {
		families.emplace(last, child);
	}

	for (auto const& family : families) {
		std::cout << "Last name: " << family.first << std::endl; {
			std::cout << "child: " << family.second << std::endl;
		}

	}

	return 0;
}