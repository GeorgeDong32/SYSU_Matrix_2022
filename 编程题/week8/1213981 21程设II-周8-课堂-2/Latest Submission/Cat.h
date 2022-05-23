#ifndef __CAT_H__
#define __CAT_H__
#include <string>
using namespace std;

class CatFamily;

class Cat
{
public:
	string name;
	Cat()
	{
		name = "";
	}
	Cat(string n)
	{
		name = n;
		//cout << "in Cat(string)" << endl;
		//cout << name << endl;
	}
	Cat(const Cat& c)
	{
		name = c.name;
	}
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
	//test
	void p()
	{
		cout << name << endl;
	}
};

class CatFamily {
public:
	Cat cats[10];
	int size;
	CatFamily()
	{
		size = 0;
	}
	CatFamily(Cat c)
	{
		size = 1;
		cats[0].name = c.name;
	}
	CatFamily(Cat c[], int s)
	{
		size = s;
		for (int i = 0; i < size; i++)
		{
			cats[i] = c[i];
		}
	}
	void add_family(Cat c)
	{
		if (size < 10)
		{
			cats[size].name = c.name;
			size++;
		}	
	}
	friend CatFamily operator + (CatFamily f1, CatFamily f2);
	void print()
	{
		for (int i = 0; i < size; i++)
		{
			cout << cats[i].name << " ";
		}
		cout << endl;
	}
};

CatFamily operator + (CatFamily f1, CatFamily f2)
{
	int s1 = f1.size; int s2 = f2.size;
	Cat ncat[10]; int con = 0;
	for (int i = 0; i < s1; i++)
	{
		ncat[i] = f1.cats[i];
		con++;
	}
	for (int i = 0; i < s2; i++)
	{
		ncat[i + con] = f2.cats[i];
	}
	return CatFamily(ncat, s1+s2);
}
#endif