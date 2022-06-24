#include "MyException.hpp"
#include "mySqrt.hpp"
#include <iostream>

using namespace std;

int main()
{
    double dnum;
    while (cin >> dnum)
    {
        try
        {
            double result = mySqrt(dnum);
            cout << result << endl;
        }
        catch(MyException e)
        {
            cout << e.what() << endl;
        }
    }
}
