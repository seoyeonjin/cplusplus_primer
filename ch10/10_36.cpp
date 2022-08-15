#include <iostream>
#include <list>

using std::list;

int main() {
	list<int> lst{ 0,1,2,3,4,5,6,7,8,9,0 };

	list<int>::reverse_iterator result=  std::find(lst.rbegin(), lst.rend(), 0);

	return 0;
}