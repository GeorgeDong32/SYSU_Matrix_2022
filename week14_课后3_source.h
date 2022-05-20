#ifndef __SOURCE_H__
#define __SOURCE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
using namespace std;
class Person
{
public:
	virtual string toString() const
	{
		return "Person";
	}
};

class Student : public Person
{
public:
	virtual string toString() const
	{
		return "Student";
	}
};

class Employee : public Person
{
public:
	virtual string toString()const
	{
		return "Employee";
	}
};

class Staff : public Employee
{
public:
	virtual string toString()const
	{
		return "Staff";
	}
};

class Faculty : public Employee
{
public:
	virtual string toString()const
	{
		return "Faculty";
	}
};

#endif