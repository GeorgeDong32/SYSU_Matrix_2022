# 21程设Ⅱ-周12-课后2

# Description

设计一个基类`base`，包含姓名（`name`）和年龄（`age`）私有数据成员以及相关的成员函数（getter、setter）；

由`base`派生出领导类`leader`，包含职务（`job`）和部门（`department`）私有数据成员以及相关的成员函数（getter、setter）；

由`base`派生出工程师类`engineer`，包含职称（`profile`）和专业（`major`）私有成员以及相关的成员函数（getter、setter）；

由`leader`和`engineer`类派生出主任工程类`chairman`，主函数将采用一些数据测试这个类。

以下是基类的定义：

```cpp
class base
{
	char *name;
	int age;
	public:
	base(){}
	void setname(char arr[]);
	void setage(int age);
	char* getname();
	int getage();
};
```

提交时，需要提交类`base`、`leader`、`engineer`、`chairman`的定义与实现；

主函数如下：

```cpp
int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	cin>>n;
	for (int i=0;i<n;i++) {
		char name[20],job[20],dep[20],major[20],prof[20];
		int age;
		cin>>name>>age>>job>>dep>>major>>prof;
		chairman man;
		man.setname(name);
		man.setage(age);
		man.setjob(job);
		man.setdep(dep);
		man.setmajor(major);
		man.setprof(prof);

		cout<<"name: "<<man.getname()<<" age: "<<man.getage()<<" dep: "<<man.getdep()
		<<" job: "<<man.getjob()<<endl;
		cout<<"prof: "<<man.getprof()<<" major: "<<man.getmajor()<<endl;
	}
	return 0;
}
```

# Hint

本题的继承链形成了什么形状？这会给`chairman`类带来什么问题？要[如何解决](https://zh.wikipedia.org/wiki/虚继承)？


