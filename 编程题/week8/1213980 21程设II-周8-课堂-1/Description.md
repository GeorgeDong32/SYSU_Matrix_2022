# 21程设II-周8-课堂-1

重载操作符（），使得能够像调用函数一样使用对象（函数对象）

```c++
class Exchange
{
public:
void operator()(int&, int&);
};
```

输出格式为：

```
20 30
30 20
```

