#ifndef __QUEUE_H__
#define __QUEUE_H__
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
#include <iostream>
using namespace std;

template <typename T>
class Queue
{
public:
	Queue() : front_node(nullptr), back_node(nullptr), node_num(0) {}

	Queue(const Queue& ao)
	{
		node_num = ao.node_num;
		if (node_num == 0)
		{
			back_node = nullptr;
			front_node = nullptr;
			return;
		}
		else
		{
			Node* temp_ao = ao.front_node;
			this->front_node = new Node(temp_ao->element);
			Node* temp = this->front_node;
			for (int i = 1; i < node_num; i++) {
				temp_ao = temp_ao->next;
				temp->next = new Node(temp_ao->element);
				temp = temp->next;
			}
			back_node = temp;
		}
	}
	~Queue()
	{
		if (node_num == 0)
		{
			return;
		}
		else
		{
			while (front_node != nullptr)
			{
				Node* temp = front_node;
				front_node = front_node->next;
				delete temp;
			}
		}
	}
	bool empty();
	int size();
	T front()
	{
		return (front_node->element);
	}
	T back()
	{
		return (back_node->element);
	}

	void push(T element);
	void pop();
	void swap(Queue& queue);
private:
	struct Node
	{
		T element;
		Node* next;
		Node(T ele, Node* n = NULL)
		{
			element = ele;
			next = n;
		}
	};
	Node* front_node;
	Node* back_node;
	int node_num;
};

template <typename T>
inline bool Queue<T>::empty()
{
	return (node_num == 0);
}

template <typename T>
inline int Queue<T>::size()
{
	return node_num;
}

template <typename T>
inline void Queue<T>::push(T element)
{
	Node* temp = new Node(element);
	if (back_node == NULL) {
		back_node = temp;
		front_node = temp;
	}
	else {
		back_node->next = temp;
		back_node = back_node->next;
	}
	node_num++;
}

template <typename T>
inline void Queue<T>::pop()
{
	if (node_num == 0) return;
	node_num--;
	Node* temp = front_node;
	front_node = front_node->next;
	delete temp;
}

template <typename T>
inline void Queue<T>::swap(Queue& queue)
{
	if (this == &queue)
		return;
	else
	{
		Node* midf = front_node;
		Node* mide = back_node;
		int midn = node_num;
		front_node = queue.front_node;
		back_node = queue.back_node;
		node_num = queue.node_num;
		queue.front_node = midf;
		queue.back_node = mide;
		queue.node_num = midn;
	}
}
#endif