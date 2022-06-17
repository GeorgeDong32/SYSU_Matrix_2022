#pragma once
#include <iostream>
#include <string>
#include <stack>
#include <vector>
using namespace std;
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
bool Matched(string& brackets, const int& length) {
	// :param brackets: the sequence of brackets to be judged.
    if (length == 0)
        return true;
	if (length % 2 != 0)
	{
		return false;
	}
    /*stack<char, std::vector<int> > cstack;
    size_t comparePos;  // 比较位置 
    int cc1 = 0;
    for (size_t i = 0; i < length / 2; i++)                       // 将文本text的前半部分压入栈cstack
        cstack.push(brackets[i]);
    // 将文本text的后半部分逐个字符与前半部分的对应字符进行比较
    if (length % 2 == 0)                                        // 设定比较起点
        comparePos = length / 2;
    else
        comparePos = length / 2 + 1;
    while (!cstack.empty()) {                                   // 比较对应字符
        switch (cstack.top())
        {
        case '(':
            if (brackets[comparePos] != ')')
                goto loopout;
            break;
        case '[':
            if (brackets[comparePos] != ']')
                goto loopout;
            break;
        case '{':
            if (brackets[comparePos] != '}')
                goto loopout;
            break;
        }
        cstack.pop();                                           // 对应字符出栈
        comparePos++;                                           // 比较位置后移一个字符
    }
loopout:
    if (cstack.empty()) return true;*/
    int start = 0; int end = length - 1;
    int cc1 = 1;
    while (end != start + 1)
    {
        switch (brackets[start])
        {
        case '(':
            if (brackets[end] != ')')
            {
                cc1 = 0;
                //return false;
            }
            break;
        case '[':
            if (brackets[end] != ']')
            {
                cc1 = 0;
                //return false;
            }
            break;
        case '{':
            if (brackets[end] != '}')
            {
                cc1 = 0;
                //return false;
            }
            break;
        case ')':
        case ']':
        case '}':
            cc1 = 0;
        }
        start++; end--;
    }
    if (cc1 == 1)
        return true;
    //非对称
    int cp = 0; int cpn = cp + 1;
    int cc2 = 0;
    while (cpn != length - 1)
    {
        switch (brackets[cp])
        {
        case '(':
            if (brackets[cpn] != ')')
                return false;
            break;
        case '[':
            if (brackets[cpn] != ']')
                return false;
            break;
        case '{':
            if (brackets[cpn] != '}')
                return false;
            break;
        case ')':
        case ']':
        case '}':
            return false;
        }
        cp = cpn + 1; cpn = cp + 1;
    }
    return true;
	// :param length: the length of this sequence.
	// :return: true if the sequence is legal, else false.
}
