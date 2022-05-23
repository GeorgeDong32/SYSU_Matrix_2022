#pragma once
#include "Cat.h"
void Cat::_copy(const Cat& c)
{
	//cout << "in copy" << endl;
	name = c.name;
	family = c.family;
	int size = c.size;
	//cout << "out" << endl;
}

Cat::Cat(const Cat& c)
{
	//cout << "in Cat(&)";
	name = c.name;
	size = c.size;
	family = new Cat * [size];
	for (int i = 0; i < size; i++)
	{
		family[i] = c.family[i];
	}
	//cout << "out" << endl;
}

Cat& Cat::operator=(const Cat& c)
{
	if (this == &c)
		return *this;
	name = c.name;
	size = c.size;
	if (family != nullptr)
		delete[]family;
	family = new Cat * [size];
	for (int i = 0; i < size; i++)
	{
		family[i] = c.family[i];
	}
	return *this;
}