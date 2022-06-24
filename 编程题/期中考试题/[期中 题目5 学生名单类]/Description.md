# [期中题目，重新开放，不记分 题目5 学生名单类]

## 题目描述

题目已给出学生类的定义和学生名单类的声明，要求完善学生名单类的函数，其中的成员`student`需要使用new和delete动态创建和释放。
对于添加学生函数`void addStudent(string &name, int age)`，将学生加入到名单中，若人数已满，则不再添加。

```
class StudentList {
    unsigned int size;         // 学生的数量
    unsigned int capacity;     // 名单的最大容量
    Student *student;         // 学生列表，一个Student数组

public:
    StudentList(unsigned int _capacity);
    void addStudent(string &name, int age);
    void printStudent();
    ~StudentList();
};
```

## 输入样例

```
5
3
xiaoA 10
xiaoB 20
xiaoC 12
3
xiaoD 12
xiaoE 13
xiaoF 14
```

## 输出样例

```
print StudentList:
student0: xiaoA 10
student1: xiaoB 20
student2: xiaoC 12

print StudentList:
student0: xiaoA 10
student1: xiaoB 20
student2: xiaoC 12
student3: xiaoD 12
student4: xiaoE 13
```

