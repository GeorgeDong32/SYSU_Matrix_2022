#ifndef __GD_BIGINT_H__
#define __GD_BIGINT_H__
#include <iostream>
//Copyright (c) GeorgeDong32(Github). All rights reserved.
#include <cmath>
using namespace std;
#define maxn 300

void Invert(int* a, int len)
{
    int* mid = new int[len];
    for (int i = len - 1; i >= 0; i--)
    {
        mid[len - 1 - i] = a[i];
    }
    for (int i = 0; i < len; i++)
    {
        a[i] = mid[i];
    }
    delete[] mid;
}

class BigInt
{
public:
    //成员
    int* s;    //int re[110];
    int len;
    //构造函数
    BigInt(const BigInt& o)
    {
        s = new int[110];
        len = o.len;
        for (int i = 0; i < len; i++)
        {
            s[i] = o.s[i];
        }
    }
    BigInt()
    {
        s = new int[110];
        len = 0;
    }
    BigInt(const int c[], int l)
    {
        s = new int[110];
        len = l;
        for (int i = 0; i < len; i++)
        {
            s[i] = c[i];
        }
    }
    BigInt(int i)
    {
        s = new int[110];
        int l = 0;
        while (i)
        {
            s[l] = i % 10;
            i /= 10;
            l++;
        }
        len = l;
        Invert(s, len);
    }
    ~BigInt()
    {
        delete[] s;
    }
	//函数区
	BigInt operator +(const BigInt& b)
	{
        int up[110] = { 0, }; int down[110] = { 0, };
        int re[110] = { 0, };
        int upl = 0; int dol = 0; int uc = 0; int mid = 0;
        int rel = 0; int mode = -1;
        if (len >= b.len)
        {
            for (int i = 0; i < len; i++)
                up[i] = s[i]; 
            for (int i = 0; i < b.len; i++) 
                down[i] = b.s[i];
            upl = len; dol = b.len;
            if (len == b.len)
                mode = 1;
            else
                mode = 2;
        }
        else
        {
            for (int i = 0; i < b.len; i++) 
                up[i] = b.s[i];
            for (int i = 0; i < len; i++) 
                down[i] = s[i];
            upl = b.len; dol = len; mode = 2;
        }
        Invert(up, upl);
        Invert(down, dol);
        if (mode == 2)
        {
            for (int i = 0; i < dol; i++)
            {
                mid = up[i] + down[i] + uc;
                re[i] = (mid % 10);
                uc = mid / 10;
            }
            for (int i = dol; i < upl; i++)
            {
                re[i] = up[i] + uc;
                uc = 0;
            }
            rel = upl;
            Invert(re, rel);
        }
        else if (mode == 1)
        {
            for (int i = 0; i < dol; i++)
            {
                mid = up[i] + down[i] + uc;
                re[i] = (mid % 10);
                uc = mid / 10;
            }
            if (uc > 0)
            {
                re[dol] = uc;
                rel = dol + 1;
                Invert(re, rel);
            }
            else
            {
                rel = dol;
                Invert(re, rel);
            }
        }
        BigInt* red = new BigInt(re, rel);
        return *red;
	}
    BigInt& operator =(const BigInt& b)
    {
        len = b.len;
        for (int i = 0; i < len; i++)
        {
            s[i] = b.s[i];
        }
        return *this;
    }
    BigInt& operator =(const int i)
	{
        int l = 0; int mid = i;
        while (mid)
        {
            s[l] = mid % 10;
            mid /= 10;
            l++;
        }
        len = l;
        Invert(s, len);
        return *this;
    }
};

std::ostream& operator<<(ostream& os, const BigInt& b)
{
    for (int i = 0; i < b.len; i++)
    {
        os << b.s[i];
    }
    return os;
}

#endif