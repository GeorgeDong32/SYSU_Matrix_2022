#ifndef __SOURCE_H__
#define __SOURCE_H__
#include <iostream>
#include <string>
using namespace std;
class Object {
public:
    virtual string getname()
    {
        string re = "Object";
        return "Object";
    }
};

class Animal :public Object {
public:
    virtual string getname() {
        string re = "Animal";
        return re;
    }
};

class Dog :public Animal {
public:
    virtual string getname() {
        string re = "Dog";
        return re;
    }
};

class Cat :public Animal {
public:
    virtual string getname() {
        string re = "Cat";
        return re;
    }
};

class Vehicle :public Object {
public:
    virtual string getname() {
        string re = "Vechile";
        return re;
    }
};

class Bus :public Vehicle {
public:
    virtual string getname() {
        string re = "Bus";
        return re;
    }
};

class Car :public Vehicle {
public:
    virtual string getname() {
        string re = "Car";
        return re;
    }
};

class Person :public Object {
public:
    virtual string getname() {
        string re = "Person";
        return re;
    }
};

class Student :public Animal {
public:
    virtual string getname() {
        string re = "Student";
        return re;
    }
};

class Teacher :public Animal {
public:
    virtual string getname() {
        string re = "Teacher";
        return re;
    }
};


string instanceof(Object&obj) {
    return (&obj)->getname();
};


#endif