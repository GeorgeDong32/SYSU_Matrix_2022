#include <cstddef>
#include <stdexcept>

template <typename ElementType> //genericStack.h
class Stack
{
public:
	Stack();
	~Stack();
	void push(ElementType obj); 
	void pop();
	ElementType getTop() const;
	bool isEmpty() const;

private:
	struct Node // 栈结点类型
	{
		ElementType element; // 结点中存放的元素
		Node *next;			 // 指向下一结点的指针
	};
	Node *top; // 栈顶
};
//#include "genericStack.cpp"


template <typename ElementType>
void Stack<ElementType>::push(ElementType obj)
{
      Node *temp;
      try
      {
            temp = new Node;
            temp->element = obj;
            temp->next = top;
            top = temp;
      }
      catch (std::bad_alloc e)
      {            // 内存分配失败时进行异常处理
            throw; // 重新抛出异常
      }
}

template <typename ElementType>
void Stack<ElementType>::pop()
{
      Node *temp;
      if (top != NULL)
      {
            temp = top;
            top = top->next;
            delete temp;
      }
      else
      { // 栈为空时抛出异常
            throw std::logic_error("pop from empty Stack");
      }
}

template <typename ElementType>
bool Stack<ElementType>::isEmpty() const
{
      if (top != NULL)
            return false;
      return true;
}

template <typename ElementType>
Stack<ElementType>::Stack(){
      top = NULL;
}

template <typename ElementType>
ElementType Stack<ElementType>::getTop() const{
      return top->element;
}

template <typename ElementType>
Stack<ElementType>::~Stack(){
      while(!isEmpty())
            pop();
}