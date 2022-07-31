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

	/*for (int index = 0; index < vec.size() -1; index++) {
		cout << vec[index] + vec[index + 1] << " ";

	}*/

	int size = (vec.size() % 2 == 0) ? vec.size()/2 : vec.size() / 2 + 1;
	for (int index = 0; index < size; index++)
	cout << vec[index] + vec[vec.size() -index -1] << endl;
	return 0;
}