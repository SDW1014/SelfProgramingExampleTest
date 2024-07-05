// title : Classes and Objects
// explanation : This program demonstrates how to create a class and object in C++.
// author : SDW
// date : 2024-07-05

#include <iostream>

using namespace std;

// 1.Class definition
class Car 
{
public:
	string make;
	string model;

	void start()
	{
		cout << make << ", " << model << " is starting." << endl;
	}
};

// 2. Main function
int main()
{
	Car myCar;
	myCar.make = "Ferrari";
	myCar.model = "F430";
	myCar.start();
	return 1;
}