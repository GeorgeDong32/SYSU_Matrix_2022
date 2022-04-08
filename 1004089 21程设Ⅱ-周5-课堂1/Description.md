# 21程设Ⅱ-周5-课堂1

# Description
We want to similate the `Novel` and `NovelServer`, which `NovelServer` contains a list of `Novel`. Both classes `Novel` and `NovelServer` should always act in a **deep copy** way.
我们在这里模拟存储有`Novel`的`NovelServer`。`NovelServer`存储有一个`Novel`的列表。`Novel`和`NovelServer`这两个类应当总是表现为**深拷贝**的形式。

Please implement `novelServer.h` in `novelServer.cpp`.
请在`novelServer.cpp`中实现`novelServer.h`。

# Sample Input
```
Ring King
Ring King :: waiting to update~~~~~~~~~~
```
# Sample output
```
novel2
********Ender's Game********
Ender's Game :: wait to update...

novel3
********Ender's Game********
Ender's Game :: wait to update...

novel3
********Ring King********
Ring King :: waiting to update~~~~~~~~~~

-----------Novel test Done.-----------

novelServer
********Ender's Game********
Ender's Game :: wait to update...

********Ender's Game********
Ender's Game :: wait to update...

********Ring King********
Ring King :: waiting to update~~~~~~~~~~


novelServer1
********Ender's Game********
Ender's Game :: wait to update...

********Ender's Game********
Ender's Game :: wait to update...

********Ring King********
Ring King :: waiting to update~~~~~~~~~~


novelServer2
********Ender's Game********
Ender's Game :: wait to update...

********Ender's Game********
Ender's Game :: wait to update...


-----------NovelServer test Done.-----------

```