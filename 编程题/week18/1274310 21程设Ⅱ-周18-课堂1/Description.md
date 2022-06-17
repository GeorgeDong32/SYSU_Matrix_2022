# 21程设Ⅱ-周18-课堂1

# Problem Statement

**Stack** is an important structure for some applications in **matching**, for instance, a very common problem called **brackets matching**, which aims to judge whether a sequence of brackets is legal. It is an easy task. For example, **when setting priority property aside**, brackets sequences like "()[]{}", "[{}{}]", "[()[[[[]]]]()]", "{{}}([]){{}}" are obviously considered to be **legal**. However, other brackets sequences such as "((]]", "[{]}", "{{{{", ")))[]", "(({[]])" are identified to be **illegal**.

Now given a sequence of brackets (string type), please judge whether it is legal with the help of stack structure. For convenience, there is no need for you to implement Stack again, **please use the stack in STL instead!**

**栈**这种数据结构在算法中的一个重要应用就是用于**匹配**，比如最经典的**括号匹配问题**，用于判断一串括号序列是否是合法的。理解一串括号序列是否合法很简单，在**不考虑括号优先级**的情况下，形如"()[]{}"、"[{}{}]"、"[()[[[[]]]]()]"、"{{}}([]){{}}"这样的括号序列都可以视为是**合法**的，而形如"((]]"、"[{]}"、"{{{{"、")))[]"、"(({[]])"这样的括号序列都可以视为是**不合法**的。

现在给定一串括号序列（字符串类型），不需要你手动重新实现完整的Stack，请**使用STL中的stack来完成这项工作！**


# Guiding

No need for a hand-implemented stack, just build up a function called **Matched(const string&, const int&)** in "BracketsMatch.h".

不需要手动实现栈，请在"BracketsMatch.h"中实现函数**Matched(const string&, const int&)**。

```
bool Matched(const string & brackets, const int & length) {
  // :param brackets: the sequence of brackets to be judged.
  // :param length: the length of this sequence.
  // :return: true if the sequence is legal, else false.
}
```


### Sample Input 1
```
()[]{}

```

### Sample Output 1
```
Origin brackets are :
>>> ()[]{}
Your judge on whether those brackets are matched is :
>>> true

```

### Sample Input 2
```
[{[}]({)}]

```

### Sample Output 2
```
Origin brackets are :
>>> [{[}]({)}]
Your judge on whether those brackets are matched is :
>>> false

```

## Hint

To use the stack in STL, you should include these dependent files:
```
#include <iostream>
#include <stack>
```

To create a stack, just simply do like this:
```
std::stack<typename> stack_name;
```

In this task, you may possibly use those methods that has been implemented by STL:
```
bool empty(); // to judge whether the stack is empty.
void push(typename); // push an element into the stack.
void pop(); // pop an element from the stack, will make error if you try to pop from an empty stack.
typename top(); // return the element on the top of the stack.
```
