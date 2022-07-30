// i는 const int
// j는 int
// k는 const int &
// p는 const int* 
//j2는 const int 
//k2는 const int&

const int i = 42;
auto j = i;
const auto& k = i;
auto* p = &i;
const auto j2 = i, & k2 = i;