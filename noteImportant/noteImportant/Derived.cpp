#include "Derived.h"
#include <iostream>


void Derived::fun1()
{
	Base::fun1();
	std::cout << "in Derived::fun()" << std::endl;
}
