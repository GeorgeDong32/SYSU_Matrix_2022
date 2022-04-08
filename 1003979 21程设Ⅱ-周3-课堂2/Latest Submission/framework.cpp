#include "Date.h"
#include <iostream>
using namespace std;
int main()
{
     DATE date1;
     int tmp;

     date1.Print();
     date1.Increment();
     date1.Print();

     int year, month, day;

     cin >> year >> month >> day;

     DATE date2( year, month, day );
     date2.Print();
     date2.Decrement();
     date2.Print();

     tmp = date1.getYear();
     tmp++;

     DATE date3(tmp, 12, 20);
     date3.Print();
     return 0;
}

