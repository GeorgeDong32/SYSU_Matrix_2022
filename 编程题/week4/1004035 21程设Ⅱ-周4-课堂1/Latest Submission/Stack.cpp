#include "Stack.hpp"
#include <iostream>
using namespace std;

Stack::Stack()
{
	Stack::data = NULL;
}

Stack::Stack(const Stack& s1)
{
	if(s1.empty())
	{
		data = NULL;
	}
	else
	{
		data = new node(s1.data->num);
		node* curp = data;
		for(node* s1p = s1.data->next; s1p != NULL; s1p = s1p->next)
		{
			curp->next = new node(s1p->num);
			curp = curp->next;
		}
	}
}

Stack::~Stack()
{
	clear();
    data = NULL;
}

void Stack::push(int i)
{
	node* p = new node(i,data);
	data = p;
}

void Stack::pop()
{
	if(this->data != NULL)
	{
		node* p = data;
		data = data -> next;
        delete p;
	}
}

void Stack::clear()
{
	node* p = data;
	node* pn = p;
	while(p != NULL)
	{
		pn = p-> next;
		delete p;
		p = pn;
		pn = p-> next;
	}
	data = NULL;
}

int Stack::top()const
{
	if(!empty())
    {
        return data->num;
    }
    else
    {
        return 0;
    }
}

bool Stack::empty()const
{
	return data == NULL;
}