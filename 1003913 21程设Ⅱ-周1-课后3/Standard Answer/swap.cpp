#include "swap.h"

void use_value(int a, int b){
    int t = a;
    a = b;
    b = t;
}

void use_pointer(int *a, int* b){
    int t = *a;
    *a = *b;
    *b = t;
}

void use_reference(int& a, int& b){
    int t = a;
    a = b;
    b = t;
}

