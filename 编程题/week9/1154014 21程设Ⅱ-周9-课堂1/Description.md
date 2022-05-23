# 21程设Ⅱ-周9-课堂1

# Description

简单的类继承练习，有以下类声明：

```cpp
class BASE {
    public: 
        BASE(int p1, int p2);
        int inc1();	
        void display(); 
    
    private:
        int mem1, mem2;
};                              

class DERIVED : public BASE{
    public:	
        DERIVED(int x1, int x2, int x3, int x4, int x5); 			
        int inc1();
        void display() const;
    private:           
        int mem3;
        BASE mem4;
};
```

# Output

```
mem1=18,mem2=18
mem1=1,mem2=2
mem3=-5
```

# Hint



x1,x2应作为obj的基类的初始化参数
x3,x4应作为obj的私有成员mem4的初始化参数
x5应作为obj的私有成员mem3的初始化赋值

在DERIVED的display函数中，应首先调用基类的display()，再调用私有成员mem4的display()，最后输出mem3的值



