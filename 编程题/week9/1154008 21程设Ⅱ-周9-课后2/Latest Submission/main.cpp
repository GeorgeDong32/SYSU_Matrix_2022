#include <iostream>
#include <string>
#include "animal.h"
#include "human.h"

int main() {
    std::string s, n;
    int e;
    std::cin >> s >> e >> n;
    animal * p = new animal(s, e);
    p->print_eyes();
    delete p;
    human h(n);
    p = &h;
    p->print_eyes();
    const human & q = h;
    q.greeting();
    return 0;
}

