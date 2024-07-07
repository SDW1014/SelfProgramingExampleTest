// title : 매크로 TEST 02 - iostream을 사용하는 경우
// explanation : iostream을 사용하는 매크로를 정의한다. 
// author : SDW
// date : 2024-07-07

// header
#include <iostream>

// define macro
#define PRINT_VALUES(a, b) std::cout << "a : " << a << std::endl << "b : " << b << std::endl

// main 
// entry point
int main()
{
	int a = 10, b = 20;
	PRINT_VALUES(a, b);
	return 0;
}