
// i = ic // legal
// p1 = p3 // illegal. p3는 const int *const, p1는 int*
// p1 = &ic // illegal. ic는 const int
// p3 = &ic; // illegal. p3값 바꿀 수 없음
// p2 = p1; // illegal. p2값 바꿀 수 없음 
// ic = *p3 // illegal. ic는 const int