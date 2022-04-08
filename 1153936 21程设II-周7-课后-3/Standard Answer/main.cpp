#include <iostream>
#include "BigInt.h"
using namespace std;

BigInt dp[maxn];

int main()
{
    int m,n;
    while (cin>>m>>n,m&&n)   {
        for (int i=1;i<=m;++i)   dp[i]=1;
        for (int i=m+1;i<=n+m;++i)
	        dp[i]=dp[i-1]+dp[i-m];
        cout<<dp[n+m]<<endl;
    }
	return 0;
}
