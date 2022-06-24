#include "MyException.hpp"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
MyException::MyException(const std::string msg): message("invalid argument"){}

std::string MyException::what()
{
	return message;
}
