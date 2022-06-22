#include "Safehouse.h"
/*********************************************************
*                                                        *
* Copyright(c) GeorgeDong32(Github).All rights reserved. *
*                                                        *
**********************************************************/
Safehouse& Safehouse::operator=(const Safehouse& o)
{
    if (this == &o) return *this;
    _count_own_types = o._count_own_types;
    for (int i = 0; i < _count_own_types; ++i) {
        _owns[i].name = o._owns[i].name;
        _owns[i].count = o._owns[i].count;
    }

    return *this;
}

Safehouse Safehouse::operator+(const Resource& nr)
{
    Safehouse* re = new Safehouse(*this);
    int check = (* re).IndexOfResource(nr.name);
    int ipo = (*re).GetCountOwnTypes();
    if (check == -1)
    {
        if (ipo < 16)
        {
            (*re)._owns[ipo].count = nr.count;
            (*re)._owns[ipo].name = nr.name;
            (*re)._count_own_types++;
            /*cout << "in plus" << endl;
            cout << *re << endl;*/
        }
    }
    else
    {
        (*re)._owns[check].count += nr.count;
    }
    return (*re);
}

Safehouse Safehouse::operator+(const Safehouse& o)
{
    Safehouse re(*this);
    int count = o.GetCountOwnTypes();
    for (int i = 0; i < count; i++)
    {
        re = re + o._owns[i];
        re._count_own_types++;
    }
    return re;
}

Safehouse& Safehouse::operator+=(const Resource& nr)
{
    int ipo = _count_own_types;
    int check = this->IndexOfResource(nr.name);
    if (check == -1)
    {
        if (ipo < 16)
        {
            _owns[ipo].count = nr.count;
            _owns[ipo].name = nr.name;
            _count_own_types++;
        }
    }
    else
    {
        _owns[check].count += nr.count;
    }
    return *this;
}

Safehouse& Safehouse::operator+=(const Safehouse& o)
{
    int count = o.GetCountOwnTypes();
    for (int i = 0; i < count; i++)
    {
        *this += o._owns[i];
    }
    return *this;
}

const Resource& Safehouse::operator[](const int& index) const
{
    int check = _count_own_types;
    if (index > check || index < 0)
    {

    }
    else
    {
        return _owns[index];
    }
}

bool Safehouse::operator>=(const Safehouse& t)
{
    string resc[16];
    int ttc = t.GetCountOwnTypes();
    int tin[16] = { 0, };
    int mtc = _count_own_types;
    int tpf = 1; int check = 0;
    int amf = 1;
    if (ttc > mtc)
        return false;
    for (int i = 0; i < ttc; i++)
    {
        resc[i] = t[i].name;
    }
    for (int i = 0; i < ttc; i++)
    {
        check = 0;
        check = IndexOfResource(resc[i]);
        if (check != -1)
        {
            tpf *= 1;
            tin[i] = check;
        }
        else
            return false;
    }
    for (int i = 0; i < ttc; i++)
    {
        int ta = t.GetOwnsCount(tin[i]);
        int ma = CountOfResource(resc[i]);
        if (ma >= ta)
        {
            amf *= 1;
        }
        else
            return false;
    }
    return true;
}

ostream& operator<<(ostream& os, const Safehouse& h)
{
    int con = h.GetCountOwnTypes();
    for (int i = 0; i < con; i++)
    {
        os << h._owns[i].name << ": " << h._owns[i].count << endl;
    }
    return os;
}
