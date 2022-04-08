#ifndef DOUBLE_H_
#define DOUBLE_H_

#include<iostream>
using namespace std;


class Double
{
private:
     double data;
public:
     Double() ;
     Double(double data);
     double getDouble() const;
     void setDouble(double data);
     void add(const Double &other);
     void sub(const Double &other);
     void mul(const Double &other);
     bool div(const Double &other);
};

#endif
