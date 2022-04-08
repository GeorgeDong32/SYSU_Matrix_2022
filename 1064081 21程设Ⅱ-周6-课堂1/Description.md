# 21程设Ⅱ-周6-课堂1

# Description

有如下一段程序:

```cpp
void printtotal(int total) {
    printf("Total in Main: %d\n", total);
 
}
 int main() {
    int x, y, total;
    cin >> x >> y >> total;
 
    printtotal(total);
    addxy(x, y, total);
 
    printtotal(total);
  
    subxy(x, y, total);
    printtotal(total);
    return 0;
}
```

请补充函数 `addxy()` 和 `subxy()` 的声明和实现.

`addxy()` 形参中 `total` 使用按值传递,将`total`，`x`和`y`相加得到结果，函数中输出

`Total from inside addxy: (具体数字)`

`subxy()` 形参中 `total` 使用按引用传递,将会修改主函数作用域中的 `total` 值为`|x-y|`,函数中输出

`Total from inside subxy: (具体数字)`

# Sample Input

```
10 5 0
```

# Sample Output

```
Total in Main: 0
Total from inside addxy: 15
Total in Main: 0
Total from inside subxy: 5
Total in Main: 5
```

# Hint

两个函数头应该长这样

```
void addxy(int,int,int);
void subxy(int&a,int&b,int&c);
```

