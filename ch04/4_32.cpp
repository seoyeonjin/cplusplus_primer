#include <iostream>
#include <string>
#include <vector>

int main() {
	constexpr int size = 5;
	int ia[size] = { 1,2,3,4,5 };
	for (int* ptr = ia, ix = 0;
		ix != size && ptr != ia + size;
		++ix, ++ptr) //ptr은 pointer로 배열의 끝까지. ix는 index로 배열의 끝까지
}