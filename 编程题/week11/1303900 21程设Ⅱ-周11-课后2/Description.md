# 21程设Ⅱ-周11-课后2

# Description

写作和赛车是韩少的两大最爱，但在生活的不同时期还是要有所取舍。

韩少的原则是：

周末：写作优先； 周内：赛车优先；

这些可以提现在`Weekend`和`Workday`的对象构造中，类继承关系如下：

```
Racing       Writing
   \           /
  Weekend/Workday
```

其中`Racing`和`Writing`如下：

```cpp
class Writing {
public:
	 Writing() {
		 cout<<"Writing constructor"<<endl;
	 }
	 ~Writing(){
		 cout<<"~Writing"<<endl;
	 }
};

class Racing {
public:
	 Racing(){
		 cout<<"Racing constructor"<<endl;
	}
	~Racing(){
		cout<<"~Racing"<<endl;
	}
};
```

主函数如下：

```cpp
int main() {
		 Weekend end;
		 Workday day;
}
```

# Sample Output

```
Writing constructor
Racing constructor
Weekend constructor
Racing constructor
Writing constructor
Workday constructor
~Workday
~Writing
~Racing
~Weekend
~Racing
~Writing
```

# Hint

提交`main`函数之外的所有类。


