#include <iostream>
#include <string>
#include "source.h"
using namespace std;

void f1(Person p)
{
  cout << p.toString() << endl;
}

void f2(Employee e)
{
  cout << e.toString() << endl;
}

void f(const Person &p)
{
  cout << p.toString() << endl;
}

int main()
{
  Person person;
  Student student;
  Employee employee;
  Faculty faculty;
  Staff staff;

  f1(person);
  f1(student);
  f1(employee);
  f1(faculty);
  f1(staff);
  
  f2(employee);
  f2(faculty);
  f2(staff);
  
  f(person);
  f(student);
  f(employee);
  f(faculty);
  f(staff);
  
  return 0;
}
