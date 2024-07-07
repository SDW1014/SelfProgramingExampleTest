// title : macro
// explanation : macro�� �̿��Ͽ� x�� low���� ������ low��, high���� ũ�� high��, �׷��� ������ x�� ��ȯ�ϴ� ��ũ�� �Լ��� �ۼ��Ͻÿ�.
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