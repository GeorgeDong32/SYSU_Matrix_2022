#include <iostream>
#include <string>

using namespace std;

class MyDate {
	private:
		int year;
		int month;
		int day;
};

class Person {
	private:
		string name;
		string address;
		string phoneNumber;
		string email;
	public:
		virtual string toString() const {
			return "Person";
		}
};

class Student:public Person {
	private:
		enum class_status {frssman,sophomore,junior,senior};
		class_status status;
	public:
		string toString() const {
			return "Student";
		}
};

class Employee:public Person {
	private:
		string office;
		int salary;
		MyDate dateHired;
	public:
		string toString()  const {
			return "Employee";
		}
};

class Faculty:public Employee {
	private:
		string officeHours;
		int rank;
	public:
		string toString() const {
			return "Faculty";
		}
};

class Staff:public Employee {
	private:
		string title;
	public:
		string toString() const {
			return "Staff";
		}
};

class class_status {};

