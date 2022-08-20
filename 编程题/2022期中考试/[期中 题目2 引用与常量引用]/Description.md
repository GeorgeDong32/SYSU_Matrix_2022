# [期中题目，重新开放，不记分 题目2 引用与常量引用]

根据main函数中的输出，实现`add` 和 `sub`函数.

```c++
int& add(int a, int b, int &c);
const int& sub(int a, int b, const int&c);
```

- `add`在函数内输出`"a + b = number"`;将c赋值为a+b并作为返回值；
- `sub`在函数内输出`"a - b = number"`；将c作为返回值

# Sample Input

```
2 1
```

# Sample Output

```
a + b = 3
1
1
a - b = 1
0
1
```

