#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
using std::cout; using std::endl;

class Cat
{
    int data;
public:
    Cat():data(0) { cout << "Default Constructor of Cat is Running" << endl; }
    Cat(int d): data(d){ cout << "Constructor of Cat is Running " << d << endl; }
    virtual ~Cat() { cout << "Destructor of Cat is Running " << data << endl; }
};

class Tiger : public Cat
{
    int data;
public:
    Tiger(int d) : Cat(d), data(d) { cout << "Constructor of Tiger is Running " << d << endl; }
    ~Tiger() { cout << "Destructor of Tiger is Running " << data << endl; }
};

#endif