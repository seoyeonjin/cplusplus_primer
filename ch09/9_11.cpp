#include <iostream>
#include <vector>

using std::vector;
using std::cout;
using std::endl;

int main() {
	vector<int> vec1; 
	vector<int> vec2(vec1); //vec2 �� vec1�� ����
	vector<int> vec3 = vec1; // vec3 �� vec1�� ������ ��
	vector<int> vec4{ 1,2,3,4 }; 
	vector<int> vec5 = { 1,2,3,4 };
	vector<int> vec6(vec4.begin(), vec4.end()); // ���� ������ copy. vec4 copy
	vector<int> vec7(10); // 10���� 0�� ����
	vector<int> vec8(10, 2); //2��� ���� 10�� ����


	return 0;
}