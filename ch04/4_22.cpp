#include <iostream>
#include <string>

int main() {
	std::string str;
	int score = 4;

	//str = (score > 90 ? "high pass" : score  < 60 ? "fail" : score < 75 ? "low pass" : "pass" );
	

	if (score > 60) {
		if (score > 90) {
			str = "high pass";
		}
		else if (score < 75) {
			str = "low pass";
		}
		else {
			str = "pass";
		}
	}
	else {
		str = "fail";
	}

	std::cout << str << std::endl;


	return 0;

}