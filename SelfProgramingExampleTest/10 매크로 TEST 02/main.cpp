// title : ��ũ�� TEST 02 - iostream�� ����ϴ� ���
// explanation : iostream�� ����ϴ� ��ũ�θ� �����Ѵ�. 
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