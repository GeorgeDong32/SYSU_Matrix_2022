#ifndef SOURCE_H
#define SOURCE_H
#include <iostream>
using namespace std;
class Cat {
  int data;
 public:
  Cat();
  Cat(int dat);
  ~Cat();
};

class Tiger : public Cat {
  int data;
 public:
  Tiger(int);
  ~Tiger();
};

Cat::Cat() {
 data = 0;
 cout << "Default Constructor of Cat is Running" << endl;
}

Cat::Cat(int dat) {
 this->data = dat;
 cout << "Constructor of Cat is Running " << this->data << endl;
}

Cat::~Cat() {
 cout << "Destructor of Cat is Running " << this->data << endl;
}
Tiger::Tiger(int d): Cat(d), data(d) {
 cout << "Constructor of Tiger is Running " << this->data << endl;
}
Tiger::~Tiger() {
 cout << "Destructor of Tiger is Running " << this->data << endl;
}

#endif