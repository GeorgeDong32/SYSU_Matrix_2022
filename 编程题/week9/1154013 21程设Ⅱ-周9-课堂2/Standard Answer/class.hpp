#ifndef CLASS_HPP
#define CLASS_HPP

#include <iostream>

using namespace std;

class Car {
public:
  Car() {
    cout << "Construct a car" << endl;
  }
};

class Wheel {
public:
  Wheel() {
    cout << "Construct a wheel" << endl;
  }
};

class RedCar: public Car {
  Wheel wheel[4];
public:
  RedCar() {
    cout << "Construct a red car" << endl;
  }
};


#endif