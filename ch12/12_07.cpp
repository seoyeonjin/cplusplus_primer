#include <iostream>
#include <vector>

using std::vector;

std::shared_ptr<vector<int>> f1() {
	return std::make_shared<vector<int>>();
}

void f2(std::shared_ptr<vector<int>> p2) {
	int i;
	while (std::cin >> i) {
		p2->push_back(i);
	}
}

void f3(std::shared_ptr<vector<int>> p3) {
	for (int& elem : *p3)
		std::cout << elem << " ";
	std::cout << std::endl;
}

int main() {

	std::shared_ptr<vector<int>> p = f1();
	f2(p);
	f3(p);

	return 0;
}