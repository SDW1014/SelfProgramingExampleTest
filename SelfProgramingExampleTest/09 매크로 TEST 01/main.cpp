// title : 09 매크로 TEST program
// explaination : 매크로를 이용하여 SWAP 함수를 구현하고 테스트하는 프로그램
// author : SDW
// date : 2024-07-07

// header
#include <iostream>

// macro
#define SWAP(a,b,type) do {type temp = a; a = b; b = temp;} while(0)

// main
int main() {
	int a = 1, b = 2;
	std::cout << a << " " << b << std::endl;

	SWAP(a, b, int);
	std::cout << a << " " << b << std::endl;
	return 0;
}