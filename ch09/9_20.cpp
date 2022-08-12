#include <iostream>
#include <string>
#include <vector>
#include <deque>
#include <list>

using std::list;
using std::deque;
using std::vector;
using std::string;

int main() {
	list<int> list1{ 1,2,3,4,5 };
	deque<int> odd; 
	deque<int> even;

	for (int elem : list1) {
		if (elem % 2 == 0)
			even.push_back(elem);
		else
			odd.push_back(elem);
	}

	for (int elem : odd) {
		std::cout << elem << " ";
	}
	std::cout << std::endl;

	for (int elem : even) {
		std::cout << elem << " ";
	}
	return 0;
}