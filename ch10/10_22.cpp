#include <iostream>
#include <string>
#include <functional>
#include <vector>
#include <algorithm>

using std::vector;
using std::string;
using std::bind;
using namespace std::placeholders;

bool less6(string& s, string::size_type sz) {
	return s.size() < sz;
}

int main() {
	vector<string> vec{ "one", "two", "three" ,"123456" };

	std::cout << std::count_if(vec.begin(), vec.end(), bind(less6, _1, 6));



	return 0;
}