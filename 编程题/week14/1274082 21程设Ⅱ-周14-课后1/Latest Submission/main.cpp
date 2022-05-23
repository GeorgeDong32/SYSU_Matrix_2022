#include <iostream>
#include <iomanip>

#include "layer.hpp"
#include "linear.hpp"
#include "conv.hpp"

int main() {
    int d, n, m, type_mark;
    double **W, *b, *k;
    std::cin >> d >> n;
    Layer ** layers = new Layer * [d];
    W = new double * [n];
    b = new double [n];
    k = new double [n];
    for (int i = 0; i < n; ++i)
        W[i] = new double [n];
    for (int i = 0; i < d; ++i) {
        std::cin >> type_mark;
        if (type_mark == 0) {   // Linear
            for (int x = 0; x < n; ++x)
                for (int y = 0; y < n; ++y)
                    std::cin >> W[x][y];
            for (int x = 0; x < n; ++x)
                std::cin >> b[x];
            layers[i] = new Linear(n, W, b);
        } else {    // Conv
            std::cin >> m;
            for (int x = 0; x < 2*m+1; ++x)
                std::cin >> k[x];
            layers[i] = new Conv(n, m, k);
        }
    }

    double * x = new double [n];
    double ** y = new double * [d];
    for (int i = 0; i < d; ++i)
        y[i] = new double [n];
    int T;
    std::cout << std::setiosflags(std::ios::fixed) << std::setprecision(2);
    for (std::cin >> T; T > 0; --T) {
        for (int i = 0; i < n; ++i)
            std::cin >> x[i];
        layers[0]->forward(x, y[0]);
        for (int i = 1; i < d; ++i)
            layers[i]->forward(y[i-1], y[i]);
        for (int i = 0; i < n-1; ++i)
            std::cout << y[d-1][i] << ' ';
        std::cout << y[d-1][n-1] << std::endl;
    }

    for (int i = 0; i < d; ++i) {
        delete layers[i];
        delete [] y[i];
    }
    delete [] layers;
    delete [] y;
    for (int i = 0; i < n; ++i)
        delete [] W[i];
    delete [] W;
    delete [] b;
    delete [] k;
    delete [] x;

    return 0;
}
