#include <rational.h>
#include <iostream>
#include <vector>
#include <algorithm>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
void sortRational(std::vector<rational>& vec)
{
   sort(vec.begin(), vec.end(), [](auto a, auto b) { return a > b; });
}
