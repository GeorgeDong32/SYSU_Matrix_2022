#include<iostream>
using namespace std; 

int main()
{
	int l = 0; int h = 0; int am = 0; int con = 0;
	cin >> h; cin >> l;
	am = h * l;
	int*p = new int[am];
	for(int i = 0; i < am; i++)
	{
		cin >> *(p+i);
	}
	for(int i = 0; i < am; i++)
	{
		cout << *(p + i);
		con++;
		if(con < l)
			cout << " ";
		else if (con == l)
		{
			cout << endl;
			con = 0;
		}
	}
	delete[] p;
	return 0;
}