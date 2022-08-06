#include <iostream>
#include <vector>	

using std::vector;


void print(vector<int> vec, int index) {
	if (index >= 0) {
		std::cout << vec[index] << std::endl;
		print(vec, index - 1);
	}
}
int main() {
	vector<int> vec{ 1,2,3,4,5,6,7,8,9 };
	print(vec, 8);

	return 0;
}