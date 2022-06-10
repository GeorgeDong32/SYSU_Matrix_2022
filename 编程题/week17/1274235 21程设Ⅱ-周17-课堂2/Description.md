# 21程设Ⅱ-周17-课堂2

# Description
Implement the following operations:


```cpp
#include <iostream>
#include <map>
using namespace std;
int main() {
	map <char, int>m;
	int i;
	
	//put pairs into map
	//your code
	
	char ch;
	cout <<"enter key:";
	cin >>ch;
	map<char, int>::iterator p;
	
	//find value given key ch
	//your code
	
	if (p!=m.end())
		cout <<"Its ASCII value is " <<p->second;
	else
		cout <<"Key not in map." ;
	return 0;
}
```

# Sample Input
```
A
```

# Sample Output
```
enter key:
Its ASCII value is 65

```

# Hint
**Note: the key in map m is A~Z, and the corresponding value is  its ASCII.**