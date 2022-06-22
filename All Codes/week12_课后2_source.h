#pragma once
#include <string.h>
#include <cstring>
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
class base
{
private:
	char* name;
	int age;
public:
	base(): age(0) {name = nullptr;}
	~base()
	{
		age = 0;
		if (name != nullptr)
			delete[] name;
	}
	void setname(char arr[])
	{
		int l = strlen(arr);
		name = new char[l + 1];
		strcpy(name, arr);
	}
	void setage(int a){	age = a;}
	char* getname(){ return name;}
	int getage(){ return age;}
};
class leader : virtual base
{
private:
	char* job;
	char* department;
public:
	leader() : base() { job = nullptr; department = nullptr; }
	~leader()
	{
		if (job != nullptr)
			delete[] job;
		if (department != nullptr)
			delete[] department;
	}
	void setname(char arr[])
	{
		base::setname(arr);
	}
	void setage(int a) { base::setage(a); }
	char* getname() { return base::getname(); }
	int getage() { return base::getage(); }
	void setjob(char arr[])
	{
		int l = strlen(arr);
		job = new char[l + 1];
		strcpy(job, arr);
	}
	void setdepartment(char arr[])
	{
		int l = strlen(arr);
		department = new char[l + 1];
		strcpy(department, arr);
	}
	char* getjob() { return job; }
	char* getdep() { return department; }
};

class engineer : virtual base
{
private:
	char* profile;
	char* major;
public:
	engineer() : base() { profile = nullptr; major = nullptr; }
	~engineer()
	{
		if (profile != nullptr)
			delete[] profile;
		if (major != nullptr)
			delete[] major;
	}
	void setprofile(char arr[])
	{
		int l = strlen(arr);
		profile = new char[l + 1];
		strcpy(profile, arr);
	}
	void setmajor(char arr[])
	{
		int l = strlen(arr);
		major = new char[l + 1];
		strcpy(major, arr);
	}
	char* getprof() { return profile; }
	char* getmajor() { return major; }
};

class chairman : public leader, public engineer
{
public:
	chairman(): leader(), engineer(){}
	~chairman(){}
	void setname(char arr[]){ leader::setname(arr); }
	void setage(int na) { leader::setage(na); }
	void setjob(char arr[]) { leader::setjob(arr); }
	void setdep(char arr[]) { leader::setdepartment(arr); }
	void setmajor(char arr[]) { engineer::setmajor(arr); }
	void setprof(char arr[]) { engineer::setprofile(arr); }

};
