#pragma once

#include <cstring>

double * new_tensor_1d(int n, double * const source) {
    double * target = new double[n];
    memcpy(target, source, n * sizeof(double));
    return target;
}

double * const * new_tensor_2d(int n, double * const * const source) {
    double * * target = new double * [n];
    for (int i = 0; i < n; ++i) {
        target[i] = new_tensor_1d(n, source[i]);
    }
    return target;
}