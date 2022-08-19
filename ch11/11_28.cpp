// map<sttring, vector<int>>

#include <map>
#include <iostream>
#include <vector>
#include <string>

using std::map;
using std::vector; 
using std::string;

int main() {
	map<string, vector<int>> m;
	m.insert({ "str", {1,2,3,4} });
	map<string, vector<int>>::iterator result = m.find("str");


	return 0;
}