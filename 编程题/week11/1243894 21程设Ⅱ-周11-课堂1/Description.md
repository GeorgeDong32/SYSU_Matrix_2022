# 21程设Ⅱ-周11-课堂1

# Description

Below are two classes `A` and `C`:

```cpp
class A
{
public:
   A(int a0):a(a0) {}
   void showA() { cout<<a<<endl; }
protected:
   int a;
};

class C
{
public:
   C(int c0):c(c0) {}
   void showC() { cout<<c<<endl; }
protected:
   int c;
};
```

You are required to derive a class `B` from both `A` and `C`. The `B` class has **only one constructor**, which has two parameters of the type `int`, with the first one for `a` and the second for `c`. The default values for the two parameters are 11 and 22 respectively.

Your submitted source code should include the whole implementation of the `B` class, but without the `A` and `C` classes.

No `main()` function should be included.


