#ifndef HUMAN_H
#define HUMAN_H
 
#include <iostream>
#include <string>
#include "animal.h"
 
class human : public animal {
    private:
        const std::string _name;
    public:
        explicit human(const std::string & name) :
            animal("Human", 2), _name(name) {}
 
        void greeting() const {
            std::cout << "Hello, I\'m " << _name << '.' << std::endl;
        }
};
 
#endif