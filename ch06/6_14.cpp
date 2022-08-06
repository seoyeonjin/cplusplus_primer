// ref type 
void reset(int& i) {
	i = 0; 
}

// should not be a ref 
// 함수 안에서 매개변수 값이 변하지만 함수 밖에는 영향을 줘서는 안 되는 함수