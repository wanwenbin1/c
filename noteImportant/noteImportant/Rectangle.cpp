#include "Rectangle.h"
#include <iostream>
using namespace std;
Rectangle::Rectangle(int x, int y)
{
	this->x = x;
	this->y = y;
}

int Rectangle::getArea()
{

	int temp = x * y;
	cout << temp << endl;
	return 0;
}
