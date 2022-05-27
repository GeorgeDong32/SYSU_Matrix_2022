#pragma once
class B: public A
{
public:
    B(int na, int nb): A(na), b(nb){}
    void show()
    {
        A::show();
        cout << "b=" << b << endl;
    }
private:
    int b;
};