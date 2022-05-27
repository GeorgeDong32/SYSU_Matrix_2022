# 21程设Ⅱ-周15-课后1

# MaxValue template function

# Description

Design a generic function that returns a maximum element from an array. You should test your function with the array of int, double, std::string&nbsp;and char.
Using the following function header

```
template < typename T >;
T maxValue (const T value1, const T value2)
```

特殊情况：

当比较两个char大小时，如果char是字母，将其视为大写字母进行比较。
当两个char大小相等时，返回value1.
例如，maxValue('B','a')返回B, maxValue('B','b')返回B, maxValue('B','c')返回c


