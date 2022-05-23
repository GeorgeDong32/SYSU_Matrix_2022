# 21程设II-周8-课后-1

# Description

**注意：以下世界观内容仿制《辐射4》背景故事，纯属虚构，切勿当真！**

After the nuclear firestorm in year 2077, human civilization is on the verge of destruction, but new civilizations still exist on the old and glorious wreckage. Survivors started building underground **Safehouse** to avoid ground fallout and explore new living place. A Safehouse can not only provide rooms for surviving, but also store many necessary types of living **Resource**.

在2077年的末世浩劫“核火风暴”之后，人类文明毁灭了，但没有完全毁灭，新的文明依然存在于旧日辉煌的残骸之上。幸存者为了躲避地面的辐射，找到新的生存空间，开始修建起**地下避难所（Safehouse）**。地下避难所不仅仅能提供人们居住的环境，而且还能存储各种各样的**资源（Resource）**。

# Guiding

Assume that any kinds of Resource has its **name** and **count** in management.

假设在资源管理的概念中，每一种资源（Resource）都有对应的**名称（name）** 和**数量（count）**。

```
struct Resource {
  string name;
  int count;

  Resource(): name(""), count(0) {}
  Resource(const string& str, const int& c): name(str), count(c) {}
};
```

And a Safehouse can be regarded as **a place for storing these kinds of Resource**.

而一个避难所（Safehouse）可以被视为**存储这些资源的地方**。

```
class Safehouse {
private:
  Resource* _owns;  // A place for storing many types of resources.
  int _count_own_types;  // How many types of resources has this Savehouse stored.

public:
   // Some functions.
};
```

There are up to **16** kinds of Resource in the world, and a Safehouse may contain several kinds of them, each of which is of corresponding amount (or count). To manage the Resource in Safehouse, the regulator decided to use **overloaded operator** to express Resource changes, for instance, so here is the task for you: **implement the operator overloading of class Safehouse**, since you are the cleverest among all residents.

这个世界上最多一共有**16**种资源，每个避难所可能存储其中的几种，每一种资源都有其对应的数量。为了方便管理避难所的资源存储，避难所监管者决定采用**重载的运算符（overloaded operator）形式**来表示避难所的资源存储变化概况。现在请你——避难所里最聪明的居民，来帮助他**实现避难所的资源数量运算**。

# Details

The Implementation of Resource struct is not needed, because it has been placed together with the announcement of class Safehouse in file "Safehouse.h". **All you need to do is to realize some operator overloading functions of class Safehouse.**

你不需要实现用于表示资源的结构体，因为它的定义和避难所类的声明都放在"Safehouse.h"头文件中。**你只需要为避难所类实现如下这些运算符重载即可。**

```
// "Copy" all Resource from another Safehouse to current Safehouse.
Safehouse& operator = (const Safehouse& another);
​
// Add a kind of Resource to target Safehouse.
// If the Resource type ALREADY exists in target Safehouse, just add on its existing count.
// If the Resource type NOT exists in target Safehouse, add the new type totarget Safehouse with corresponding count.
Safehouse operator + (const Resource& new_resource); 
​
// Add all Resource existing in another Safehouse to target Safehouse.
// You can call the overloaded version of '+ Resource' above for convenience.
Safehouse operator + (const Safehouse& another);
​
// Similar to the overloading of '+ Resource'.
Safehouse& operator += (const Resource& new_resource);
​
// Similar to the overloading of '+ Safehouse'.
Safehouse& operator += (const Safehouse& another);
​
// Get the Resource object at designated index. You can assume that all input indexs are VALID!
const Resource& operator [] (const int& index) const;
​
// Compare current Safehouse with another Safehouse.
// "Safehouse1 >= Safehouse2" is satisfied, if and only if each of all Resource types existing in Safehouse2 also exists in Safehouse1.
// Besides, as for a type of Resource, the corresponding amount in Safehouse1 must be NOT LESS THAN the corresponding amount in Safehouse2.
// Otherwise, "Safehouse1 >= Safehouse2" is NOT satisfied.
bool operator >= (const Safehouse& another);
​
// Print all existing Resource in target Safehouse.
// The form of output is shown in Sample Output.
friend ostream& operator << (ostream& os, const Safehouse& house);
```

# Hint

Some useful functions of class Safehouse have been implemented. You can use them for simplifying your own codes, or just ignore them.

在Safehouse类中实现了一些可以直接调用的函数。你可以调用它们以简化自己代码，也可以选择无视它们。

## Sample Input

```
Oil 2
Coal 4
Gunpowder 3
Leather 6
Plastic 5
Rubber 10
Lewel 7
Steel 14
Iron 11
Copper 22
Zinc 13
Wood 26
Glass 17
Fibre 34
Grass 19
Eletronic 38
```

## Sample Output (Notice how to put a Safehouse object in ostream)

```
After adding 2 Oil to house1 >>>
Oil: 2
​
After adding 4 Coal to house1 >>>
Oil: 2
Coal: 4
​
After adding 3 Gunpowder to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
​
After adding 6 Leather to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
​
After adding 5 Plastic to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
​
After adding 10 Rubber to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
​
After adding 7 Lewel to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
​
After adding 14 Steel to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
​
After adding 11 Iron to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
​
After adding 22 Copper to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
​
After adding 13 Zinc to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
​
After adding 26 Wood to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
Wood: 26
​
After adding 17 Glass to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
Wood: 26
Glass: 17
​
After adding 34 Fibre to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
Wood: 26
Glass: 17
Fibre: 34
​
After adding 19 Grass to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
Wood: 26
Glass: 17
Fibre: 34
Grass: 19
​
After adding 38 Eletronic to house1 >>>
Oil: 2
Coal: 4
Gunpowder: 3
Leather: 6
Plastic: 5
Rubber: 10
Lewel: 7
Steel: 14
Iron: 11
Copper: 22
Zinc: 13
Wood: 26
Glass: 17
Fibre: 34
Grass: 19
Eletronic: 38
​
After adding 2 Oil to house2 >>>
Oil: 2
​
After adding 3 Gunpowder to house2 >>>
Oil: 2
Gunpowder: 3
​
After adding 5 Plastic to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
​
After adding 7 Lewel to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
Lewel: 7
​
After adding 11 Iron to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
Lewel: 7
Iron: 11
​
After adding 13 Zinc to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
Lewel: 7
Iron: 11
Zinc: 13
​
After adding 17 Glass to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
Lewel: 7
Iron: 11
Zinc: 13
Glass: 17
​
After adding 19 Grass to house2 >>>
Oil: 2
Gunpowder: 3
Plastic: 5
Lewel: 7
Iron: 11
Zinc: 13
Glass: 17
Grass: 19
​
house2 >= house1? : false
After adding house1 and house2 to house3 >>>
Oil: 4
Coal: 4
Gunpowder: 6
Leather: 6
Plastic: 10
Rubber: 10
Lewel: 14
Steel: 14
Iron: 22
Copper: 22
Zinc: 26
Wood: 26
Glass: 34
Fibre: 34
Grass: 38
Eletronic: 38
​
house3 >= house1? : true
After initializing house4 with house3 >>>
Oil: 4
Coal: 4
Gunpowder: 6
Leather: 6
Plastic: 10
Rubber: 10
Lewel: 14
Steel: 14
Iron: 22
Copper: 22
Zinc: 26
Wood: 26
Glass: 34
Fibre: 34
Grass: 38
Eletronic: 38
```

