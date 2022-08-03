#include <iostream>

// 42 = i -> error 발생. 42는 rvalue
// i = 42 -> true;
int main() {
	int i;
	std::cout << (i = 42) << std::endl; //42로 출력
	return 0;
}