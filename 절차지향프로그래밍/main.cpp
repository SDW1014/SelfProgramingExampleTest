#include <iostream>

int globalVar;

void myFunction()
{
	globalVar = 1;
}

int main()
{
	std::cout << "1. Global variable: " << globalVar << "\n";
	myFunction();
	std::cout << "2. Global variable: " << globalVar << "\n";
	return 1;
}