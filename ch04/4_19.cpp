#include <iostream>
#include <vector>
// a. ptr이 nullptr가 아니면 *ptr++ 값 true인지 확인
// b. ival이 true면 && 뒤 실행. 앞에 ++로 하나 증가된 값 true인지 확인
// c. incorrect. vector element에서 ival위치보다 ival+1위치의 값이 크거나 같은지 확인, vec[ival] <= vec[ival+1]
int main() {
	int ival = 1;
	std::vector<int> vec = { 1,2,0,4 };
	std::cout << (vec[ival++]) << ival << std::endl;
	return 0;
}