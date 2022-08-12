#include <iostream>
#include <vector>

using std::vector;
using std::cout;

int main() {
	vector<int> vec1; 

	cout << vec1.at(0); //debug error
	cout << vec1[0]; // debug assertion failed
	cout << vec1.front(); // debug assertion failed
	cout << *vec1.begin(); // debug assertion failed

	return 0;
}