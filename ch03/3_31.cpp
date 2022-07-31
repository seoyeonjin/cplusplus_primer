#include <iostream>
#include <string>
#include <vector>

using std::cout;
using std::cin;
using std::endl;
using std::string;
using std::vector;

int main() {
	int ary[10];
	
	for (int index = 0; index < 10; index++) {
		ary[index] = index;
	}

	for (int elem : ary)
		cout << elem << " ";
	return 0;
}