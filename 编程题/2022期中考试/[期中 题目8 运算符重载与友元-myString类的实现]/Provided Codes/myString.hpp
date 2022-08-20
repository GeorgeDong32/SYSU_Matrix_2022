#ifndef MIDSTR_MYSTRING_H
#define MIDSTR_MYSTRING_H
#include <iostream>
#include <cstring>
using namespace std;

class myString
{
    private:
        char *pstr;
    public:
        myString(){pstr = nullptr;}
        explicit myString(char *s)
        {
            pstr = new char[strlen(s)+1];
            strcpy(pstr, s);
        }
        ~myString()
        {
            delete[] pstr;
        }
        myString(myString &);
        myString& operator=(myString const &s1);
        friend myString &operator+=(myString &, myString &);
        friend ostream &operator<<(ostream &, myString &);
};

#endif //MIDSTR_MYSTRING_H
