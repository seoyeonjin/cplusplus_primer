#include <iostream>

int main() {
	int aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0;
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
	}

	std::cout << aCnt << eCnt << oCnt << iCnt << uCnt << std::endl;

	return 0;
}