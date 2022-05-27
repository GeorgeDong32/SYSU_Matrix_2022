# 21程设Ⅱ-周13-课堂1

# 猫科动物和老虎

# Description

下面是不完整的继承类定义，

```c++
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

试完成其定义(你可以根据需要增加必要的构造函数和析构函数)，使得主函数main运行后能得到其后结果：

```c++
int main()
{
    Cat bc;
    Tiger dc(6);
    Tiger dc1(18);

    return 0;
}
```

运行结果：
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

注意：你只需要提交类定义。

# Input



# Output



# Sample_Input

```

```

# Sample_Ouput

```

```

# Hint


