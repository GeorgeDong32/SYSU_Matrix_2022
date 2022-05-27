#include "genericStack.hpp"
#include <iostream>
using namespace std;

int main() //程序EX6_4.cpp
{
    Stack<int> stack; // 实例化一个保存int型元素的栈

    for (int i = 1; i < 9; i++) // 向栈中压入8个元素
        stack.push(i);

    while (!stack.isEmpty())
    {                                  // 栈不为空时循环
        cout << stack.getTop() << " "; // 显示栈顶元素
        stack.pop();                   // 弹出栈顶元素

    }
    return 0;
}
