#include "Object.h"
#include <iostream>

using namespace std;
Object::Object()
{
	cout << "Object::Object()" << endl;
}
Object::~Object()
{
	cout << "Object::~Object()" << endl;
}
void Object::getWeight()
{
	cout << weight << endl;
}
