#include <iostream>
using namespace std;
const double PI = 3.14;
#include "source.h"
int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	double n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		Shape *s;
		cin>>a>>b>>c;
		s = new Rectangle(a,b);
		cout<<s->GetArea()<<" "<<s->GetPerim()<<endl;
		delete s;
		s = new Circle(c);
		cout<<s->GetArea()<<" "<<s->GetPerim()<<endl;
		delete s;
	}
	return 0;
}