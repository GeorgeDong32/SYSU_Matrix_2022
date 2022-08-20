# [期中题目，重新开放，不记分 题目9 猫科动物与老虎]

猫和老虎，两者同为猫科动物，祖先都是起源于亚洲的祖猫，很久前算是同祖同根。至于猫是老虎的师傅这种说法都是属于传说的，两种动物其实没有什么非常直接的联系的。现在“森林之王”老虎需要认祖归宗，让我们从继承开始吧，
下面是不完整的继承类定义，（注意：Cat在这里是猫科动物，而不是一般意义的猫）

```cpp
class Cat{
    int data;
public:
    Cat();
};

class Tiger : public Cat{
    int data;
public:
    Tiger(int);
};
```

请你完成猫科动物类和老虎类的定义（增加必要的构造函数和析构函数），使得以下的主函数main运行后可以得到其后结果：

```cpp
int main(){
    Cat Jerry;
    Tiger Tom(996);
    Tiger Spike(955);
    return 0;
}
```

运行结果：

```shell
Default Constructor of Cat is Working
Constructor of Cat is Working 996
Constructor of Tiger is Working 996
Constructor of Cat is Working 955
Constructor of Tiger is Working 955
Destructor of Tiger is Working 955
Destructor of Cat is Working 955
Destructor of Tiger is Working 996
Destructor of Cat is Working 996
Destructor of Cat is Working 0
```

