#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;
using std::copy;

int main() {
	vector<int> vec;
	list<int> lst;
	int i; 
	// a
	while (std::cin >> i)
		lst.push_back(i);
	// copy(lst.cbegin(), lst.cend(), vec.begin());
	// error -> vec.begin() 대신 vec.back_inserter 사용. 
	copy(lst.cbegin(), lst.cend(), std::back_inserter(vec));

	for (auto elem : vec) {
		std::cout << elem << std::endl;
	}

	// b
	vector<int> vec2;
	vec2.reserve(10);
	fill_n(std::back_inserter(vec2), 10, 0);
	//error 발생
	for (auto elem : vec2) {
		std::cout << elem << std::endl;
	}

	return 0;
}
