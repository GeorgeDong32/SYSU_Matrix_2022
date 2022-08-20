#include <string>
#include "StudentList.h"

StudentList::StudentList(unsigned int _capacity){
	size=0;
	capacity = _capacity;
	student = new Student[capacity];
}
void StudentList::addStudent(string &name, int age){
	if(size<capacity){
		Student s(name,age);
		student[size++] = s;
	}
}
StudentList::~StudentList(){
	delete []student;
	size=0;
}

