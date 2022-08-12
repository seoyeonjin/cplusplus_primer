#include <iostream>
#include <vector>

using std::vector;

int main() {

	vector<int> v = { 1,2,3,4 };

	vector<int>::iterator begin = v.begin();

	while (begin != v.end()) {
		++begin;
		begin = v.insert(begin, 42); // egin에 넣지않으면 아무것도 출력되지 않음
		// 출돌. insert 후 begin이 유효하지 않음
		++begin;
	}

	for (auto elem : v) {
		std::cout << elem << " ";
	}

	return 0;
}