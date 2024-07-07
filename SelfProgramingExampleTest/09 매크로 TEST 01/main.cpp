// title : 09 ��ũ�� TEST program
// explaination : ��ũ�θ� �̿��Ͽ� SWAP �Լ��� �����ϰ� �׽�Ʈ�ϴ� ���α׷�
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