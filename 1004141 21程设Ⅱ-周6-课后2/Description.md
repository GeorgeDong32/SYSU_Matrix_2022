# 21程设Ⅱ-周6-课后2

# Description

Use **macro** and **inline function** to implement `swap` and `max` .

**Detail**

`swap` means swap two variables. Will be used as `swap(a, b);` .

`max` means select and return the bigger one of two variables. Will be used as `int res = max(a, b);` .

In this assignment, implement `inline int inline_MAX(int a, int b)` and `inline void inline_SWAP(int &a, int &b)` with **inline function** , and implement `MACRO_MAX(a, b)` and `MACRO_SWAP(a, b)` with **macro** .

In this assignment, you **must** use macro or you will **get in trouble**. (**But** be aware that macro is NOT always a good solution!)

# Hint

简单来说，内联函数 (inline function) 就是会在调用处被展开的函数，这听起来会有点像宏里面的 `#define` 指令，比如 `#define MAX_LEN 100` 会在预处理时把 `MAX_LEN` “展开”成 `100`，而它们的不同在于宏指令 `#define` 是单纯的字符串替换，而内联函数不是。 ([内联函数被如何处理呢？](https://en.wikipedia.org/wiki/Inline_function))

本题的意思就是使用 `#define` 的其中一种带参数的用法来实现类似函数的功能，关于在本题中的用法，推荐参考 gnu 的[cpp文档](https://gcc.gnu.org/onlinedocs/cpp/Macros.html)中的 *Function-like Macros* 和 *Macro Arguments* 的部分。

需要注意的一点是，`#define` 是一种字符串替换，所以可能出现一种不易发现的问题，如：

```cpp
#define ADD(x,y) x + y
int foo(int a, int b) {
	return 3 * ADD(a + 2, b) * 2;
}
```

在这种情况下，第3行会被替换成 `return 3 * a + 2 + y * 2;` ，与预期的效果不符。因此使用宏时必须小心，在这里应该改写为 `#define ADD(x,y) ((x) + (y))`

**(这里是这道题的答案……)**

`#define` 用法举例，取两个数中小的一个： `#define MIN(x, y) ((x) < (y) ? (x) : (y))`

一行代码交换两个int： `a ^= b ^= a ^= b;`

**另外本题的函数命名并不是规范，请不要盲从……**

