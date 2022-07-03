#include <iostream>
#include <cstdlib>
#include "ExtTime.h"            //程序4_4
#include "Time.h"

using namespace std;

int main()
{
    ExtTime time1(5, 30, 0, CDT);
    ExtTime time2;
    int     count;

    cout << "time1: ";
    time1.Write();
    cout << endl;
    cout << "time2: ";
    time2.Write();
    cout << endl;

    time2.Set(23, 59, 55, PST);
    cout << "New time2: ";
    time2.Write();
    cout << endl;
    cout << "Incrementing time2:" << endl;
    for (count = 1; count <= 10; count++)
    {
        time2.Write();
        cout << endl;
        time2.Increment();
    }
	
    Time time3(1,2,3);
    cout << "time3: ";
    time3.Write();
    cout << endl << endl;
    time1.Time::Set(3,4,5); 
    time1.Time::Write();
    
    cout << endl;

    return 0;
}
