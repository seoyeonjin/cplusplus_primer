#include <iostream>
#include <vector>	
#include <list>

using std::vector;
using std::cout; 

int main() {

	std::list<int> list1 = { 1,2,3,4 };
	vector<int> vec2 = { 1,2,3,4 };
	vector<double> vec1(list1.begin(), list1.end()); 
	for (double elem : vec1) {
		cout << elem << " ";
	}
	cout << std::endl;
	vector<double> vec3(vec2.begin(), vec2.end());
	for (double elem : vec3) {
		cout << elem << " ";
	}
	return 0;
}