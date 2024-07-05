// title : Lambda Expressions
// explanation : Lambda expressions are a feature of C++ that allows you to define a function object in a single line of code.
// author : SDW
// date : 2024-07-05

#include <algorithm>
#include <vector>
#include <iostream>

int main()
{
	std::vector<int> numbers = { 1,2,3,4,5 };
	std::for_each(numbers.begin(), numbers.end(), [](int number) { std::cout << number << std::endl; });
	return 1;
}