#include <iostream>
#include <vector>
#include <string>

using std::cin;
using std::cout;
using std::endl;
using std::vector;
using std::string;

int main() {
	// a
	vector<int> v1;
	cout << "size: " << v1.size() << endl;

	// b
	vector<int> v2(10);
	cout << "size: " << v2.size() << " value: " ;
	for (int& i : v2) {
		cout << i << " ";
	}
	cout << endl;

	// c
	vector<int> v3(10, 42);
	cout << "size: " << v3.size() << " value: ";
	for (int& i : v3) {
		cout << i << " " ;
	}
	cout << endl;

	// d
	vector<int> v4{ 10 };
	cout << "size: " << v4.size() << " value: ";
	for (int& i : v4) {
		cout << i << " ";
	}
	cout << endl;


	// e
	vector<int> v5{ 10,42 };
	cout << "size: " << v5.size() << " value: ";
	for (int& i : v5) {
		cout << i << " ";
	}
	cout << endl;

	// f
	vector<string> v6{ 10};
	cout << "size: " << v6.size() << " value: ";
	for (string& i : v6) {
		cout << i << " ";
	}
	cout << endl;

	// g
	vector<string> v7{ 10, "hi" };
	cout << "size: " << v7.size() << " value: ";
	for (string& i : v7) {
		cout << i << " ";
	}
	cout << endl;

	return 0;
}
