# [期中题目，重新开放，不记分 题目1 cin、cout练习]

请编写一段程序，将输入的秒数转换为`时:分:秒`的输出格式。超过24小时则从`00:00:00`开始计算

具体需要满足下列输入输出要求。

# Input

输入有若干行，每行包含一个正整数，表示秒

# Output

输出一行，形如`00:00:00`的格式

# Sample Input

```
0
3600
44999
86400
```

# Sample Output

```
00:00:00
01:00:00
12:59:59
00:00:00
```

## Hint

输入流形式如：

```
int seconds;
while (cin >> seconds) {
    ...
}
```

占位输出方法如：

```
#include <iostream>
#include <iomanip>

cout << setw(2) << setfill('0') << hour ...
```

