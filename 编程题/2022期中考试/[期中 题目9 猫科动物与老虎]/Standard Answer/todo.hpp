#include <iostream>
using namespace std;

class Cat{
    int data;
public:
    Cat(){
        data = 0;
        cout << "Default Constructor of Cat is Working" << endl;
    }
    Cat(int _data){
        data = _data;
        cout << "Constructor of Cat is Working " << data << endl;
    }
    ~Cat(){
        cout << "Destructor of Cat is Working " << data << endl;
    }
};

class Tiger : public Cat{
    int data;
public:
    Tiger(int _data) : Cat(_data){
        data = _data;
        cout << "Constructor of Tiger is Working " << data << endl;
    }
    ~Tiger(){
        cout << "Destructor of Tiger is Working " << data << endl;
    }
};