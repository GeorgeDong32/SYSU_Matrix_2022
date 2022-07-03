#ifndef __SAFEHOUSE__
#define __SAFEHOUSE__

#define MAX_RESOURCE_TYPES 16

#include <iostream>
#include <string>

using namespace std;


struct Resource {
	string name;
	int count;
	
	Resource(): name(""), count(0) {}
	Resource(const string& str, const int& c): name(str), count(c) {}
};


class Safehouse {
	
private:
	Resource* _owns;
	int _count_own_types;
	
public:
	
	Safehouse(): _owns(new Resource[MAX_RESOURCE_TYPES]), _count_own_types(0) {}
	~Safehouse() {if(_owns) delete[] _owns;}
	
	// Below are some supporting functions.
	
	// Copy constuctor for class Safehouse. 
	Safehouse(const Safehouse& another): _owns(new Resource[MAX_RESOURCE_TYPES]), _count_own_types(another._count_own_types) {
		for(int i=0; i<_count_own_types; ++i) {
			_owns[i].name = another._owns[i].name;
			_owns[i].count = another._owns[i].count;
		}
	}
	
	// Return how many different types of Resource does this Safehouse contain.
	int GetCountOwnTypes() const {
		return _count_own_types;
	}
	
	// Get the Resource name on designated index.
	string GetOwnsName(const int& index) const {
		if(index >= _count_own_types || index < 0) {
			return "None";
		}
		else {
			return _owns[index].name;
		}
	}
	
	// Get the Resource count on designated index.
	int GetOwnsCount(const int& index) const {
		if(index >= _count_own_types || index < 0) {
			return 0;
		}
		else {
			return _owns[index].count;
		}
	}
	
	// Find the first index of designated Resource type, return -1 if the designated Resource does not exist in Safehouse yet. 
	int IndexOfResource(const string& resource_name) const {
		for(int i=0; i<_count_own_types; ++i) {
			if(_owns[i].name == resource_name) {
				return i;
			}
		}
		return -1;
	}
	
	// Find the count of designated Resource type, return 0 if the designated Resource does not exist in Safehouse yet.
	int CountOfResource(const string& resource_name) const {
		for(int i=0; i<_count_own_types; ++i) {
			if(_owns[i].name == resource_name) {
				return _owns[i].count;
			}
		}
		return 0;
	}
	
	// Your Implementation.
	Safehouse& operator = (const Safehouse& another);
	Safehouse operator + (const Resource& new_resource);
	Safehouse operator + (const Safehouse& another);
	Safehouse& operator += (const Resource& new_resource);
	Safehouse& operator += (const Safehouse& another);
	const Resource& operator [] (const int& index) const;
	bool operator >= (const Safehouse& target);
	friend ostream& operator << (ostream& os, const Safehouse& house);
	
};

#endif 

