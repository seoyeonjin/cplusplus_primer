#include <iostream>
#include <vector>
#include <string>

using std::vector;
using std::string;

int main() {
	vector<vector<int>> ivec; //legal. 
	// int type vector�� ���� vector

	vector<string> svec = ivec; //illegal. 
	// svec�� string type�� vector�� �ʿ�

	vector<string> svec(10, "null"); // legal.
	// "null" string�� ���� 10���� item�� ������. 


	return 0;
}