#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::list;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9,0 };
	list<int> lst;
	std::copy(vec.cbegin() + 3, vec.cbegin() + 8, std::front_inserter(lst));

	for (int elem : lst)
		std::cout << elem << " ";

	return 0;
}