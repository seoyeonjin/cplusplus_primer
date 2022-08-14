#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>

using std::string;
using std::vector;
using std::stable_sort;
using std::find_if;
using std::bind;
using namespace std::placeholders;

auto check_size(string const& str, size_t sz) {
	return str.size() >= sz;
}

void elimDups(vector<string>& words) {
	std::sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	auto wc = stable_partition(words.begin(), words.end(),
		bind(check_size, _1, sz));


	std::for_each(words.begin(), wc,
		[](const string& s) {std::cout << s << " "; });
	std::cout << std::endl;
}

int main() {
	vector<string> vec{ "1234","12345", "66666" };
	biggies(vec, 5);
	std::cout << std::endl;
}