#include <iostream>
#include "myString.hpp"
using namespace std;

myString::myString(myString &s)
{
    if(s.pstr)
    {
        pstr = new char[strlen(s.pstr)+1];
        strcpy(pstr, s.pstr);
    }
    else
    {
        pstr = nullptr;
    }
}

myString &operator+=(myString &s1, myString &s2)
{
    myString temp;
    temp.pstr = new char[strlen(s1.pstr) + strlen(s2.pstr) + 1];
    strcpy(temp.pstr, s1.pstr);
    strcat(temp.pstr, s2.pstr);
    s1 = temp;

    return s1;
}

myString &myString::operator=(myString const &s1)
{
    if(&s1 != this)
    {
        delete[] pstr;
        pstr = new char[strlen(s1.pstr) + 1];
        strcpy(pstr, s1.pstr);
    }
    return *this;
}

ostream &operator<<(ostream &os, myString &s1)
{
    os<<s1.pstr;
    return os;
}


