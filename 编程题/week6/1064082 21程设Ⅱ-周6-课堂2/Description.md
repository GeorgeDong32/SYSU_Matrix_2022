# 21程设Ⅱ-周6-课堂2

# Description

Design a `double` class named `Double` to encapsulate the operations of double. The class contains:

* A `double` data field named ``data``. The default values are 0.
* A no-arg constructor that creates a default `Double`.
* A constructor that creates a `Double` with the specified data.
* The get and set functions for all the data fields. (`getDouble`, `setDouble`)
* A `void` function ``add()`` for current `Double` plus another `Double`.
* A `void` function ``sub()`` for current `Double` minus another `Double`.
* A `void` function ``mul()`` for current `Double` times another `Double`.
* A `bool` function ``div()`` for current `Double` divided by another `Double`. The function returns ``false`` if another `Double` is equal to 0.

The definition of `Double` class is as follow:
```cpp

class Double
{
private:
     double data;
public:

     Double() ;
     Double(double data);
     double getDouble() const;
     void setDouble(double data);
     void add(const Double &other);
     void sub(const Double &other);
     void mul(const Double &other);
     bool div(const Double &other);
};
```

# Hint

 Submit the implementation of `Double` class only.
