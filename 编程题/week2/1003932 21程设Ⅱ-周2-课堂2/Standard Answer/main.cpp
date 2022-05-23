#include <iostream>
#include "point.h"
using namespace std;

int main ( )
{
    double x,y;
    cin>>x>>y;
    point p1(x,y);
    p1.print();
    cout<<point::count<<endl;
    cin>>x>>y;
    point p2(x,y);
    cin>>x>>y;
    point p3(x,y);
    if(p1.judge(p2,p3)){
    	cout<<"True"<<endl;
	}
	else{
		cout<<"False"<<endl;
	}
	cout<<point::count<<endl;
    return 0;
}
