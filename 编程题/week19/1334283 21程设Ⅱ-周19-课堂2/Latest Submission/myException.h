#ifndef MYEXCEPTION
#define MYEXCEPTION

#include <string>
#include <exception>
class MyException{                             
    public:
        MyException(const std::string msg = "");
        std::string what();
    private:
        std::string message;
};

#endif
