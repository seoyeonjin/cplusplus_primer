#include <iostream>
#include <string>
#include <vector>
#include <list>

using std::vector;
using std::string;
using std::list;

int main() {
	
	list<const char*> list1{ "one","two","three" };
	vector<string> vec1;

	vec1.assign(list1.cbegin(), list1.cend());

	for (auto elem : list1)
		std::cout << elem << " ";
	return 0;
}