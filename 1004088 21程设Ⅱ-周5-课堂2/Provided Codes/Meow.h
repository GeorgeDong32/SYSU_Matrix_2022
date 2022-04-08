#include <iostream>
using namespace std;

class Meow {
public:
    //constructor
    Meow(int id_, string name_);

    //copy constructor
    Meow(const Meow &other);

    //desctructor
    ~Meow();

    //return the count of cats
    static int getCount();

    //print some infomation
    void print() const {
        cout << "Cat " << id << ". My name is " << name << "." << endl;
    }

private:
    const int id; 
    char *name; 
    static int count; // the count of cats
};