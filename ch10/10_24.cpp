#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <functional>

using std::string;
using std::vector;
using std::find_if;
using std::bind;
using namespace std::placeholders;

auto check_size(string const& str, size_t sz) {
	return str.size() < sz;
}

int main() {

	vector<int> vec{ 1,2,3,4,5,6 };
	string str("12345678");
	auto wc = find_if(vec.begin(), vec.end(), bind(check_size, str, _1));

	if (wc != vec.end())
		std::cout << *wc << std::endl;
	else
		std::cout << "error" << std::endl;

	return 0;
}