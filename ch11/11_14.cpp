#include <iostream>
#include <vector>
#include <string>
#include <map>
#include <utility>

using std::map;
using std::vector;
using std::string;
using std::pair;

int main() {
	map<string, vector<pair<string, string>>>families;
	string last, child, birthday;
	std::cout << "Last name: ";
	std::cin >> last;

	std::cout << "child: " << std::endl;
	while (std::cin >> child >> birthday) {
		families[last].push_back({ child, birthday });
	}

	for (auto const& family : families) {
		std::cout << "Last name: " << family.first << std::endl; {
			std::cout << "child: ";
			for (auto const& chlid_info : family.second)
				std::cout << chlid_info.first << " " << chlid_info.second;
		}

	}

	return 0;
}