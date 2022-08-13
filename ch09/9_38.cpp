#include <iostream>
#include <vector>

using std::vector;

int main() {
	vector<int> vec1 = { 1,2,3,4 };

	std::cout << vec1.size() << std::endl; //4
	std::cout << vec1.capacity() << std::endl; //4

	vec1.push_back(5);
	std::cout << vec1.size() << std::endl; //5
	std::cout << vec1.capacity() << std::endl;//6

	vec1.push_back(6);
	std::cout << vec1.size() << std::endl; //6
	std::cout << vec1.capacity() << std::endl;//6

	vec1.push_back(7);
	std::cout << vec1.size() << std::endl;//7
	std::cout << vec1.capacity() << std::endl;//9
	return 0;
}