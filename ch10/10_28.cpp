#include <iostream>
#include <vector>
#include <algorithm>
#include <list>

using std::list;
using std::vector;
using std::inserter;
using std::back_inserter;
using std::front_inserter;

int main() {

	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };

	list<int> lst1;
	list<int> lst2;
	list<int> lst3;

	std::copy(vec.begin(), vec.end(), inserter(lst1, lst1.begin()));
	std::copy(vec.begin(), vec.end(), front_inserter(lst2));
	std::copy(vec.begin(), vec.end(), back_inserter(lst3));

	for (int elem : lst1)
		std::cout << elem << " ";
	std::cout << std::endl;

	for (int elem : lst2)
		std::cout << elem << " ";
	std::cout << std::endl;

	for (int elem : lst3)
		std::cout << elem << " ";
	std::cout << std::endl;
	return 0;
}