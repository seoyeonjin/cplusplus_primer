#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	vector<int> vec;
	int i;
	while (cin >> i) {
		vec.push_back(i);
	}

	for (vector<int>::iterator it = vec.begin(); it != vec.end() -1; ++it) {
		cout << *it + *(it + 1) << " ";
	}
	cout << endl;
	//int size = (vec.size() % 2 == 0) ? vec.size() / 2 : vec.size() / 2 + 1;

	for (auto it = vec.begin(), it2 = vec.end() -1; it <= it2; ++it, --it2) {
		cout << *it + *it2 << " ";
	}
	return 0;
}