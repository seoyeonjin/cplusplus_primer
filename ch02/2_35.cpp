// i�� const int
// j�� int
// k�� const int &
// p�� const int* 
//j2�� const int 
//k2�� const int&

const int i = 42;
auto j = i;
const auto& k = i;
auto* p = &i;
const auto j2 = i, & k2 = i;