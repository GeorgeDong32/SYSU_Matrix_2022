#include<iostream>
#include<string.h>
#include<cstring>
#include <fstream>
using namespace std;
#include "source.h"
int main()
{
	//freopen("in.txt", "r", stdin);
	//freopen("out.txt", "w", stdout);
	int n;
	cin>>n;
	for (int i=0;i<n;i++)
	{
		char name[20],job[20],dep[20],major[20],prof[20];
    	int age;
		cin>>name>>age>>job>>dep>>major>>prof;
		chairman man;
		man.setname(name);
		man.setage(age);
		man.setjob(job);
		man.setdep(dep);
		man.setmajor(major);
		man.setprof(prof);
		
		cout<<"name: "<<man.getname()<<" age: "<<man.getage()<<" dep: "<<man.getdep()
			<<" job: "<<man.getjob()<<endl;
		cout<<"prof: "<<man.getprof()<<" major: "<<man.getmajor()<<endl;
	}
	return 0;
}