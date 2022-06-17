# 21程设Ⅱ-周18-课后2

# 线程的向量

## Descrption

`std::thread`是线程类，一个`thread`对象所有一个线程。`thread`对象可以被`move`但不能被`copy`。

这里要求实现一个`push_back`函数，使得第二个参数`t`所有的线程被转移到`vec`的末尾，原变量`t`不再所有该变量。

```cpp
void push_back(std::vector<std::thread>& vec, std::thread& t)
```

## Ref

[join函数](https://en.cppreference.com/w/cpp/thread/thread/join)
[thread类](https://en.cppreference.com/w/cpp/thread/thread)
[std::move](https://en.cppreference.com/w/cpp/utility/move)

