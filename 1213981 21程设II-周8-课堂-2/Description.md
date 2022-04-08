# 21程设II-周8-课堂-2

# Description

Please implement class `Cat`, class `CatFamily`, and appropriate operator function operator `+`

Read the main program to determine the functions you need to implement for class **`Cat` and class `CatFamily`.

The test input includes an integer `n` and n names.

请实现类`Cat`，类`CatFamily`,和合适的操作符函数operator `+`.

请阅读主程序以确定需要为类`Cat`和类`CatFamily`实现的函数。

测试输入包括一个整数`n`和n个名字。

# Sample Input

```
5
Thomas Ruth Sarah Sharon Phillips
```

# Sample Output

```
Thomas Ruth 
Thomas Sarah Sharon Phillips 
Sarah Sharon Phillips Ruth 
Sarah Sharon Phillips Sarah Sharon Phillips
```

# Hint

你需要实现的应该是下面的类，请直接在类声明里完成成员函数的实现。

```
#ifndef CAT_H
#define CAT_H
class CatFamily;

class Cat
{
public:
	string name;
	Cat();
	Cat(string name);
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
};

class CatFamily {
public:
	Cat cats[10];
	int size;
	CatFamily();
	CatFamily(Cat cat);
	void add_family(Cat cat);
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
	void print();
};

CatFamily operator + (CatFamily f1, CatFamily f2);
#endif
```

