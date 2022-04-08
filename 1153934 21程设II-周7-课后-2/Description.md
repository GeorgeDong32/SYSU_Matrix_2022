# 21程设II-周7-课后-2

# Description

In this assignment you are required to complete a class for fractions.

It stores the numerator and the denominator, with the lowest terms.

It is able to communicate with iostreams by the operator << and >>.

For more details, read the header file.

# Sample Input

```
1 0 2 3
```

# Sample Output

```
NaN NaN NaN NaN
NaN
NaN
NaN
NaN
False
True
False
False
False
False
```

# Hint

输入的数据大小为 short

如果分母为 0，那么进行四则运算时返回一个 "NAN"

== 操作符相等的情况是，两个数分母都为0或者两个数本身相等；不等于则刚好相反

<,> 的操作就按正常的比较即可，但如果其中一个数字为 "NAN"，则返回 false

