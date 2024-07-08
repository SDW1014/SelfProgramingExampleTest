// title : it is Test of sizeof when virtual function is exist
// explanation : �����Լ��� �����ϰ� ������ �� sizeof�� ����ϸ� ��� �ɱ�?
// author : SDW
// date : 2024-07-07

// header
#include <iostream>

// class
class sizeofTest_1
{
public:
	virtual void func()
	{
		std::cout << "My Name Is SizeofTest_1" << std::endl;
	}
};

// entry point
int main()
{
	sizeofTest_1 test;

	std::cout << sizeof(test) << std::endl;

	if (sizeof(test) == 5)
	{
		std::cout << "sizeofTest_1 is 5" << std::endl;
	}
	else
	{
		std::cout << "sizeofTest_1 is not 5" << std::endl;
	}

	return 0;
}