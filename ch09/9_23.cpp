/*if (!c.empty()) {
	// val and val2 are copies of the value of the first element in c
	auto val = *c.begin(), val2 = c.front();
	// val3 and val4 are copies of the of the last element in c
	auto last = c.end();
	auto val3 = *(--last); // can’t decrement forward_list iterators
	auto val4 = c.back(); // not supported by forward_list
}*/

// val = 첫 번째 element
// val2 = 첫 번째 element
// val3 = 마지막 위치의 값
// val4 = 마지막 element

// size가 1이므로 모두 같은 값