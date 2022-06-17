#include "rational.h"
#include <iostream>

using r = rational;

void show(const vector<r>& vec) {
    using std::cout;

    cout << "[ ";
    if (vec.size() > 0) {
        cout << vec[0].to_str();
        for (int i = 1; i < vec.size(); ++i) {
            cout << ", ";
            cout << vec[i].to_str();
        }
    }
    cout << " ]";
}

int main() {
    vector<r> v1 = { r{1, 2}, r{1, 3}, r{1, 5}, r{2, 9}, r{1, 7} };
    vector<r> v2 = { r{-1, 2}, r{-2, 1}, r{1, 3}, r{2, 1} };

    sortRational(v1);
    sortRational(v2);

    show(v1);
    std::cout << "\n";
    show(v2);
}