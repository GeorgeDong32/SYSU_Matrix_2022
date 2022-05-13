# 21程设Ⅱ-周13-课后2

# Description

Feng Gor是著名的房地产商，她每天的主要工作就是——数钱。这并不是一件容易的事，Feng Gor主要投资两类地，一类是圆的，一类是方的。现在你作为她的会计，需要帮她数钱。

`Circle`类和`Square`类继承于`Land`类，分别代表圆的地和方的地，其投资收入根据单位面积价格（`price`）和地的面积（根据边长或半径算出）决定。

`Accountant`类用于计算Feng Gor开发各种房地产带来的收入。其中`DevelopEstate`函数接收一个`Land`的指针，计算并累加开发这块房地产带来的收入（这里用到了动态绑定哦）。`CheckMoney`函数返回当前的收入。

你的提交可能会被如下的代码调用。

```cpp
#include <iostream>
#include <iomanip>
using namespace std;

int main(int argc, const char *argv[]) {
  Accountant py;
  Circle *a = new Circle(100, 10000);
  Square *b = new Square(100, 50000);
  py.DevelopEstate(a);
  cout << setprecision(10) << py.CheckMoney() << endl;
  py.DevelopEstate(b);
  cout << setprecision(10) << py.CheckMoney() << endl;

  return 0;
}
```

# Sample Output

```
314159265.4
814159265.4
```

# Hint

为了防止大家背不熟圆周率导致Wrong Answer，特意提醒一下，$\pi$可以用`acos(-1)`表示。`acos()`在`<cmath>`库里。

