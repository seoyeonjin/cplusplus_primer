#include <iostream>

int main() {
	std::cout << (~'q' << 6); //부호 있는 음수의 왼쪽 시프트는 정의되지 않은 동작.
	//-7296

	return 0;
}