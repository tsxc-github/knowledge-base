#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    LL dp[m+1];
    memset(dp,0,sizeof(dp));//记得初始化
    LL w[n+1];
    LL d[n+1];
    for(LL i=1;i<=n;i++){
        cin>>w[i]>>d[i];
    }
    for(LL i=1;i<=n;i++){
        for(LL j=m;j>=0;j--){//注意--
            if(w[i]<=j)
                dp[j]=max(dp[j-w[i]]+d[i],dp[j]);
        }
    }
    cout<<dp[m];
    return 0;
}
