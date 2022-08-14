#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;
using std::stable_sort;
using std::find_if;

void elimDups(vector<string>& words) {
	std::sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

void biggies(vector<string>& words, vector<string>::size_type sz) {
	elimDups(words);
	stable_sort(words.begin(), words.end(),
		[](const string& a, const string& b) {return a.size() < b.size(); });

	auto wc = stable_partition(words.begin(), words.end(),
		[sz](const string& a) {return a.size() >= sz; });

	std::for_each(words.begin(), wc,
		[](const string& s) {std::cout << s << " "; });
	std::cout << std::endl;
}

int main() {
	vector<string> vec{ "1234","12345", "66666" };
	biggies(vec, 5);
	std::cout << std::endl;
}