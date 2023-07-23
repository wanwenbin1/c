#include "Box.h"
#include <iostream>
Box::Box()
{
	height = 0;
	width = 0;
	std::cout << "Box::Box()" << std::endl;
}

Box::~Box()
{
	std::cout << "Box::~Box()" << std::endl;
}

void Box::getHeight()
{
	std::cout << height << std::endl;

}

void Box::getWidth()
{
	std::cout << width << std::endl;
}
