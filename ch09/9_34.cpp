#include <iostream>
#include <vector>

using std::vector;

int main() {
// Ȧ���� �� �� �� ����.
	vector<int> vi = { 0,1,2,3,4,5,6,7,8,9 };
	vector<int>::iterator iter = vi.begin();
	while (iter != vi.end()) {
		if (*iter % 2) {
			iter = vi.insert(iter, *iter);
			++iter;
		}
		++iter;
	}
	
	for (int elem : vi) {
		std::cout << elem << " ";
	}
	return 0;
}