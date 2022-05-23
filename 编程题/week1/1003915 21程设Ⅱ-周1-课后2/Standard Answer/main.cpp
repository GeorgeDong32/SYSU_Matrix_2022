#include<iostream>
using namespace std;

int main()
{
	int row ,col,i,j;
	cin >> row >> col;
	int ** arr = new int *[row];
	for (i=0;i<row;i++)
		arr[i]=new int [col];
	for (i=0;i<row;i++)
		for(j=0;j<col;j++)
			cin >> arr[i][j];

	for (i=0;i<row;i++)
	{
		for (j=0;j<col;j++) {
			if(j > 0) cout<<" ";
			cout<<arr[i][j];
		}
		cout<<endl;
	}

	for (i=0;i<row;i++)
		delete [] arr[i];
	delete [] arr;

	return 0;
}