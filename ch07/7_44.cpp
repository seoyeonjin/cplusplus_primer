#include <vector>

class NoDefault {
public:
	NoDefault(int i) {}
};

class C {
public:
	C() : no(0) {}
	std::vector<NoDefault> vec(10);
	// illegal. 각각이 초기화 되어야 함.
private:
	NoDefault no;
};

int main() {


}