#include <iostream>
#include <cstring>
#include "Meow.h"
using namespace std;

int Meow::count=0;

Meow::Meow(int id_, string name_):id(id_)
{
    name = new char[1000];
    strcpy(name,name_.c_str());
    count++;
}

Meow::Meow(const Meow &other):id(other.id)
{
    name = new char[1000];
    strcpy(name,other.name);
    count++;
}

Meow::~Meow()
{
    delete []name;
    count--;
}

int Meow::getCount(){
    return count;
}