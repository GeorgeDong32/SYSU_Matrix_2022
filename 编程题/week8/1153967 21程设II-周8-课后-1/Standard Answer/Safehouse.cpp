#include "Safehouse.h"


Safehouse& Safehouse::operator = (const Safehouse& another) {
	
	if(this == &another) {
		return *this;
	}
	
	delete[] _owns;
	_owns = new Resource[MAX_RESOURCE_TYPES];
	_count_own_types = another._count_own_types;
	
	for(int i=0; i<_count_own_types; ++i) {
		_owns[i].name = another._owns[i].name;
		_owns[i].count = another._owns[i].count;
	}
	
	return *this;
}


Safehouse Safehouse::operator + (const Resource& new_resource) {
	
	Safehouse sf(*this);
	
	int resource_index = sf.IndexOfResource(new_resource.name);
	if(resource_index == -1) {
		sf._owns[sf._count_own_types].name = new_resource.name;
		sf._owns[sf._count_own_types].count = new_resource.count;
		++ sf._count_own_types;
	}
	else {
		sf._owns[resource_index].count += new_resource.count;
	}
	
	return sf;
}


Safehouse Safehouse::operator + (const Safehouse& another) {
	
	Safehouse sf(*this);
	for(int i=0; i<another._count_own_types; ++i) {
		sf = sf + another._owns[i];
	}
	
	return sf;
}


Safehouse& Safehouse::operator += (const Resource& new_resource) {
	
	int resource_index = IndexOfResource(new_resource.name);
	if(resource_index == -1) {
		_owns[_count_own_types].name = new_resource.name;
		_owns[_count_own_types].count = new_resource.count;
		++ _count_own_types;
	}
	else {
		_owns[resource_index].count += new_resource.count;
	}
	
	return (*this);
}


Safehouse& Safehouse::operator += (const Safehouse& another) {
	for(int i=0; i<another._count_own_types; ++i) {
		(*this) += another._owns[i];
	}
	
	return (*this);
}


const Resource& Safehouse::operator [] (const int& index) const {
	if(_count_own_types == 0 || index < 0 || index >= _count_own_types) {
		return move(Resource());
	}
	else {
		return _owns[index];
	}
}


bool Safehouse::operator >= (const Safehouse& target) {
	for(int i=0; i<target._count_own_types; ++i) {
		int my_count = CountOfResource(target._owns[i].name);
		if(my_count < target._owns[i].count) {
			return false;
		}
	}
	
	return true;
}


ostream& operator << (ostream& os, const Safehouse& house) {
	for(int i=0; i<house.GetCountOwnTypes(); ++i) {
		os << house.GetOwnsName(i) << ": " << house.GetOwnsCount(i) << endl;
	}
	return os;
}

