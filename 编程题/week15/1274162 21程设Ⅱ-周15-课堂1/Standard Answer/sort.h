#ifndef __SORT_H__
#define __SORT_H__
 
#include <iterator>
 
template<typename T>
void mySwap(T & a, T & b) {
    T t = a;
    a = b;
    b = t;
}
 
template<typename Iterator>
void mySort(Iterator begin, Iterator end) {
    Iterator i, j;
    for (i = begin; i != end; ++i) {
        j = i;
        for (++j; j != end; ++j)
            if (*j < *i)
                mySwap(*j, *i);
    }
}
 
template<typename Iterator, typename Comp>
void mySort(Iterator begin, Iterator end, Comp cmp) {
    Iterator i, j;
    for (i = begin; i != end; ++i) {
        j = i;
        for (++j; j != end; ++j)
            if (cmp(*j, *i))
                mySwap(*j, *i);
    }
}
 
#endif
