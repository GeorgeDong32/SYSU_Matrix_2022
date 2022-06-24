#ifndef MYEXCEPTION
#define MYEXCEPTION

#include <string>

class MyException {                             //EX9_1.cpp
    public:
        MyException(const std::string msg = "");
        std::string what();
    private:
        std::string message;
};

#endif
