#include <vector>

class NoDefault {
public:
	NoDefault(int i) {}
};

class C {
public:
	C() : no(0) {}
	std::vector<NoDefault> vec(10);
	// illegal. ������ �ʱ�ȭ �Ǿ�� ��.
private:
	NoDefault no;
};

int main() {


}