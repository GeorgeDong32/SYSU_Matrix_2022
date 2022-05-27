#include <vector>
#include <list>
#include <iostream>
#include "sort.h"

inline bool myCmp(const int & a, const int & b) {
    return a > b;
}

int main() {
    int n, * s, i;
    std::vector<int> v;
    std::list<int> l;
    std::cin >> n;
    s = new int[n];
    for (i = 0; i < n; ++i) {
        std::cin >> s[i];
        v.push_back(s[i]);
        l.push_back(s[i]);
    }
    mySort(v.begin(), v.end(), myCmp);
    mySort(l.begin(), l.end());
    mySort(s, s + n, myCmp);
    for (i = 0; i < n - 1; ++i)
        std::cout << v[i] << ' ';
    std::cout << v.back() << std::endl;
    for (std::list<int>::const_iterator i = l.begin(); i != l.end(); ++i)
        std::cout << *i << ' ';
    std::cout << std::endl;
    for (i = 0; i < n - 1; ++i)
        std::cout << s[i] << ' ';
    std::cout << s[n-1] << std::endl;
    delete [] s;
    return 0;
}
