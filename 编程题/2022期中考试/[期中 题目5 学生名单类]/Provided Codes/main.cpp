#include <string>
#include <iostream>
#include "StudentList.h"

int main(){
	int capacity;
	cin >> capacity;
	StudentList sl(capacity);
	string name;
	int age;
	int n;
	cin>>n; 
	for(int i=0; i<n; i++){
		cin >> name >> age;
		sl.addStudent(name, age);
	}
	sl.printStudent();
	cout<<endl;
	int k;
	cin>>k;
	for(int i=0; i<k; i++){
		cin >> name >> age;
		sl.addStudent(name, age);
	}
	sl.printStudent();
	return 0;
}
