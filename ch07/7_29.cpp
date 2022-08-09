#include "7_29.h"
#include <iostream>

int main() {

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(std::cout);
	std::cout << "\n";
	myScreen.display(std::cout); //복사본에 저장해서?
	std::cout << "\n";

	return 0;
}

// 바꾸기 전
// XXXXXXXXXXXXXXXXXXXX#XXXX
// XXXXXXXXXXXXXXXXXXXX#XXXX

// 바꾼 후
// XXXXXXXXXXXXXXXXXXXX#XXXX
// XXXXXXXXXXXXXXXXXXXXXXXXX

// 두 번째 줄에서 # 출력하지 못함.