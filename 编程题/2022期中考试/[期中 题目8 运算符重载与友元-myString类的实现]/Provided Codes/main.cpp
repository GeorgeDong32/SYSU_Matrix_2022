#include <iostream>
#include "myString.hpp"
using namespace std;

int main()
{
    char s1[20], s2[20];
    cin>>s1;
    cin>>s2;

    myString string1(s1);
    cout<<string1<<endl;

    myString string2 = string1;
    cout<<string2<<endl;

    myString string3(string1);
    cout << string3 << endl;

    myString lastString(s2);
    lastString += string1 += string2 += string3;
    cout << lastString << endl;

    return 0;
}
