# 21程设Ⅱ-周18-课后1

# Problem Statement

Please **implement a queue class named "Squeue" with the help of stack in STL**. This task is not difficult!

请**使用STL中的栈stack来实现一个队列类"Squeue"**。这道题很简单！


# Guiding

Now we need to sitmulate the operations in QUEUE by STACK. In the implement of Squeue, you can **draw support from STACK in STL, but DO NOT use QUEUE in STL!** (1cm transport is not recommended).

现在我们需要用栈来模拟队列的各种操作，你可以**借助STL中的栈来进行实现，但不要使用STL中的队列！** （原地TP不可取）

```
// Queue built on Stacks, so we call it Squeue.
class Squeue {
	private:
		stack<int> s1; // The stack used for data storage.
		stack<int> s2; // The stack used for supporting operation "Pop" and "Front".
		
	public:
		int Size() const; // Get the size of Squeue.
		bool Empty() const; // Judge whether Squeue is empty.
		void Push(const int &ele); // Push operation of Squeue.
		void Pop(); // Pop operation of Squeue.
		int Front(); // Get the first element of Squeue, return 0 if empty.
		int Back() const; // Get the last element of Squeue, return 0 if empty.
};
```

### Hint

In Squeue.cpp, you may **only include 1 dependent file "SQueue.h"**. Because other necessary dependent files (iostream, stack) and namespace std are all existed in "SQueue.h".

在Squeue.cpp中，你应该只需要**唯一的依赖头文件"SQueue.h"**。因为其它的必需依赖文件iostream、stack以及命名空间std都已经被包含在"SQueue.h"中。


### Sample Input 1
```
10 Push 1 Push 2 Push 3 Pop Front Back Pop Push 4 Front Back

```

### Sample Output 1
```
No.1 Command: Squeue after Push(1): Head->1->Tail
No.2 Command: Squeue after Push(2): Head->1->2->Tail
No.3 Command: Squeue after Push(3): Head->1->2->3->Tail
No.4 Command: Squeue after Pop(): Head->2->3->Tail
No.5 Command: Front element of Squeue: 2
No.6 Command: Back element of Squeue: 3
No.7 Command: Squeue after Pop(): Head->3->Tail
No.8 Command: Squeue after Push(4): Head->3->4->Tail
No.9 Command: Front element of Squeue: 3
No.10 Command: Back element of Squeue: 4

```

### Sample Input 2
```
17 Pop Pop Pop Front Back Push 1 Size Front Back Pop Front Back Size Push 2 Front Back Size

```

### Sample Output 2
```
No.1 Command: Squeue after Pop(): Head->Tail
No.2 Command: Squeue after Pop(): Head->Tail
No.3 Command: Squeue after Pop(): Head->Tail
No.4 Command: Front element of Squeue: 0
No.5 Command: Back element of Squeue: 0
No.6 Command: Squeue after Push(1): Head->1->Tail
No.7 Command: Size of Squeue: 1
No.8 Command: Front element of Squeue: 1
No.9 Command: Back element of Squeue: 1
No.10 Command: Squeue after Pop(): Head->Tail
No.11 Command: Front element of Squeue: 0
No.12 Command: Back element of Squeue: 0
No.13 Command: Size of Squeue: 0
No.14 Command: Squeue after Push(2): Head->2->Tail
No.15 Command: Front element of Squeue: 2
No.16 Command: Back element of Squeue: 2
No.17 Command: Size of Squeue: 1

```