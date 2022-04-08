# 21程设Ⅱ-周6-课后1

# Description
实现一个`string类`的`deep copy`。注意：**如果程序对同一个内存块释放两次，就会出错**

函数的声明如下：
```cpp
//String.h
class STRING {
private:	
      int     length;
      char  *buffer;
public:	
      STRING();
      STRING(const char *str);
			STRING(const STRING &another);
      ~STRING();
	  
};

```

# Sample Output
```
success
```