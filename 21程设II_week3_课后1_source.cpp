#include <iostream>
using namespace std;

class Cat
{
public:
	//数据
	string cat_name;
	int cat_age;
	Cat* next;
	friend class CatFamily;
	//函数
	Cat()
	{
		cat_age = 0;
		next = NULL;
	}
	Cat(string name, int age)
	{
		cat_name = name;
		cat_age = age;
		next = NULL;
	}
};

class CatFamily
{
public:
	//数据
	Cat* pfirst_cat;
	Cat* plast_cat;
	int cat_count;
	//函数
	CatFamily()
	{
		cat_count = 0;
		pfirst_cat = new Cat;
		plast_cat = pfirst_cat;
	}
	~CatFamily()
	{
		Cat* p = pfirst_cat;
		Cat* pn = p->next;
		while (p != NULL)
		{
			delete p;
			p = pn;
			pn = p->next;
		}
	}
	bool has_cat(string name)
	{
		Cat* p = pfirst_cat;
		if (cat_count == 0)
			return false;
		while (p != NULL)
		{
			if (p->cat_name == name)
				return true;
			else
			{
				if (p->next != NULL)
				{
					p = p->next;
				}
				else
					break;
			}
		}
		return false;
	}
	int number_of_cats()
	{
		return cat_count;
	}
	bool remove_a_cat(string name)
	{
		//cout << "before remove cat_count = " << cat_count << endl;
		//cout << "in remove_a_cat function" << endl;
		Cat* pb = pfirst_cat;
		Cat* p = pfirst_cat;
		Cat* pn = p->next;
		if (cat_count == 0)
			return false;
		//cout << "finished definition" << endl;
		while (p != NULL)
		{
			//cout << p->cat_name << endl;
			if (p->cat_name == name)
			{
				if (plast_cat == p)
				{
					plast_cat = pb;
					delete p;
					cat_count--;
					//cout << "cat_count = " << cat_count << endl;
					return true;
				}
				else
				{
					pb->next = pn;
					delete p;
					cat_count--;
					//cout << "cat_count = " << cat_count << endl;
					return true;
				}
			}
			else
			{
				pb = p;
				p = pn;
				if (pn != NULL)
					pn = p->next;
				else
					break;
			}
		}
		//cout << "after remove cat_count = " << cat_count << endl;
		return false;
	}
	bool add_a_cat(string name, int age)
	{
		//cout << "before add cat_count = " << cat_count << endl;
		if (cat_count < 100)
		{
			cat_count++;
			Cat* pnew_cat = new Cat(name, age);
			plast_cat->next = pnew_cat;
			plast_cat = pnew_cat;
			//cout << "after add cat_count = " << cat_count << endl;
			return true;
		}
		else
			//cout << "cat_count = " << cat_count << endl;
			return false;
	}
	Cat& get_cat(string name)
	{
		Cat* p = pfirst_cat;
		if (cat_count == 0)
			exit(0);
		while (p != NULL)
		{
			if (p->cat_name == name)
				return *p;
			else
			{
				if (p->next != NULL)
				{
					p = p->next;
				}
				else
					break;
			}
		}
	}
	string operator[] (int num) const
	{
		Cat* p = pfirst_cat->next;
		for (int i = 0; i < num; i++)
		{
			p = p->next;
		}
		return p->cat_name;
	}
};