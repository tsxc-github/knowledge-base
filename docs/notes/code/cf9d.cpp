#include<iostream>
#include<cstdio>
#include<iomanip>
#include<algorithm>
#include<cstring>
#include<stack>
#include<math.h>
#include<cctype>
#include<map>
#include<queue>
#include<vector>
#define LL long long
#define LD long double
#define US unsigned short
using namespace std;
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL dp[400][400];
    LL n,h;
    cin>>n>>h;
    for(LL i=0;i<=n;i++)
        dp[0][i]=1;
    for(LL i=1;i<=n;i++)
        for(LL j=1;j<=n;j++)
            for(LL k=0;k<i;k++)
                dp[i][j]+=dp[k][j-1]*dp[i-k-1][j-1];
    printf("%lld\n",dp[n][n]-dp[n][h-1]);
}
