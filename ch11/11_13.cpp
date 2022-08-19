// pair -> utility header 
#include <utility>
#include <iostream>
#include <vector>
#include <string>

using std::string;
using std::vector;
using std::pair;

int main() {

	string str;
	int i;
	vector<pair<string, int>> vec;

	while (std::cin >> str >> i) {
		pair<string, int> p = { str, i };
		// vec.push_back(std::make_pair(str, i));
		// vec.push_back({str,i});
		// vec.emplace_back(str,i);
		vec.push_back(p);
	}
	return 0;
}