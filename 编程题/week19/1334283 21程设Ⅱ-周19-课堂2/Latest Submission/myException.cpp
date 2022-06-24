#include "myException.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
MyException::MyException(const std::string msg): message(msg){}

std::string MyException::what()
{
	return message;
}
