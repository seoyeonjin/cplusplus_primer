#include <iostream>
#include <vector>

using std::vector;
using std::cout; 

int main() {

	vector<int> vec1{ 1,2,3,4 };
	vector<int> vec2{ 1,2,3};

	if (vec1 == vec2) {
		cout << "����" << std::endl;
	}
	else
		cout << "�ٸ�" << std::endl;

	return 0;
}