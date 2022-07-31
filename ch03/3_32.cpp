#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	/*int ary[10];

	for (int index = 0; index < 10; index++) {
		ary[index] = index;
	}

	for (int elem : ary)
		cout << elem << " ";

	int ary2[10];

	for (int index = 0; index < 10; index++) {
		ary2[index] = ary[index];
	}*/

	vector<int> vec;
	for (int index = 0; index < 10; index++) {
		vec.push_back(index);
	}

	for (int elem : vec)
		cout << elem << " ";

	vector<int> vec2;

	for (int index = 0; index < 10; index++) {
		vec2.push_back(vec[index]);
	}
	for (int elem : vec2)
		cout << elem << " ";
	return 0;
}