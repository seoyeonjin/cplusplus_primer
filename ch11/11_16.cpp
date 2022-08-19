#include <map>
#include <iostream>

using std::map;

int main() {

	map<int, int> m = { 1,2 };
	map<int, int>::iterator it = m.begin();
	it->second = 3;
	return 0;
}