#include <iostream>
#include <vector>
// a. ptr�� nullptr�� �ƴϸ� *ptr++ �� true���� Ȯ��
// b. ival�� true�� && �� ����. �տ� ++�� �ϳ� ������ �� true���� Ȯ��
// c. incorrect. vector element���� ival��ġ���� ival+1��ġ�� ���� ũ�ų� ������ Ȯ��, vec[ival] <= vec[ival+1]
int main() {
	int ival = 1;
	std::vector<int> vec = { 1,2,0,4 };
	std::cout << (vec[ival++]) << ival << std::endl;
	return 0;
}