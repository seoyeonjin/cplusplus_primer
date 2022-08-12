#include <iostream>
#include <vector>	

using std::cout;
using std::endl;
using std::vector;

vector<int>::iterator find(vector<int>::iterator begin, vector<int>::iterator end, int value) {
	while (begin != end) {
		if (*begin == value)
			return begin;
		begin++;
	}
	return end;
}

int main() {

	int value = 5;
	vector<int> vec = { 1,2,3,4 };
	vector<int>::iterator found = find(vec.begin(), vec.end(), value);
}