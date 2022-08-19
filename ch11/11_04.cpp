#include <map>
#include <iostream>
#include <string>
#include <algorithm>

using std::string;
using std::map;
using std::find;

int main() {
	map<string, size_t> word_count;

	string word;
	while (std::cin >> word) {
		for (char& ch : word) ch = std::tolower(ch);
		// erase -> ����� ���� ������ �ּҸ� �Ѱ��־�� ��
		word.erase(std::remove_if(word.begin(), word.end(), ispunct), word.end()); //ispunct
		++word_count[word];
	}
	for (const auto& w : word_count)
		std::cout << w.first << " occurs " << w.second << ((w.second > 1) ? " times " : " time ") << std::endl;


	return 0;
}