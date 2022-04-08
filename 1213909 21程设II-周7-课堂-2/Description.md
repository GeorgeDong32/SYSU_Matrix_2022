# 21程设II-周7-课堂-2

# Description

**实现复数的操作符重载，你需要做的是，将**`complex.h`文件的函数声明，全部在`complex.cpp`中实现。

**类的声明如下：**

```
class COMPLEX
{
public:
COMPLEX(double r = 0, double i = 0); // 构造函数
COMPLEX(const COMPLEX &other); // 拷贝构造函数
void print(); // 打印复数
 // 重载加法运算符（二元）
COMPLEX operator+(const COMPLEX &other);
// 重载减法运算符（二元）
COMPLEX operator-(const COMPLEX &other);
COMPLEX operator-(); // 重载求负运算符（一元）
 // 重载赋值运算符（二元）
COMPLEX operator=(const COMPLEX &other);
    COMPLEX & operator++();     //重载前置++
    COMPLEX operator++(int);     //重载后置++
    COMPLEX & operator--();        //重载前置--
    COMPLEX operator--(int);        //重载后置--
protected:
double real, image; // 复数的实部与虚部
};
```

# Sample Output

```
1+2i
-5-6i
-5-6i
-4-5i
-4-5i
-5-6i
-6-7i
-6-7i
-5-6i
-5-6i
```

## Hint

++操作要对实数和虚数部分都+1
后置++的操作可以通过先复制一个COMPLEX对象，然后再对*this操作，最后返回开头复制的对象
前置++操作则只要对\*this操作后返回\*this即可。

