#pragma once

class Layer {
public:
    virtual void forward(double * const input, double * output) const = 0;
    virtual ~Layer() {}
};
