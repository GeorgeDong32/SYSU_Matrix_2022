#include "allocate.h"

int* allocate(int n){
    int* arr = new int[n];
    for(int i = 0; i < n; i++){
        arr[i] = i + 1;
    }
    return arr;
}

void del(int*& arr){
    delete [] arr;
  	arr = NULL;
}


