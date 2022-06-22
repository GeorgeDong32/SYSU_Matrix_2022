#ifndef __SOURCE_H__
#define __SOURCE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
using namespace std;
class Cat
{
    int data;
public:
    Cat()
    {
        data = 0;
        cout << "Default Constructor of Cat is Running" << endl;
    }
    Cat(int i)
    {
        data = i;
        cout << "Constructor of Cat is Running " << i << endl;
    }
    ~Cat()
    {
        cout << "Destructor of Cat is Running " << data << endl;
        data = 0;
    }
};

class Tiger : public Cat
{
    int data;
public:
    Tiger()
    {
        Cat();
        data = 0;
        cout << "Default Constructor of Tiger is Running" << endl;
    }
    Tiger(int t) : Cat(t), data(t) {
        cout << "Constructor of Tiger is Running " << t << endl;
    }
    ~Tiger()
    {
        cout << "Destructor of Tiger is Running " << data << endl;
        data = 0;
        //Cat::~Cat();
    }
};

#endif