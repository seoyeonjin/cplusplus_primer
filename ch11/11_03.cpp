#include <map>
#include <iostream>
#include <string>

using std::string;
using std::map;

int main() {
	map<string, size_t> word_count; 
	string word;
	while (std::cin >> word)
		++word_count[word];
	for (const auto& w : word_count)
		std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << std::endl;


	return 0;
}