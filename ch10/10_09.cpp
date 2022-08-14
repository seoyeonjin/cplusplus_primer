#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using std::string;
using std::vector;

void elimDups(vector<string>& words) {
	std::sort(words.begin(), words.end());
	auto end_unique = std::unique(words.begin(), words.end());
	for (auto elem : words)
		std::cout << elem << std::endl;
	words.erase(end_unique, words.end());
	for (auto elem : words)
		std::cout << elem << std::endl;
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

	return 0;
}