#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using std::vector;
using std::list;
using std::unique_copy;

int main() {
	vector<int> vec{ 1,1,2,3,4,1 };
	list<int> lst;

	std::sort(vec.begin(), vec.end());
	unique_copy(vec.begin(), vec.end(), std::back_inserter(lst));

	for (int elem : lst) {
		std::cout << elem << " ";
	}


	return 0;
}