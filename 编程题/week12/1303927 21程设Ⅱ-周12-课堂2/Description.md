# 21程设Ⅱ-周12-课堂2

# Description

写作和赛车是韩少的两大最爱，但在生活的不同时期还是要有所取舍。

韩少的原则是：

周末：写作优先； 周内：赛车优先；
而如果可以选择今天是哪天，他会优先选择是周末。

这些可以体现在`Weekend`，`Workday`，```Choseday```的对象构造中，请思考它们的继承关系使得输出符合标准答案。

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

# Sample Output

```
Racing constructor
Writing constructor
Workday constructor
~Workday
~Writing
~Racing

Writing constructor
Racing constructor
Weekend constructor
~Weekend
~Racing
~Writing

Writing constructor
Racing constructor
Weekend constructor
Workday constructor
Choseday constructor
~Choseday
~Workday
~Weekend
~Racing
~Writing
```

# Hint

提交`main`函数之外的所有类。

