// c�� type�� const char& �̴�. 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	const string s = "Keep out!";

	for (auto& c : s) {
		// c�� ������ �� ����. 
		// c�� �б⸸ ����.
	}

	return 0;
}