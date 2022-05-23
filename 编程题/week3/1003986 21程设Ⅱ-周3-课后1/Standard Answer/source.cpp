#include<iostream>
#include<string>
using namespace std;

class Cat {
public:
	string cat_name;
	int cat_age;
};

class CatFamily
{
	Cat cats[100];
	int count;
	int _index(const string & name) const {
		for (int i = 0; i < count; ++ i)
			if (cats[i].cat_name == name) return i;
		return -1;
	}
public:
	CatFamily() {
		count = 0;
	}
	
	int number_of_cats() const {
		return count;
	}
	
	string operator[] (int num) const {
		return cats[num].cat_name;
	}
	
	bool add_a_cat(const string & name, int age) {
		int i = _index(name);
		if (i != -1) 
			return false;
		Cat cat;
		cat.cat_name = name;
		cat.cat_age = age;
		cats[count] = cat;
		++ count;
		return true;
	}
	
	bool remove_a_cat(const string & name) {
		int i = _index(name);
		if (i == -1) 
			return false;
		cats[i] = cats[count - 1];
		-- count;
		return true;
	}
	
	bool has_cat(const string & name) const {
		int i = _index(name);
		return (i != -1);
	}
	
	Cat get_cat(const string & name) const {
		int i = _index(name);
		return cats[i];
	}
	
};