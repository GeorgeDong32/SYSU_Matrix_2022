# 2021程设Ⅱ-周13-课后3

# Description

Support there are 3 races in the world: **Beast, Human and Orc**. All those three races are inherited from **class Creature**. Since an Orc can be regarded as combination of a beast and a human, **class Orc** should be inherited from both **class Beast** and **class Human**.

假设这个世界上有3大种族：**野兽、人类和兽人**。所有这些种族都继承于**生物类**。而且由于兽人可以看作是野兽与人类的结合体，所以**兽人类**应当同时继承于**野兽类**和**人类**。

# Guiding

Please implement the Creature class, the Beast class, the Human class and the Orc class in "Orcs.h".
请在"Orcs.h"中手动实现生物类、野兽类、人类和兽人类。

# Details

These four classes may look like the form below. Notice that you should **add or modify some extra details** on them to complete this task!

上述四个类的结构如下代码片段所示。注意，你需要为其**添加或修改亿点点细节**才能完成此题！

```
class Creature {
	
public:
	Creature(const int& hands, const int& legs) {}
	~Creature() {}
	int GetHands() const {}
	int GetLegs() const {}
	
private:
	int _hands;
	int _legs;
};
```

```
class Beast : public Creature {

public:
	Beast(const int& hands, const int& legs, const string& name) {}
	~Beast() {}
	string GetName() const {}
	
private:
	string _name;
};
```

```
class Human: public Creature {

public:
	Human(const int& hands, const int& legs, const string& name) {}
	~Human() {}
	string GetName() const {}
	
private:
	string _name;
};
```

```
class Orc: public Beast, public Human {
	
public:
	Orc(const int& hands, const int& legs, const string& beast_name, const string& human_name) {}
	~Orc() {}
	string GetBeastName() const {}
	string GetHumanName() const {}
};
```

## Hints

_In order to release your burden, **there are some codes that you may copy from**. All you need is to fill up the blanks masked by '?'.

_为了解放双手，本题中**类内的输出语句可以从下面直接复制**。你只需手动填写"?"代表的内容即可。

```
cout << "A Creature has been created!" << endl;
cout << "It has " << ? << " hand(s)!" << endl;
cout << "It has " << ? << " leg(s)!" << endl;
cout << "Its beast name is " << ? << endl;
cout << "Its human name is " << ? << endl;

cout << "Creature object exiled!" << endl;
cout << "Beast object exiled!" << endl;
cout << "Human object exiled!" << endl;
cout << "Orc object exiled!" << endl;
```

### Sample Input

```
There is no input in this task.
```

### Sample Output

```
*************** Testing class Creature ***************
A Creature has been created!
It has 2 hand(s)!
It has 2 leg(s)!
Calling GetHands(): 2
Calling GetLegs(): 2
Creature object exiled!

*************** Testing class Beast ***************
A Creature has been created!
It has 2 hand(s)!
It has 4 leg(s)!
Its beast name is SpiderKing
Calling GetHands(): 2
Calling GetLegs(): 4
Beast object exiled!
Creature object exiled!

A Creature has been created!
It has 2 hand(s)!
It has 3 leg(s)!
Its beast name is TripleLegCat
Calling GetHands(): 2
Calling GetLegs(): 3
Calling GetName(): TripleLegCat
Beast object exiled!
Creature object exiled!

*************** Testing class Human ***************
A Creature has been created!
It has 2 hand(s)!
It has 2 leg(s)!
Its human name is Talion
Calling GetHands(): 2
Calling GetLegs(): 2
Human object exiled!
Creature object exiled!

A Creature has been created!
It has 2 hand(s)!
It has 2 leg(s)!
Its human name is Altariel
Calling GetHands(): 2
Calling GetLegs(): 2
Calling GetName(): Altariel
Human object exiled!
Creature object exiled!

*************** Testing class Orc ***************
A Creature has been created!
It has 2 hand(s)!
It has 4 leg(s)!
Its beast name is Herkarim
Its human name is Centaur
Calling GetHands(): 2
Calling GetLegs(): 4
Orc object exiled!
Human object exiled!
Beast object exiled!
Creature object exiled!

A Creature has been created!
It has 2 hand(s)!
It has 2 leg(s)!
Its beast name is OgreMagi
Its human name is BlueFat
Calling GetHands(): 2
Calling GetLegs(): 2
Calling GetName(): OgreMagi
Orc object exiled!
Human object exiled!
Beast object exiled!
Creature object exiled!

A Creature has been created!
It has 4 hand(s)!
It has 2 leg(s)!
Its beast name is Miranda
Its human name is NotreDame
Calling GetHands(): 4
Calling GetLegs(): 2
Calling GetName(): NotreDame
Orc object exiled!
Human object exiled!
Beast object exiled!
Creature object exiled!

A Creature has been created!
It has 2 hand(s)!
It has 0 leg(s)!
Its beast name is Cassiopea
Its human name is SnakeWoman
Calling GetHands(): 2
Calling GetLegs(): 0
Calling GetBeastName(): Cassiopea
Calling GetHumanName(): SnakeWoman
Orc object exiled!
Human object exiled!
Beast object exiled!
Creature object exiled!
```

**_(请忽略本题main.cpp中的所有人物设定和命名，我老缝合怪了。)_**

