# 21程设Ⅱ-周14-课堂1

# C++:Instance of

## Description

在Java语言里边，所有的对象都会继承Object类，但C++却是没有的

例如以下的一些类：

class Object;

class Animal:public Object;

class Dog:public Animal;

class Cat:public Animal;

class Vehicle:public Object;

class Bus:public Vehicle;

class Car:public Vehicle;

class Person:public Object;

class Student:public Person;

class Teacher:public Person;

---

我们知道对象是可以向上向下转型的，就例如

Animal* animal = new Dog();

因为继承本身就是一种is-a的关系，狗就是动物，因此这样赋值是没问题的。

但是问题来了。倘若别人传递上述代码的animal对象给你，你这个时候却不知道它原本是Dog这个类的（在Java里边是有instance of 可以判断的），于是现在你的任务来了。

请完成以下函数以及类，使得满足instanceof函数可以返回该对象的类型名字。（注意这里的类全部都还没定义，你可以根据自己的思路去完成定义，完成的方法不限，能AC即可）

```cpp
class Object;

class Animal:public Object;

class Dog:public Animal;

class Cat:public Animal;

class Vehicle:public Object;

class Bus:public Vehicle;

class Car:public Vehicle;

class Person:public Object;

class Student:public Animal;

class Teacher:public Animal;

/*

* 一个Object对象
* 返回这个对象实例实际的类型名
* 例如： Object *obj = new Bus();
* 则instanceof(*obj) == "Bus"

*/

string instanceof(Object obj);
```

# Input

N/A

# Output

N/A

# Sample_Input

```
样例测试:

	Object *obj = new Dog();
	cout << instanceof(*obj) << endl;
	Object *obj = new Car();
	cout << instanceof(*obj) << endl;
```

# Sample_Ouput

```
Dog
Car
```

# Hint

无需提交主函数！

