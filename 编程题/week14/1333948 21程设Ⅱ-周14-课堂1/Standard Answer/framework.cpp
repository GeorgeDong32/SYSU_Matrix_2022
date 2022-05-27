#include <iostream>
#include <string>
#include "source.h"
using namespace std;

int main()
{
    Object *obj = new Dog();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Animal();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Car();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Bus();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Cat();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Vehicle();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Teacher();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Person();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Student();
    cout << instanceof (*obj) << endl;
    delete obj;

    obj = new Object();
    cout << instanceof (*obj) << endl;
    delete obj;

    return 0;
}
