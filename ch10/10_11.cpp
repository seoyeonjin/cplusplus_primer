#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

void elimDups(vector<string>& words) {
	std::sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	words.erase(end_unique, words.end());
}

bool isShorter(const string& s1, const string& s2) {
	return s1.size() < s2.size();
}

int main() {
	vector<string> vec;
	string str;
	while (std::cin >> str) {
		vec.push_back(str);
	}
	for (string elem : vec) {
		std::cout << elem << std::endl;
	}
	elimDups(vec);

	for (const auto& s : vec)
		std::cout << s << " ";

	std::cout << std::endl;
	std::stable_sort(vec.begin(), vec.end(), isShorter); //size¼ø

	for (const auto& s : vec)
		std::cout << s << " ";
	std::cout << std::endl;
	return 0;
}