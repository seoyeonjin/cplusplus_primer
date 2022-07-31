#include <iostream>
#include <string>

using std::string;
using std::cin;
using std::cout; 

int main() {
	
	string line;
	string word;
	
	// word
	while (cin >> word) {
		cout << word << " ";
	}

	// line 
	/*
	while (getline(cin, line)) {
		cout << line << " ";
	}
	*/
	
	return 0;
}