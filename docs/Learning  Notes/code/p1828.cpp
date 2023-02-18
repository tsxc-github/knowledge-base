#include<bits/stdc++.h>
#define LL long long
using namespace std;
#define max(a,b) (a)>(b)?(a):(b)
#define min(a,b) (a)<(b)?(a):(b)
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,p,c;
    cin>>n>>p>>c;
    LL nm[p+1]={};
    for(LL i=0;i<n;i++){
        LL t;
        cin>>t;
        nm[t]++;
    }
    LL dp[p+1][p+1];
    memset(dp,0x3f,sizeof(LL)*(p+1)*(p+1));
    for(LL i=0;i<c;i++){
        LL a,b,c;
        cin>>a>>b>>c;
        dp[a][b]=min(c,dp[a][b]);
        dp[b][a]=min(c,dp[b][a]);
    }
    for(LL i=0;i<=p;i++){
        dp[i][i]=0;
    }
    for(LL k=1;k<=p;k++)
        for(LL i=1;i<=p;i++)
            for(LL j=1;j<=p;j++)
                dp[i][j]=min(dp[i][j],dp[i][k]+dp[k][j]);
    LL ans=114514;
    for(LL i=1;i<=p;i++){
        LL tot=0;
        for(LL j=1;j<=p;j++)
            tot+=dp[i][j]*nm[j];
        if(tot>=0)
            ans=min(tot,ans);
    }
    printf("%lld",ans);
    return 0;
}
