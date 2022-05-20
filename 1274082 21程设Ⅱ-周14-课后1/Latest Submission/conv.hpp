#ifndef __CONV_HPP__
#define __CONV_HPP__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include "layer.hpp"
#include "new_tensor.hpp"

class Conv : public Layer {
private:
	double const* const _k;
	const int _n;
	const int _m;
public:
	Conv(int n, const int m, double* const k) : _k(new_tensor_1d(2 * m + 1, k)), _n(n), _m(m) {}
	void forward(double* const input, double* output) const {
		for (int i = 0; i < _n; ++i)
		{
			output[i] = 0;
			for (int j = 0; j < 2 * _m + 1; ++j)
			{
				if (i - _m + j >= 0 && i - _m + j < _n)
					output[i] += _k[j] * input[i - _m + j];
			}
		}
	}
	~Conv() {
		delete[] _k;
	}
};

#endif