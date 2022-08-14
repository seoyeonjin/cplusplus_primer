#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
#include <string>

using std::string;
using std::list;
using std::vector;
using std::count;

int main() {
	vector<int> vec{ 1,2,3,4,5,6,6,6 };
	list<string> list1{ "one", "two","three", "one" };
	int result2 = count(list1.begin(), list1.end(), "one");
	int result = count(vec.begin(), vec.end(), 6);

	std::cout << result2;
	return 0;
}