// c의 type은 const char& 이다. 
#include <iostream>
#include <string>

using std::cin;
using std::cout;
using std::string;

int main() {
	const string s = "Keep out!";

	for (auto& c : s) {
		// c는 변경할 수 없다. 
		// c는 읽기만 가능.
	}

	return 0;
}