#include "Snack.h"
#include <string>


Snack::Snack(const string& name)
{
	_name = name;		
}


Snack::Snack(const Snack& other)
{
	this->_name = other._name;
}

string& Snack::getName()
{
	return _name;
}

void Snack::setName(const string& name)
{
	_name = name;
}
