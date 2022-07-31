#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	vector<vector<int>> ivec; //legal. 
	// int type vector를 가진 vector

	vector<string> svec = ivec; //illegal. 
	// svec은 string type의 vector가 필요

	vector<string> svec(10, "null"); // legal.
	// "null" string을 가진 10개의 item이 생성됨. 


	return 0;
}