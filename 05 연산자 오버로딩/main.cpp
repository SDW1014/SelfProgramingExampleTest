// title : Operator Overloading
// explanation : Operator Overloading is a way to define how an operator should behave when used with a class or struct.
// author : SDW
// date : 2024-07-05

#include <iostream>

struct Vector2
{
	int x; 
	int y;

	Vector2(int _x, int _y)
	{
		x = _x;
		y = _y;
	}

	Vector2 operator+(Vector2 other)
	{
		return Vector2(x + other.x, y + other.y);
	}
};

int main()
{
	Vector2 position(4, 5);
	Vector2 velocity(1, 2);

	position = position + velocity;

	std::cout << position.x << ", " << position.y << std::endl;

	return 0;
}