// title : macro
// explanation : macro를 이용하여 x가 low보다 작으면 low를, high보다 크면 high를, 그렇지 않으면 x를 반환하는 매크로 함수를 작성하시오.
// author : SDW
// date : 2020-07-07

// header 
#include <iostream>

// macro
#define CLAMP(x, low, high) ((x) < (low) ? (low) : ((x) > (high) ? (high) : (x)))

// main
int main() {
	int x = 10;

	int y = CLAMP(x, 0, 5);

	std::cout << y << std::endl;
	return 0;
}