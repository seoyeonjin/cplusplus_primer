#include <iostream>
#include <vector>
#include <string>
#include <map>

using std::map;
using std::vector;
using std::string;

int main() {
	map<string, vector<string>>families;
	string last, child;
	std::cout << "Last name: ";
	std::cin >> last;

	std::cout << "child: " << std::endl;
	while (std::cin >> child) {
		families[last].push_back(child);
	}

	for (auto const& family : families) {
		std::cout << "Last name: " << family.first << std::endl; {
			std::cout << "child: ";
			for (string const& chlid : family.second)
				std::cout << chlid << " ";
		}

	}

	return 0;
}