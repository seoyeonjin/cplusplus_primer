
// int i, *const cp; -> illegal (cp �ʱ�ȭ)
// int* p1, *const p2 -> illegal (p2 �ʱ�ȭ) 
// const int ic, &r = ic; -> illegal (ic �ʱ�ȭ) 
// const int *const p3; -> illegal (p3 �ʱ�ȭ) 
// const int *p -> legal