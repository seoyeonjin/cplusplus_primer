#pragma once

class NoDefault {
public:
	NoDefault(int i){}
};

class C {
public:
	C(): no(0) {}
private:
	NoDefault no;
};