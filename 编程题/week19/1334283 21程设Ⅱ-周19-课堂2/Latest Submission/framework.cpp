#include <iostream>
#include <string>
#include <vector>
#include "myStoi.h"
#include "myException.h"
using namespace std;
 
int main()
{
    string standard_test[6] = {"123", "  -123", "++34", "", "7878cici9", "-2147483649"};
    std::string IntegerString;
    cin >> IntegerString;

    vector<string>test(standard_test,standard_test+6);
    test.push_back(IntegerString);
    for(size_t i=0;i<test.size();i++)
    {
        int result;
        try {
            result = myStoi(test[i]);
            cout << test[i] << " -> " << result << endl;
        }
        catch(string exception_msg)
        {
            MyException e(exception_msg);
            cout << "Input:" << test[i] << " ; "<< e.what() << endl;
        }
    }
    
    return 0;
}
