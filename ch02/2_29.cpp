
// i = ic // legal
// p1 = p3 // illegal. p3�� const int *const, p1�� int*
// p1 = &ic // illegal. ic�� const int
// p3 = &ic; // illegal. p3�� �ٲ� �� ����
// p2 = p1; // illegal. p2�� �ٲ� �� ���� 
// ic = *p3 // illegal. ic�� const int