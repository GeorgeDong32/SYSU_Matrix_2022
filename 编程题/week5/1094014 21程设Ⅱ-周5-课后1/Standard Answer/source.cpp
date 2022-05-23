#include"Cat.h"

void Cat::_copy(const Cat & cat) {
	size = cat.size;
	name = cat.name;
	family = new Cat*[size];
	for (int i = 0; i < size; ++ i)
		family[i] = cat.family[i];
}
Cat::Cat(const Cat & cat) {
	_copy(cat);
}
Cat& Cat::operator=(const Cat & cat) {
	delete [] family;
	_copy(cat);
	return *this;
}