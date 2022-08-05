#include <iostream>

int main() {
	int aCnt = 0, eCnt = 0, oCnt = 0, iCnt = 0, uCnt = 0, blank = 0, tab = 0, newline = 0;
	int ffCnt = 0, fiCnt = 0, fICnt = 0; 
	char ch , pre = '\0';

	while (std::cin >> ch) {
		switch (ch) {
		case 'a':
		case 'A':
			++aCnt;
			break;
		case 'e':
		case 'E':
			++eCnt;
			break;
		case 'i':
			++iCnt; 
			if (pre == 'f')
				++fiCnt;
			break;
		case 'I':
			++iCnt;
			if (pre == 'f')
				++fICnt;
			break;
		case 'u':
		case 'U':
			++uCnt;
			break;
		case 'o':
		case 'O':
			++oCnt;
			break;
		case 'f':
			if (pre == 'f')
				++ffCnt;
			break;

		}
		pre = ch;
	}

	std::cout << "Ãâ·Â" << std::endl;
	std::cout << aCnt << eCnt << oCnt << iCnt << uCnt << std::endl;
	// std::cout << blank << tab << newline << std::endl;
	std::cout << ffCnt << fiCnt << fICnt << std::endl;
	return 0;
}