#ifndef COMPLEX_H
#define COMPLEX_H

class COMPLEX
{
public:
	COMPLEX(double r = 0, double i = 0); // 构造函数
	COMPLEX(const COMPLEX &other);		 // 拷贝构造函数
	void print();						 // 打印复数
	
	COMPLEX operator+(const COMPLEX &other); // 重载加法运算符（二元）
	COMPLEX operator-(const COMPLEX &other); // 重载减法运算符（二元）
	COMPLEX operator-(); // 重载求负运算符（一元）
	COMPLEX operator=(const COMPLEX &other); // 重载赋值运算符（二元）
  
	COMPLEX &operator++();   //重载前置++
	COMPLEX operator++(int); //重载后置++
	COMPLEX &operator--();   //重载前置--
	COMPLEX operator--(int); //重载后置--
protected:
	double real, image; // 复数的实部与虚部
};
#endif

