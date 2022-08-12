#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> vec1; 
	vector<int> vec2(vec1); //vec2 는 vec1의 복사
	vector<int> vec3 = vec1; // vec3 는 vec1을 복사한 것
	vector<int> vec4{ 1,2,3,4 }; 
	vector<int> vec5 = { 1,2,3,4 };
	vector<int> vec6(vec4.begin(), vec4.end()); // 범위 내에서 copy. vec4 copy
	vector<int> vec7(10); // 10개의 0을 가짐
	vector<int> vec8(10, 2); //2라는 값을 10번 가짐


	return 0;
}