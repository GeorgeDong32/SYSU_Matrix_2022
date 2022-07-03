#pragma once

#include "layer.hpp"
#include "new_tensor.hpp"

class Conv: public Layer {
private:
    int _n, _m;
    double const * const _k;
public:
    Conv(int n, int m, double * const k): _n(n), _m(m), _k(new_tensor_1d(2*m+1, k)) {}
    void forward(double * const input, double * output) const {
        int x;
        for (int i = 0; i < _n; ++i) {
            output[i] = 0;
            for (int j = 0; j < 2*_m+1; ++j) {
                x = i - _m + j;
                if (x >= 0 && x < _n)
                    output[i] += _k[j] * input[x];
            }
        }
    }
    ~Conv() {
        delete[] _k;
    }
};