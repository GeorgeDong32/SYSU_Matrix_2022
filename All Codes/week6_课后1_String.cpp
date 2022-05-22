//Copyright (c) GeorgeDong32(Github). All rights reserved.
#include "String.h"
#include <iostream>
#include <string.h>
using namespace std;

STRING::STRING()
{
	length = 0;
	buffer = new char[length];
}

STRING::STRING(const char *str)
{
	length = strlen(str);
	buffer = new char[length];
	for(int i = 0; i < length; i++)
	{
		buffer[i] = str[i];
	}
}

STRING::STRING(const STRING &o)
{
	length = o.length;
	buffer = new char[length];
	for(int i = 0; i < length; i++)
	{
		buffer[i] = o.buffer[i];
	}
}

STRING::~STRING()
{
	delete []buffer;
}
//Copyright (c) GeorgeDong32(Github). All rights reserved.
