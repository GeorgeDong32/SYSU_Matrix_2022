#include <iostream>
#include <cstdlib>
#include "DERIVED.h"

using namespace std;

int main() {
    
    DERIVED obj(17, 18, 1, 2, -5);
    obj.inc1();
    obj.display();


    return 0;
}
