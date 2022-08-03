// a. pv = const_cast<void*> ps;
// b. i = static_case<int> (*pc);
// c. pv = static_cast<void*> (&d);
// d. pc = reinterpret_cast<char*> pv; // 임의의 포인터 타입끼리 변환을 허용
