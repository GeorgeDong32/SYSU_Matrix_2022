#include<iostream>
#include<string>
#include<iomanip>
#include "allocate.h"
using namespace std;


int main(){
    int n;
    cin >> n;
    int* arr = allocate(n);
    for(int i = 0; i < n; i++){
        cout << arr[i] << endl;
    }
    del(arr);
	return 0;
}

