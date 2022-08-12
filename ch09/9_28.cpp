#include <iostream>
#include <list>
#include <forward_list>
#include <string>

using std::string;
using std::list;
using std::forward_list;


void func(forward_list<string>& flst, string str1, string str2) {
	auto prev = flst.before_begin();
	auto curr = flst.begin();
	while (curr != flst.end()) {
		if (*curr == str1) {
			flst.insert_after(curr, str2);
			return;
		}
		else {
			prev = curr;
			++curr;
		}
	}
	flst.insert_after(prev, str2);
}

int main() {

	forward_list<string> flst{ "one", "two","three" };
	func(flst, "one", "word");

	for (string elem : flst) {
		std::cout << elem << " ";
	}
	return 0;
}