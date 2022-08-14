#include <iostream>
#include <vector>
#include <algorithm>
#include <string>

using std::string;
using std::count_if;
using std::vector;

int main() {
	vector<string> vec{ "1234567", "1234567", "55555" };

	std::cout << count_if(vec.begin(), vec.end(), [](string const& s) {
		return s.size() > 6;
		});
	return 0;
}