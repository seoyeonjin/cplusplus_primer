
// int i = -1 , &r = 0; // illegal. r은 object가리켜야 함 
// int *const p2 = &i2; // legal
// const int i = -1, &r = 0; // legal
// const int *const p3 = &i2; //legal
// const int *p1 = &i2; // legal
// const int &const r2; // illegal
// const int i2 = i, &r = i // legal