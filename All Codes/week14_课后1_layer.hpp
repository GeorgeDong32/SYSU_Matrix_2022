#ifndef __LAYER_HPP__
#define __LAYER_HPP__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include "new_tensor.hpp"

class Layer
{
public:
	virtual void forward(double* const input, double* output) const = 0;
	virtual ~Layer() {};
};

#endif