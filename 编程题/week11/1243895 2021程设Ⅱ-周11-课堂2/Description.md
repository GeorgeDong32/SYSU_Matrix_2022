# 2021程设Ⅱ-周11-课堂2

# Problem Description

Matrix can be stored in a one-dimensional vector in a row-first way, inheriting from the Vector class. According to Vector.h and Matrix.h, complete the implementation of Vector class and Matrix class.
Function description: Vector::getModule() gets the modulus length of the vector, Matrix::Symmetric() judges whether the matrix is a symmetric matrix.
矩阵可以以行优先的方式存储在一维向量中, 继承于Vector类。根据Vector.h和Matrix.h完成Vector类和Matrix类的实现。
函数说明：Vector::getModule()求得向量的模长， Matrix::Symmetric()判断矩阵是不是对称矩阵。

## HINT

向量的模长就是向量的长度（或称模）。

## 输入

向量长度n
向量n个元素的值

矩阵行row 矩阵列col
矩阵元素

## 输出

向量模长
矩阵元素个数
矩阵是否为对称矩阵

## [Sample Input1]

3
0 0 0

3 3
1 0 0
0 1 0
0 0 1

## [Sample Output1]

Vector Module: 0
Total Elements in Matrix: 9
Symmetric matrix: 1

## [Sample Input2]

3
3 4 0

3 3
3 0 1
0 4 0
1 0 5

## [Sample Output2]

Vector Module: 5
Total Elements in Matrix: 9
Symmetric matrix: 1


