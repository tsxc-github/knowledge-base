#include<bits/stdc++.h>
#define LL long long
using namespace std;
const LL INF=1145141919810;
LL m,n;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n>>m;
    LL time[n+1];
    for(LL i=1;i<=n;i++){
        cin>>time[i];
    }
    LL dp[n+1][n+1][n+1];
    for(LL k=0;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[k][i][j]=INF;
    for(LL k=1;k<=m;k++){
        LL i,j,w;
        cin>>i>>j>>w;
        i++,j++;
        dp[0][i][j]=w;
        dp[0][j][i]=w;
    }
    for(LL i=1;i<=n;i++){
        dp[0][i][i]=0;
    }
    for(LL k=1;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[k][i][j]=min(dp[k-1][i][j],dp[k-1][i][k]+dp[k-1][k][j]);
    LL Q;
    cin>>Q;
    while(Q--){
        LL x,y,t;
        cin>>x>>y>>t;
        x++,y++;
        if(time[x]>t||time[y]>t){
            printf("%lld\n",(LL)-1);
            continue;}
        LL cnt=1;
        while(time[cnt]<=t)cnt++;
        if(dp[cnt-1][x][y]==INF){
            printf("%lld\n",(LL)-1);
            continue;}
        printf("%lld\n",dp[cnt-1][x][y]);
    }
    return 0;
}