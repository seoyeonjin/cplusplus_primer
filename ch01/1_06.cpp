#include <iostream>

int main() {

	/*std::cout << "The sum of " << v1; 
	<< " and " << v2;
	<< " is " << v1 + v2 << std::endl;
	*/

	// 첫 번째 줄에서 세미콜론으로 하나의 line이 끝났고
	// 다음줄에는 std::cout와 상관이 없는 다른 line이 시작된다.
	int v1 = 1; 
	int v2 = 2; 

	std::cout << "The sum of " << v1;
	std::cout << " and " << v2;
	std::cout << " is " << v1 + v2 << std::endl;

	//각 라인마다 std::cout 을 추가한다. 
	
	return 0;
}