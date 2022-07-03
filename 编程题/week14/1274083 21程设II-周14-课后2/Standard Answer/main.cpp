#include <iostream>

#include "orderedList.hpp"

int main() {
    int n, x;
    OrderedList * a = new AscendOrderedList, * d = new DescendOrderedList;
    std::cin >> n;
    for (int i = 0; i < n; ++i) {
        std::cin >> x;
        a->insert(x);
        d->insert(x);
    }
    a->printList();
    d->printList();
    delete a;
    delete d;
    return 0;
}