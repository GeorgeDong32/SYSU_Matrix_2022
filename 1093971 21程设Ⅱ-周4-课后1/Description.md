# 21程设Ⅱ-周4-课后1

# Create Array

使用C++中的关键字`new`和`delete`创建和回收数组。

实现以下四个函数：

```c++
int* Array(int len);							
int** Reshape(int* vec, int row, int col);	
void FreeArray(int* vec);
void FreeMatrix(int** mat, int row);
```

其中，`Array`函数创建一个长度为`len`的一维数组；`Reshape`函数将上述数组变为一个`row`$\times$`col`的矩阵，题目数据保证`row`$\times$`col`$=$`len`。

已禁用`stdlib.h`，请勿使用`malloc`及`free`。

## Input

```
6
1 2 3 4 5 6
2 3
```

## Output

```
1 2 3
4 5 6

```

将长度为6的向量reshape为$2 \times 3$的矩阵。