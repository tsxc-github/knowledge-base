#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919;
int main(){
    LL n,m;
    cin>>n>>m;
    LL dp[n][n];
    for(LL i=0;i<n;i++)
        for(LL j=0;j<n;j++)
            dp[i][j]=INF;
    for(LL i=0;i<m;i++){
        LL x,y,z;
        cin>>x>>y>>z;
        dp[x][y]=min(dp[x][y],z);
    }
    for(LL i=0;i<n;i++)
        dp[i][i]=0;
    for(LL k=0;k<n;k++)
        for(LL i=0;i<n;i++)
            for(LL j=0;j<n;j++)
                dp[i][j]=min(dp[i][k]+dp[k][j],dp[i][j]);
    for(LL i=0;i<n;i++)
        printf("%lld ",dp[0][i]);
}
// in:
// 6 8
// 0 2 10
// 0 4 30
// 0 5 100
// 1 2 5
// 2 3 50
// 3 5 10
// 4 3 20
// 4 5 60

