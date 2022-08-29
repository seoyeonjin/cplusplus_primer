#include <iostream>

int main() {

	std::unique_ptr<int> p(new int(42));
	std::unique_ptr<int> p2(p); //~를 참조할 수 없습니다. 삭제된 함수입니다. 
}