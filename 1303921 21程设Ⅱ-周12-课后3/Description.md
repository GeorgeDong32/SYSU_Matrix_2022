# 21程设Ⅱ-周12-课后3

# Description

下面是不完整的继承类定义：

```cpp
class A {
public:
	virtual void Prin() {
		cout<<"Prin come form class A"<<endl;
	}
};

class B {
	char *buf;
public:
	void Prin() {
		cout<<"Prin come from class B"<<endl;
	}
};
```

试完成其定义（你可以根据需要增加必要的构造函数、析构函数），使得主函数```main```运行后能得到预期结果。

```cpp
void fun(A *a) {
	delete a;
}

int main() {
	A *a = new B(10);
	a->Prin();
	fun(a);
	B *b =  new B(20);
	fun(b);
	return 0;
}
```

# Sample Output

```
Prin come from class B
B::~B()called
A::~A()called
B::~B()called
A::~A()called
```

# Hint

- Virtual destructor!（在析构函数前加一个virtual）
- Only need to submit class `A` and `B`.
- Please check your spelling carefully.

