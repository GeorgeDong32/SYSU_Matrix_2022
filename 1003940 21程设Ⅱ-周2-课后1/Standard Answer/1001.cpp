// Problem#: 17815
// Submission#: 4605229
// The source code is licensed under Creative Commons Attribution-NonCommercial-ShareAlike 3.0 Unported License
// URI: http://creativecommons.org/licenses/by-nc-sa/3.0/
// All Copyright reserved by Informatic Lab of Sun Yat-sen University
#include "Object.h"
void TestObjects(int count) {
	Object *arr[count];
	for(int i=0;i<count;i++)
	{
		arr[i] = new Object(i+1);
	}
	for(int i=0;i<count;i++)
	{
		if(i%2==0)
			delete arr[i];
	}
	for(int i=0;i<count;i++)
	{
		if(i%2==1)
			delete arr[i];
	}
}
