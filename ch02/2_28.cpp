
// int i, *const cp; -> illegal (cp 초기화)
// int* p1, *const p2 -> illegal (p2 초기화) 
// const int ic, &r = ic; -> illegal (ic 초기화) 
// const int *const p3; -> illegal (p3 초기화) 
// const int *p -> legal