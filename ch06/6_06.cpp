// local variable
// 블록 내부에서 정의된 변수

// paramter 
// 함수를 정의할 때 사용되는 값

// local static variable
// 함수가 종료될 때 소멸되지 않는 변수


#include <iostream>

size_t count_calls() {
	static size_t ctr = 0; 
	return ++ctr;
}

int main() {
	for (size_t i = 0; i != 10; ++i)
		std::cout << count_calls() << std::endl;
	return 0;
}