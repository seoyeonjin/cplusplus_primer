#include <iostream>
#include <string>

using std::string;

bool has_capital(const string s) {
	for (size_t i = 0; i < s.size(); ++i) {
		if (isupper(s[i]))
			return true;
	}
	return false;
}

void to_lower(string& s) {
	for (size_t i = 0; i < s.size(); ++i) {
		s[i] = tolower(s[i]);
;	}
}

// �ٸ� parameter type�� ����
// ù �Լ��� �Լ� ���ο��� parameter�� ������ ���� 