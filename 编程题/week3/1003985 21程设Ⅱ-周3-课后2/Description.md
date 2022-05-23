# 21程设Ⅱ-周3-课后2

# Description

My books want to have different kinds of formats of a booklist. To improve the reuseability of the code, we should use the object-oriented thought. I design the class `Book` as below:

```cpp
class Book
{
 string name;
 string code;
  double cost;
public:
 Book(string s,string c,double co):name(s),code(c),cost(co){}

};
```

The default output format of a `Book` object requires

- Each field being **right-justified**
- Each field having the same **field width: 15**
- Each number (`double`) having a **forced 6 digits** after the decimal dot.

The `leftform` output format of a `Book` object requires

- Each field being **left-justified**
- Each field having the same **field width: 15**
- Each number (`double`) having a **forced 2 digits** after the decimal dot.

The `rightform` output format of a `Book` object requires

- Each field being **right-justified**
- Each field having the same **field width: 15**
- Each number (`double`) having a **forced 2 digits** after the decimal dot.

The main function is :

```cpp
int main() {
    int N;
    string name;
    string code;
    double cost;
    cin >> N;
    int i = 0;
    Book *books[N];
     for(i=0;i<N;i++){
        cin >> name >> code >> cost;
        books[i] = new Book(name, code, cost);
    }
    for(i=0;i<N;i++){
        cout << "-----:" << *books[i];
    }
    for(i=0;i<N;i++){
        cout << leftform << *books[i];
    }
    for(i=0;i<N;i++){
        cout << rightform << *books[i];
    }
}
```

# Input

First line is the integer `N` followed by $N$ lines. Each line contains the name, code and cost.

**The input has been handled by the test framework.**

# Output

Please refer to the `main` function and the sample output.

**The output has been handled by the test framework.**

# Sample Input

```
3
book1 123456 342.13
book2 456789 23
book3 789123 1.2321
```

# Sample Output

```
-----:          book1         123456     342.130000
-----:          book2         456789      23.000000
-----:          book3         789123       1.232100
left :book1          123456         342.13         
left :book2          456789         23.00          
left :book3          789123         1.23           
right:          book1         123456         342.13
right:          book2         456789          23.00
right:          book3         789123           1.23
```

# Hint

为了实现```cout<<*book[i];```你需要在类声明处实现这样一个函数

```
class Book{
//...其他成员
public:
friend ostream & operator << (ostream & os, const Book & b) {
//像下面这个语句来写
//os<< "something";
   return os;
  }
}
```

另外，为了实现```cout<<leftform;```你需要实现一个这样的函数（在最外部，不在类里面）

```
ostream & leftform(ostream& strm) {
//像下面这样写
//strm << "right:";
//strm << setw(15);
return strm;
}
```


