#include <iostream>

int main() {
	
	for (int first, second; std::cin >> first >> second;) {
		try {
			if (second == 0)
				throw std::runtime_error("second is zero");
			std::cout << (float)first / second << std::endl;
		}
		catch (std::runtime_error error) {
			std::cout << error.what() << std::endl;
			std::cout << "�ٽ� �Է��Ͻðڽ��ϱ�? y �Ǵ� n" << std::endl;
			char c;
			std::cin >> c;
			if (!std::cin || c == 'n')
				break;
		}
	}

	return 0;
}