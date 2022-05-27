# 21程设Ⅱ-周15-课堂2

# Description

We talked about the `Stack` class in the classroom. Please implement the `Stack` template with pointer.

```cpp
template <typename ElementType> //genericStack.h
class Stack
{
public:
	Stack();
	~Stack();
	void push(ElementType obj); 
	void pop();
	ElementType getTop() const;
	bool isEmpty() const;

private:
	struct Node // 栈结点类型
	{
		ElementType element; // 结点中存放的元素
		Node *next;			 // 指向下一结点的指针
	};
	Node *top; // 栈顶
}
```

# Sample Output

```
8 7 6 5 4 3 2 1
```

