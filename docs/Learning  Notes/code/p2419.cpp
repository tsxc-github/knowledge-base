#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    bool dp[n+1][n+1]={};
    for(LL i=0;i<m;i++){
        LL x,y;
        cin>>x>>y;
        dp[x][y]=true;
    }
    for(LL i=1;i<=n;i++)
        dp[i][i]=true;
    for(LL k=1;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[i][j]=dp[i][j]||dp[i][k]&&dp[k][j];
    LL ans=0;
    for(LL i=1;i<=n;i++){
        bool t=true;
        for(LL j=1;j<=n;j++){
            if(dp[i][j]==false&&dp[j][i]==false)
                t=false;
        }
        if(t==true)
            ans++;
    }
    printf("%lld",ans);
    return 0;
}
