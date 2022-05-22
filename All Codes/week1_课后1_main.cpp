#include <iostream>
#include <iomanip>
using namespace std;
 
int main()
{
	//定义区 
	double t1 = 123456789.9876543;
	int t2 = 16;
	int t3 = 123456;
	int op = 1;
	//输出区
	cout <<"control the format of numeric value, 123456789.9876543" << endl;
	cout <<"Default:" <<scientific<<setprecision(5)<<t1<<endl; 
	cout<<"Using fixed:"<<fixed<<setprecision(6)<<t1<<endl;
	cout <<"With precision 7:"<<setprecision(7)<<t1<<endl;
	cout << "Scientific with precision 3:" << scientific<<setprecision(3) <<t1<<endl;
	cout <<"---------------------------"<<endl;
	cout <<"control the base of numeric value, 16"<<endl;
	cout <<"Hex:"<<hex<<t2<<endl;
	cout <<"Oct:"<<oct<<t2<<endl;
	cout <<"Dec:"<<dec<<t2<<endl;
	cout <<"---------------------------"<<endl;
	cout <<"control the width and alignment, and the width is 6 spaces" << endl;
	cout <<"right aligned" <<endl;
	for (int i =0; i< 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<right<<setw(6)<<op;
			op *= 2;
		}
		cout << endl;
	}
	cout <<"left aligned" <<endl;
	op = 1;
	for (int i =0; i< 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			cout<<left<<setw(6)<<op;
			op *= 2;
		}
		cout << endl;
	}
	cout <<"---------------------------"<<endl;
	cout <<"control the fillment of 123456"<<endl;
	cout<<"Original:"<<right<<setw(8)<<t3<<endl;
	cout<<right<<setw(9)<<"Filled:"<<right<<setw(8)<<setfill('*')<<t3<<endl;
	return 0;
}

/*control the format of numeric value, 123456789.9876543
Default:1.23457e+08
Using fixed:123456789.987654
With precision 7:123456789.9876543
Scientific with precision 3:1.235e+08
---------------------------
control the base of numeric value, 16
Hex:10
Oct:20
Dec:16
---------------------------
control the width and alignment, and the width is 6 spaces
right aligned
     1     2     4     8
    16    32    64   128
   256   512  1024  2048
  4096  8192 16384 32768
left aligned
1     2     4     8     
16    32    64    128   
256   512   1024  2048  
4096  8192  16384 32768 
---------------------------
control the fillment of 123456
Original:  123456
  Filled:**123456
*/