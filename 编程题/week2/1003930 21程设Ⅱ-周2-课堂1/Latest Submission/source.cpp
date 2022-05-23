#include <iostream>
#include <string>
using namespace std;

class Cat
{
private:
	string cname;
	int cage;

public:
	int get_age()const
    {
	return cage;
    }
	string get_name() const
    {
        return cname;
    }
	void set_age(int age)
    {
        cage = age;
    }
	void set_name(const string& name)
    {
        cname = name;
    }
};

