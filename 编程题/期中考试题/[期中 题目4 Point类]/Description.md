# [期中题目，重新开放，不记分 题目4 Point类]

## 问题描述

我们要创建`TwoDPoint`类来对二维空间中的点进行建模。（默认值`(0,0)`, `int`）。
它具有获取其坐标的函数`getX()`，`getY()`以及一个计算它与另一个 TwoDPoint 之间中点的成员函数`middlePoint`（返回类型`TwoDPoint `）。

基于`TwoDPoint`，创建一个名为`ThreeDPoint`的类来对三维空间中的一个点进行建模。`x`, `y`,`z`表示 x、y 和 z 坐标（默认值`(0,0,0)`, `int`）。添加函数`getZ()`和重载成员函数`middlePoint`。

## 样例输入

```
3 4
0 0 0
0 4 3
```

## 样例输出

```
MiddlePoint between (0,0) and (3,4) is (1.5,2)
MiddlePoint between (0,0,0) and (0,0,0) is (0,0,0)
MiddlePoint between (0,0,0) and (0,4,3) is (0,2,1.5)
```

