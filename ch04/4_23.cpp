#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string s = "word";
	std::string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	std::cout << p1 << std::endl;

	// s를 먼저 더하게 됨 -> string과 char 를 비교할 수 없음. 
	// 괄호로 묶어준다. 

	return 0;

}

