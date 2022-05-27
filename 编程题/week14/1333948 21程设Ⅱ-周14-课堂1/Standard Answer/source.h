#include <iostream>
using namespace std;

class Object{
protected:
    const string type;
public:
    Object(string typ = "Object") : type(typ){}
    virtual string getType() const;
};

class Animal : public Object{
public:
    Animal(string typ = "Animal") : Object(typ){}
    virtual string getType() const;
};

class Dog : public Animal{
public:
    Dog(string typ = "Dog") : Animal(typ){}
    virtual string getType() const;
};

class Cat : public Animal{
public:
    Cat(string typ = "Cat") : Animal(typ){}
    virtual string getType() const;
};

class Vehicle : public Object{
public:
    Vehicle(string typ = "Vehicle") : Object(typ){}
    virtual string getType() const;
};

class Bus : public Vehicle{
public:
    Bus(string typ = "Bus") : Vehicle(typ){}
    virtual string getType() const;
};

class Car : public Vehicle{
public:
    Car(string typ = "Car") : Vehicle(typ){}
    virtual string getType() const;
};

class Person : public Object{
public:
    Person(string typ = "Person") : Object(typ){}
    virtual string getType() const;
};

class Student : public Person{
public:
    Student(string typ = "Student") : Person(typ){}
    virtual string getType() const;
};

class Teacher : public Person{
public:
    Teacher(string typ = "Teacher") : Person(typ){}
    virtual string getType() const;
};

string Object::getType() const { return type; }
string Animal::getType() const { return type; }
string Dog::getType() const { return type; }
string Cat::getType() const { return type; }
string Vehicle::getType() const { return type; }
string Bus::getType() const { return type; }
string Car::getType() const { return type; }
string Person::getType() const { return type; }
string Student::getType() const { return type; }
string Teacher::getType() const { return type; }

string instanceof(Object obj){
    return obj.getType();
}
