# 2021程设Ⅱ-周14-课后3

# Description
Design a class named ```Person``` and its two derived classes named``` Student``` and ```Employee```. Make ```Faculty``` and ```Staff``` derived classes of ```Employee```.

```Person``` class has the following members:
```cpp
  string name;
  string address;
  string phoneNumber;
  string email;
```
```Student``` class has the following members:
```cpp
  enum class_status{frssman,sophomore,junior,senior}; 
  class_status status;
```
```Employee``` class has the following members:
```cpp
  string office;
  int salary;
  MyDate dateHired;
```
```Faculty``` class has the following members:
```cpp
  string officeHours;
  int rank;
```
```Staff``` class has the following members:
```cpp
  string title;
```
```MyDate``` class contains the following members:
```cpp
  int year;
  int month;
  int day;
```

Override the ```toString``` function in each class to display the class name.
For example, in ```Employee``` class:
```cpp
string toString() const
{
  return "Employee";
}
```

Make sure that the following code:
```cpp
  void f(const Person &p)
  {
    cout << p.toString() << endl;
  }

  Person person;
  Student student;
  Employee employee;
  Faculty faculty;
  Staff staff;
  f(person);
  f(student);
  f(employee);
  f(faculty);
  f(staff);
```
outputs:
```
  Person
  Student
  Employee
  Faculty
  Staff
```