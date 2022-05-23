#include "creature.h"
#include <string>
#include <cstring>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
Creature::Creature(const char* _sound, int _age) :
	age(_age)
{
	int len = strlen(_sound);
	sound = new char[len + 1];
	strcpy(sound, _sound);
}

Creature::Creature(const Creature& other)
{
	age = other.age;
	int len = strlen(other.sound);
	sound = new char[len + 1];
	strcpy(sound, other.sound);
}


Creature::~Creature()
{
	if (sound != NULL)
		delete[] sound;
}

Creature& Creature::operator=(const Creature& other)
{
	if (&other == this)
		return *this;
	else
	{
		int _age = other.age;
		int len = strlen(other.sound);
		char* _s = new char[len + 1];
		strcpy(_s, other.sound);
		Creature re(_s, age);
		delete[] _s;
		return re;
	}
}

void Creature::say() const
{
	cout << "Creature with age " << age << " say " << sound << endl;
}

int Creature::getAge() const
{
	return age;
}
