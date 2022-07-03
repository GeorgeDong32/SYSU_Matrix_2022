#pragma once

#include "layer.hpp"
#include "new_tensor.hpp"

class Linear: public Layer {
private:
    double const * const * const _W;
    double const * const _b;
    const int _n;
public:
    Linear(int n, double * const * const W, double * const b): _W(new_tensor_2d(n, W)), _b(new_tensor_1d(n, b)), _n(n) {}
    void forward(double * const input, double * output) const {
        for (int i = 0; i < _n; ++i) {
            output[i] = _b[i];
            for (int j = 0; j < _n; ++j)
                output[i] += _W[i][j] * input[j];
        }
    }
    ~Linear() {
        delete[] _b;
        for (int i = 0; i < _n; ++i)
            delete[] _W[i];
        delete[] _W;
    }
};
