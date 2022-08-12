#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

int main() {
	int ia[] = { 0,1,1,2,3,5,8,13,21,55,89 };
	vector<int> vec;
	list<int> lis;

	for (int elem : ia) {
		vec.push_back(elem);
		lis.push_back(elem);
	}

	list<int>::iterator it = lis.begin();
	vector<int>::iterator it2 = vec.begin();
	while (it != lis.end()) {
		if (*it % 2)
			it = lis.erase(it);
		else
			++it;
	}

	while (it2 != vec.end()) {
		if (*it2 % 2 == 0)
			it2 = vec.erase(it2);
		else
			++it2;
	}

	for (int elem : vec)
		std::cout << elem << " ";
	std::cout << std::endl;

	for (int elem : lis)
		std::cout << elem << " ";

	return 0;
}