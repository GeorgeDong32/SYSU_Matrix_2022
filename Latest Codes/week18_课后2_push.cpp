#include <thread>
#include <iostream>
#include <vector>
#include <chrono>
using t = std::thread;
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
void push_back(std::vector<t>& vec, t& tar)
{
	vec.push_back(move(tar));
}