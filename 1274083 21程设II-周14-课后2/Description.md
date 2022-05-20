# 21程设II-周14-课后2

## 题目描述

请在 orderedList.hpp 中定义以下三个类：

1. **抽象**基类 `OrderedList`，表示一个整数链表，有以下方法：
   + 构造函数：无参数，创建一个空的链表；
   + `void insert(int val)` 向链表中插入一个元素，在 `OrderedList` 中该方法应当为纯虚函数；
   + `void printList() const` 依次在屏幕上输出链表中的元素，元素之间用空格分隔，输出完整个链表后换行；
   + 析构函数：释放链表所占用的空间。
2. **具体**类 `AscendOrderedList`，表示一个升序的链表，继承自 `OrderedList`，需要重载 `void insert(int val)` 函数来实现升序。
3. **具体**类 `DescendOrderedList`，表示一个降序的链表，继承自 `OrderedList`，需要重载 `void insert(int val)` 函数来实现降序。

