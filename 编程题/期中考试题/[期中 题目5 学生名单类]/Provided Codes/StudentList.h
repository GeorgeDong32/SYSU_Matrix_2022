#ifndef STUDENTLIST_H
#define STUDENTLIST_H
#include <string>
#include <iostream>

using namespace std;
class Student{
public:
	string name;
	int age;
	Student():name(""), age(0){}
	Student(string &name, int age): name(name),age(age){}
	Student(const Student& other){
		name=other.name;
		age=other.age;
	}
};

class StudentList {
    unsigned int size;         //学生的数量
    unsigned int capacity;     // 名单的最大容量
    Student *student;         // 学生列表，一个Student数组

public:
    StudentList(unsigned int _capacity);
    void addStudent(string &name, int age);
    void printStudent(){
    	cout<<"print StudentList:"<<endl;
    	for(int i=0;i<size;i++){
		cout<<"student"<<i<<": "<<student[i].name<<" "<<student[i].age<<endl;
		}
	}
    ~StudentList();
};

#endif //STUDENTLIST_H

