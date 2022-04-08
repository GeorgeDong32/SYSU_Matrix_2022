#include <vector>
#include <iomanip>
#define maxn 105
using namespace std;

struct BigInt    {
    static const int base=10000;
    static const int width=4;
    vector<int> A;
    BigInt(int x=0)    {
        A.clear();
        while (x)
            A.push_back(x%base),x/=base;
    }

    BigInt operator + (const BigInt& N) const   {
        BigInt ans;
        for (int i=0,g=0;;++i)  {
            if (!g&&i>=A.size()&&i>=N.A.size()) break;
            if (i<A.size()) g+=A[i];
            if (i<N.A.size())   g+=N.A[i];
            ans.A.push_back(g%base);
            g/=base;
        }
        return ans;
    }
};

ostream& operator << (ostream& os,const BigInt &A)  {
    os<<A.A.back();
    for (int i=A.A.size()-2;~i;--i)
        os<<setw(BigInt::width)<<setfill('0')<<A.A[i]<<setfill(' ');
    return os;
}

