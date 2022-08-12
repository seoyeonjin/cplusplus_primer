#include <iostream>
#include <vector>
#include <list>

using std::vector;
using std::cout;
using std::list;

int main() {

	vector<int> vec1{ 1,2,3,4 };
	list<int> list1{ 1,2,3,4};
	list<int> temp_list(vec1.begin(), vec1.end());
	if (temp_list == list1) {
		cout << "같음" << std::endl;
	}
	else
		cout << "다름" << std::endl;

	return 0;
}