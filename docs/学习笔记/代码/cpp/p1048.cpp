#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL t,m;
    cin>>t>>m;
    LL dp[m+1][t+1];
    memset(dp,0,sizeof(dp));//记得初始化
    LL w[m+1];
    LL v[m+1];
    for(LL i=1;i<=m;i++){
        cin>>w[i]>>v[i];
    }
    for(LL i=1;i<=m;i++){//第一步dp要获取i=0的情况,注意要开到下标1开始
        for(LL j=t;j>=0;j--){
            if(w[i]<=j)
                dp[i][j]=max(dp[i-1][j-w[i]]+v[i],dp[i][j]);
            dp[i][j]=max(dp[i-1][j],dp[i][j]);
        }
    }
    cout<<dp[m][t];
    return 0;
}
