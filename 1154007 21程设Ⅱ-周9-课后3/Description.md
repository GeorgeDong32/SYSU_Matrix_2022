# 21程设Ⅱ-周9-课后3

# Description

下面是不完整的继承类定义。

```cpp
class Cat
{
    int data;
public:
    Cat();
};

class Tiger : public Cat
{
    int data;
public:
    Tiger(int);
};
```

试完成其定义（你需要增加必要的构造函数和析构函数），使得主函数```main```运行后能得到期待的结果。

```cpp
int main()
{
    Cat bc;
    Tiger dc(6);
    Tiger dc1(18);

    return 0;
}
```

注意：你只需要提交类定义。

# Sample Output

```
Default Constructor of Cat is Running
Constructor of Cat is Running 6
Constructor of Tiger is Running 6
Constructor of Cat is Running 18
Constructor of Tiger is Running 18
Destructor of Tiger is Running 18
Destructor of Cat is Running 18
Destructor of Tiger is Running 6
Destructor of Cat is Running 6
Destructor of Cat is Running 0
```



