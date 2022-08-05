#include <iostream>

int main() {
	int aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0, blank = 0, tab = 0, newline = 0;
	char ch;

	while (std::cin >> ch) {
		if (ch == 'a' || ch == 'A')
			++aCnt;
		else if (ch == 'e' || ch == 'E')
			++eCnt;
		else if (ch == 'i' || ch == 'I')
			++iCnt;
		else if (ch == 'o' || ch == 'O')
			++oCnt;
		else if (ch == 'u' || ch == 'U')
			++uCnt;
		else if (ch == ' ')
			++blank;
		else if (ch == '\t')
			++tab;
		else if (ch == '\n')
			++newline;
	}

	std::cout << "Ãâ·Â" << std::endl;
	std::cout << aCnt << eCnt << oCnt << iCnt << uCnt << std::endl;
	std::cout << blank << tab << newline << std::endl;

	return 0;
}