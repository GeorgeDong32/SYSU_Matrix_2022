#include <iostream>

class A {
public:
    virtual void Prin() {
        std::cout << "Prin come form class A" << std::endl;
    }
    virtual ~A() {
        std::cout << "A::~A()called" << std::endl;
    }
};

class B: public A {
private:
    char *buf;
public:
    B(int){}
    void Prin() {
        std::cout << "Prin come from class B" << std::endl;
    }
    virtual ~B() {
        std::cout << "B::~B()called" << std::endl;
    }
};