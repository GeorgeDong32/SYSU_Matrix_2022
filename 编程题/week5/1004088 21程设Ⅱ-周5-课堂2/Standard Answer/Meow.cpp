#include "Meow.h"
#include <cstring>

Meow::Meow(int id_, string name_) : id(id_) {
    name = new char[name_.size()+1];
    strcpy(name, name_.c_str());
    count++;
}

Meow::Meow(const Meow &other) : id(other.id) {
    name = new char[strlen(other.name)+1];
    strcpy(name, other.name);
    count++;
}

Meow::~Meow() {
    delete []name;
    name = NULL;
    count--;
}

int Meow::getCount() {
    return count;
}

int Meow::count = 0;