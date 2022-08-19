// copy(v.begin(), v.end(), inserter(c, c.end())); // legal
// copy(v.begin(), v.end(), back_inserter(c)); // illegal, set을 vector에 넣을 수 없음
// copy(c.begin(), c.end(), inserter(v, v.end())); // legal.
// copy(c.begin(), c.end(), back_inserter(v)); // legal.