# 21程设II-周7-课堂-1

**Implement the Complex class:**

```
​
​
class Complex
{
 double re; //real part of a complex number
 double im; //imaginary part of a complex number
public:
 double real() const { return re; }
 double imag() const { return im; }
​
 // add any other function needed here
};
```

**The Complex class implemented may be used like this:**

```
void f()
{
 Complex a; 
 cout << a << endl; //output (0,0)
​
 Complex b = Complex(1,2.5);
 cout << b << endl; //output(1,2.5)
​
 Complex c(3.0);
 cout << c << endl; //output (3,0)
​
 c += a;
 cout << c << endl;
​
 c = c + a;
 cout << c << endl;
​
 c = c + 2.5;
 cout << c << endl;
​
 c = 2.5 + c;
 cout << c << endl;
​
 c -= a;
 cout << c << endl;

 c = c - a;
 cout << c << endl;
​
 c = c - 2.5;
 cout << c << endl;

 c = 2.5 - c;
 cout << c << endl;

 c *= b;
 cout << c << endl;

 c = c * b;
 cout << c << endl;
​
 c = c * 2.5;
 cout << c << endl;

 c = 2.5 * c;
 cout << c << endl;

 c /= b;
 cout << c << endl;

 c = c / b;
 cout << c << endl;
​
 c = c / 2.5;
 cout << c << endl;

 c = 2.5 / c;
 cout << c << endl;

 c = a+2.5+a + b*2.5*b;
 cout << c << endl;
​
 c = -b;
 cout << c << endl;

 cout << (a==a) << endl; //output 1
 cout << (a==0.0) << endl; //output 1
 cout << (0.0==a) << endl; //output 1
 cout << (a!=a) << endl; //output 0
 cout << (a!=0.0) << endl; //output 0
 cout << (0.0!=a) << endl; //output 0 
​
 cin >> c; //输入格式(a,b)表示复数a + b i
 cout << c << endl;
}
```

## Hint

要实现的类和函数如下

```
class Complex   {
public:
    double i,r;
    Complex(double re=0);
    Complex(double re, double im);
    const double real(void) const;
    const double imag(void) const;
    Complex operator - () const ;//取相反数
    Complex operator+(const Complex& C)	 const;
    Complex operator-(const Complex& C)	 const;
    Complex operator*(const Complex& C)	 const;
    Complex operator/(const Complex& C)	 const;
    
    Complex& operator+=(const Complex& C);//注意要返回*this
    Complex& operator-=(const Complex& C);
    Complex& operator*=(const Complex& C);
    Complex& operator/=(const Complex& C);

    bool operator == (const Complex& C)  const ;//浮点数判断相等不能直接用==，而是要检查差值是否小于一个很小的数
    bool operator != (const Complex& C)  const  ;
};

Complex operator+(const double a,const Complex& C);
Complex operator-(const double a,const Complex& C);
Complex operator*(const double a,const Complex& C);
Complex operator/(const double a,const Complex& C);
bool operator == (const double a,const Complex& C)  ;
bool operator != (const double a,const Complex& C)  ;

istream& operator>>(istream& is, Complex& C)	{
	 char c;
     is>>c>>C.r>>c>>C.i>>c;
	return is;
}
ostream& operator<<(ostream& os,const Complex& C);//别忘了返回os
```

复数的运算法则

$$
(a+bi)+(c+di)=(a+c)+(b+d)i
$$

$$
(a+bi)-(c+di)=(a-c)+(b-d)i
$$

$$
(a+bi)*(c+di)=(ac-bd)+(ad+bc)i
$$

$$
\frac{(a+bi)}{(c+di)}=\frac{(a+bi)(c-di)}{(c+di)(c-di)}=\frac{(ac+bd)+(bc-ad)i}{c^2+d^2}
$$

如果不知道重载运算符要怎么写的话，思考一下：

```
int x,a,b;
x=a+b;
x+=a;
```

1.a+b会改变a的值吗？
不会，实际上是相当于新建了一个int对象，它的值为a+b

2.r=1,i=1
r=r+i;
i=r*2;
i会等于2（原来的r*2）吗？
不会，因为在算之前已经改了r

