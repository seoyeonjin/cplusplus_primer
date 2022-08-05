#include <iostream>
#include <vector>
#include <string>

using std::vector;

int main() {
	vector<int> a = { 0,1,1,2 };
	vector<int> b = { 0,1,1,2,3,5,8 };

	if (a.size() < b.size()) {
		for (int i = 0; i < a.size(); ++i) {
			if (a[i] != b[i])
				return false;
		}
		std::cout << "true";
	}
	else {
		for (int i = 0; i < b.size(); ++i) {
			if (a[i] != b[i])
				return false;
		}
		std::cout << "true";
	}

	return 0;
}