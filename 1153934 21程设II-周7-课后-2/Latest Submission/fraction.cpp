#include "fraction.h"
#include <cmath>

int fraction::gcd(const int&a, const int&b) const
{
    int m = abs(a);
    int n = abs(b);
    while (n) {
        int tem = m;
        m = n;
        n = tem % n;
    }
    return m;
}

void fraction::simp()
{
    if (_denominator != 0 && _numerator != 0)
    {
        int g = gcd(_numerator, _denominator);
        _numerator /= g;
        _denominator /= g;
    }
    if (_denominator < 0 && _numerator < 0)
    {
        _numerator = -_numerator;
        _denominator = -_denominator;
    }
    else if (_denominator < 0 && _numerator > 0)
    {
        _numerator = -_numerator;
        _denominator = -_denominator;
    }
    else return;
}

fraction::fraction(const int&u, const int&d)
{
    _numerator = u; _denominator = d;
}

fraction::fraction(const fraction&a)
{
    _numerator = a._numerator; _denominator = a._denominator;
}

void fraction::operator=(const fraction& o)
{
    _numerator = o._numerator;
    _denominator = o._denominator;
}

fraction fraction::operator+(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction re;
        long m1 = 0; long m2 = 0; long m3 = 0;
        m1 = _numerator * o._denominator; m2 = o._numerator * _denominator;
        m3 = _denominator * o._denominator;
        int g = gcd(m1 + m2, m3);
        re = fraction((m1 + m2)/g, m3/g);
        re.simp();
        return re;
    }
    return fraction(0, 0);//fraction(1,0);
}

fraction fraction::operator-(const fraction&o) const
{
    if (_denominator == 0 || o._denominator == 0) return fraction(1, 0);
    int deno = _denominator * o._denominator;
    int num = _numerator * o._denominator - _denominator * o._numerator;
    fraction* re = new fraction(num, deno);
    re->simp();
    return *re;
}

fraction fraction::operator*(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction re;
        long m1 = _numerator * o._numerator; long m2 = _denominator * o._denominator;
        int g = gcd(m1, m2);
        re = fraction(m1/g,m2/g);
        re.simp();
        return re;
    }
    return fraction(0, 0);
}

fraction fraction::operator/(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0 && o._numerator != 0)
    {
        fraction re;
        long m1 = _numerator * o._denominator; long m2 = _denominator * o._numerator;
        int g = gcd(m1, m2);
        re = fraction(m1 / g, m2 / g);
        re.simp();
        return re;
    }
    return fraction(0, 0);
}

void fraction::operator+=(const fraction&o)
{
    if (_denominator != 0 && o._denominator != 0)
    {
        int m1 = 0; int m2 = 0; int m3 = 0;
        m1 = _numerator * o._denominator; m2 = o._numerator * _denominator;
        m3 = _denominator * o._denominator;
        int g = gcd(m1 + m2, m3);
        _numerator = (m1 + m2)/g;
        _denominator = m3/g;
        this->simp();
    }
}

void fraction::operator-=(const fraction&o)
{
    if (_denominator != 0 && o._denominator != 0)
    {
        int m1 = 0; int m2 = 0; int m3 = 0;
        m1 = _numerator * o._denominator; m2 = o._numerator * _denominator;
        m3 = _denominator * o._denominator;
        int g = gcd(m1 - m2, m3);
        _numerator = (m1 - m2)/g;
        _denominator = m3/g;
        this->simp();
    }
}

void fraction::operator*=(const fraction&o)
{
    if (_denominator != 0 && o._denominator != 0)
    {
        long m1 = _numerator * o._numerator;
        long m2 = _denominator * o._denominator;
        long tmp1 = m1; long tmp2 = m2;
        if (tmp1 < 0)
            tmp1 = -tmp1;
        if (tmp2 < 0)
            tmp2 = -tmp2;
        int g = gcd(tmp1, tmp2);
        m1 /= g; m2 /= g;
        _numerator = m1;
        _denominator = m2;
        this->simp();
    }
}

void fraction::operator/=(const fraction&o)
{
    if (_denominator != 0 && o._denominator != 0 && o._numerator != 0)
    {
        long m1 = _numerator * o._denominator; long m2 = _denominator * o._numerator;
        long tmp1 = m1; long tmp2 = m2;
        if (tmp1 < 0)
            tmp1 = -tmp1;
        if (tmp2 < 0)
            tmp2 = -tmp2;
        int g = gcd(tmp1, tmp2);
        m1 /= g; m2 /= g;
        _numerator = m1;
        _denominator = m2;
        this->simp();
    }
    else
        _denominator = 0;
}

bool fraction::operator==(const fraction&o) const
{
    if (_denominator == 0 && o._denominator == 0) 
        return true;
    if (_numerator == o._numerator && _denominator == o._denominator) 
        return true;
    if ((*(this) - o)._numerator == 0)
        return true;
    return false;
}

bool fraction::operator!=(const fraction&o) const
{
    if (_denominator == 0 && o._denominator == 0)
        return false;
    if (_numerator == o._numerator && _denominator == o._denominator)
        return false;
    if ((*(this) - o)._numerator == 0)
        return false;
    return true;
}

bool fraction::operator<(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction mid = *(this) - o;
        if (mid._numerator < 0)
            return true;
        else return false;
    }
    else
        return false;
}

bool fraction::operator>(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction mid = *(this) - o;
        if (mid._numerator > 0)
            return true;
        else return false;
    }
    else
        return false;
}

bool fraction::operator<=(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction mid = *(this);
        return (mid < o || mid == o);
    }
    else
        return false;
}

bool fraction::operator>=(const fraction&o) const
{
    if (_denominator != 0 && o._denominator != 0)
    {
        fraction mid = *(this);
        return (mid > o || mid == o);
    }
    else
        return false;
}

std::istream& operator>>(std::istream&is, fraction&o)
{
    is >> o._numerator >> o._denominator;
    return is;
}

std::ostream& operator<<(std::ostream& os, const fraction& o)
{
    if (!o._denominator) {
        os << "NaN";
        return os;
    }
    if (o._denominator == 1 || o._denominator == -1) {
        os << o._numerator * o._denominator;
        return os;
    }
    else if (o._numerator == 0)
    {
        os << o._numerator;
        return os;
    }
    os << o._numerator << "/" << o._denominator;
    return os;

}
