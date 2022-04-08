#include <iostream>
#include <cstdlib>
#include "Exchange.h"
using namespace std;

int main()
{

    Exchange swap;
   int i = 20;
   int j = 30;

   cout << i << " " << j << endl;
   
   swap(i, j);
   
   cout << i << " " << j << endl;
   



    return 0;
}
