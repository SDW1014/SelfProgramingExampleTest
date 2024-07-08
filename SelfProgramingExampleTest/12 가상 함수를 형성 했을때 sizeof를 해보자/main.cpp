// title : it is Test of sizeof when virtual function is exist
// explanation : 가상함수를 형성하고 선언할 때 sizeof를 사용하면 어떻게 될까?
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