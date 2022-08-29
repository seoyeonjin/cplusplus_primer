#include <iostream>
#include <vector>

using std::vector;

vector<int>* f1() {
	vector<int>* p = new vector<int>();
	return p;
}

void f2(vector<int>* p2) {
	int i;
	while (std::cin >> i) {
		p2->push_back(i);
	}
}

void f3(vector<int>* p3) {
	for (int& elem : *p3)
		std::cout << elem << " ";
	std::cout << std::endl;
}

int main() {

	vector<int>* p = f1();
	f2(p);
	f3(p);

	delete p;
	return 0;
}