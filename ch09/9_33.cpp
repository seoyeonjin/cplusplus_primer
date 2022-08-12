#include <iostream>
#include <vector>

using std::vector;

int main() {

	vector<int> v = { 1,2,3,4 };

	vector<int>::iterator begin = v.begin();

	while (begin != v.end()) {
		++begin;
		begin = v.insert(begin, 42); // egin�� ���������� �ƹ��͵� ��µ��� ����
		// �⵹. insert �� begin�� ��ȿ���� ����
		++begin;
	}

	for (auto elem : v) {
		std::cout << elem << " ";
	}

	return 0;
}