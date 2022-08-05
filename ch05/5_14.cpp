#include <iostream>
#include <string>
#include <vector>

using std::string;
using std::vector;
using std::cout;
using std::cin;

int main() {
	
	string pre = "", word = "", max_word;
	int count = 1, max_count = 1;

	while (cin >> word) {
		if (word == pre)
			count++;
		else {
			count = 1;
			pre = word;
		}

		if (max_count < count) {
			max_count = count;
			max_word = pre;
		}
	}

	if (max_count == 1) {
		cout << "no word was repeated " << std::endl;
	}
	else {
		cout << "the word " << max_word << " occurred " << max_count << " tiems " << std::endl;
 	}
	return 0;
}