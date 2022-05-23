# 21程设Ⅱ-周12-课后1

# Description

Feng Gor除了是个房地产商外，像大多数女生一样，她也是喜欢逛淘宝的。我们都知道，在淘宝上有很多很多的商品。当然，Feng Gor挑的一般都是最贵的，但是偶尔也是要看看销量参考一下的啊。因此，她希望淘宝能够按照她想要的方式来排序：当她想要按价格排序，商品就按价格排序；当她想要按销量排序，商品就按销量排序（都是按照从大到小排序）。淘宝这种大公司肯定已经提供这个功能的啊。不过，作为一个程序猿，她希望大家也来用C++模拟实现一下。

代表商品的结构体如下：

```cpp
struct TaoBaoItem {
  int price;
  int volume_of_sales;
};
```

为了能实现不同的排序方式，她特意抽象出了一个接口出来：

```cpp
class SortInterface {
 public:
  virtual ~SortInterface() {};
 
  virtual void DoSort(TaoBaoItem item[], int size) = 0;
};
```

接下来，她要你们实现的类如下：

```cpp
class SortByPrice : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size);
};
 
class SortBySales : public SortInterface {
 public:
  virtual void DoSort(TaoBaoItem item[], int size);
};

class TaoBao {
 public:
  TaoBao(SortInterface* strategy);
  
  void SetSortStrategy(SortInterface* strategy);
 
  // Use current strategy_ to do the sort.
  void sort(TaoBaoItem item[], int size);
 
 private:
  SortInterface *strategy_;
};
```

你提交的实现可能会被测试框架用如下的方式进行调用：

```cpp
#include <iostream>
#include <string>
using namespace std;

struct TaoBaoItem {
  int price;
  int volume_of_sales;
};

class SortInterface {
 public:
  virtual ~SortInterface() {};

  virtual void DoSort(TaoBaoItem item[], int size) = 0;
};

#include "source.cpp"

void printItem(TaoBaoItem arr[], int size) {
  for (int i = 0; i < size; ++i) {
    cout << arr[i].price << " " << arr[i].volume_of_sales << endl;
  }
}

int main(int argc, char *argv[]) {
  TaoBaoItem item[4] = {
    {1, 2},
    {2, 3},
    {5, 1},
    {3, 10}
  };
  SortByPrice price;
  SortBySales sales;

  TaoBao taobao(&price); 
  taobao.sort(item, 4);
  printItem(item, 4);
  
  taobao.SetSortStrategy(&sales);
  taobao.sort(item, 4);
  printItem(item, 4);

  return 0;
}
```

# Sample Output

```
5 1
3 10
2 3
1 2
3 10
2 3
1 2
5 1
```

# Hint

- 这其实是一种叫做“策略模式”的设计模式，有兴趣的同学查阅该条目的维基百科页面（[中文](https://zh.wikipedia.org/wiki/策略模式)，[英文](https://en.wikipedia.org/wiki/Strategy_pattern)）。不过，这个题目最主要的目的是想让大家体验一下多态带来的好处。
- 关于排序的实现，大家可以尝试使用`std::sort`函数，使用方法请自行查找。
  

