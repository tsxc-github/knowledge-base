#include<bits/stdc++.h>
#define LL int
using namespace std;
LL *a;
LL find(LL x){
    if(a[x]==x)return x;
    return a[x]=find(a[x]);
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    a=new LL [n+1];
    for(LL i=1;i<=n;i++)a[i]=i;
    bitset<100005>dp[n+1];
    for(LL i=1;i<=m;i++){
        LL a,b;
        cin>>a>>b;
        dp[a][b]=true;
    }
    for(LL i=1;i<=n;i++)
        dp[i][i]=true;
    for(LL k=1;k<=n;k++)
        for(LL i=1;i<=n;i++)
            for(LL j=1;j<=n;j++)
                dp[i][j]=dp[i][k]&&dp[k][j]||dp[i][j];
    for(LL i=1;i<=n;i++)
        for(LL j=1;j<=n;j++)
            if(dp[i][j]==true)
                a[j]=a[i];
    LL ans=0;
    for(LL i=1;i<=n;i++){
        if(a[i]==i)
            ans++;
    }
    cout<<ans;
    return 0;
}
