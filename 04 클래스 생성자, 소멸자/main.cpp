// title : Class CREATE and DELETE test
// explanation : This code is for testing the creation and deletion of classes in C++.
// author : SDW
// date : 2024-07-05

#include <iostream>

// Class TEST
class TEST
{
public:
	int b;
	int a;

	TEST() : a(0), b(0) {};
	~TEST() 
	{
		a = 0;
		b = 0;
	};
};


// Main Function
int main()
{
	TEST* test = new TEST();
	delete test;
	return 1;
}