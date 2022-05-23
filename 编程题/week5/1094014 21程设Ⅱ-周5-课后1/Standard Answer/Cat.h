#ifndef CAT_H
#define CAT_H
#include<iostream>
using namespace std;
class Cat
{
	string name;
	Cat ** family;
	int size = 0;
public:
	Cat(string name="") {
		this->name = name;
		family = new Cat*[0];
		size = 0;
	}
	
	~Cat() { delete [] family; }
	
	// 添加一个家庭成员
	void add_family_member(Cat * cat) {
		Cat ** new_family = new Cat*[size+1];
		for (int i = 0; i < size; ++ i)
			new_family[i] = family[i];
		new_family[size] = cat;
		++ size;
		delete [] family;
		family = new_family;
	}
	
	void print_family() {
		for (int i = 0; i < size; ++ i) {
			cout << family[i]->name << endl;
		}
	}

    //To implement;
    void _copy(const Cat & cat);
    Cat(const Cat & cat);
    Cat& operator=(const Cat & cat);
};
#endif