#include <iostream>
#include <vector>	

using std::cout;
using std::endl;
using std::vector;

bool find(vector<int>::iterator begin, vector<int>::iterator end, int value) {
	while (begin != end) {
		if (*begin == value)
			return true;
		begin++;
	}
	return false;
}

int main() {

	int value = 5;
	vector<int> vec = { 1,2,3,4};
	bool found = find(vec.begin(), vec.end(), value);
	cout << found << endl;
}