#include <iostream>
#include <list>
#include <vector>
#include <string>

using std::string;
using std::list;
using std::vector;


void elimDups(list<string>& lst) {
	lst.sort();
	lst.unique();
}
int main() {
	list<string> lst{ "a", "aa", "aa", "ab", "a" };
	elimDups(lst);

	for (const string elem : lst)
		std::cout << elem << std::endl;
	
	return 0;
}