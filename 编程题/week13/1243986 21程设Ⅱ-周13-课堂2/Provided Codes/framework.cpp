#include <iostream>
#include <string>
#include "source.h"
using std::endl;

// Function prototype
//int myplus(int a, int b);
//double myplus(double a, double b);
//std::string myplus(const std::string& a, const std::string& b);

int main() {
	int n;
  int a,b;
	double c,d;
	std::string str1,str2;
	std::cin>>n;
	while(n--)
	{
		std::cin>>a >> b ;
		std::cin>>c >> d;
		std::cin >> str1 >>str2;
		std::cout <<myplus(a, b) << endl;
		std::cout <<myplus(d, c) << endl;
		std::cout <<myplus(str1, str2) << endl;
	}	
	return 0;
}
