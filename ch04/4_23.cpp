#include <iostream>
#include <string>
#include <vector>

int main() {
	std::string s = "word";
	std::string p1 = s + (s[s.size() - 1] == 's' ? "" : "s");
	std::cout << p1 << std::endl;

	// s�� ���� ���ϰ� �� -> string�� char �� ���� �� ����. 
	// ��ȣ�� �����ش�. 

	return 0;

}

