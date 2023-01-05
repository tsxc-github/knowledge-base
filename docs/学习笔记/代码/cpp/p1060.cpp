#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    LL dp[m+1][n+1];
    memset(dp,0,sizeof(dp));//记得初始化
    LL v[m+1];
    LL p[m+1];
    for(LL i=1;i<=m;i++){
        cin>>v[i]>>p[i];
    }
    for(LL i=1;i<=m;i++){//第一步dp要获取i=0的情况,注意要开到下标1开始
        for(LL j=n;j>=0;j--){//j要>=0,因为v[i]可能为0
            if(v[i]<=j)
                dp[i][j]=max(dp[i-1][j-v[i]]+v[i]*p[i],dp[i][j]);
            dp[i][j]=max(dp[i-1][j],dp[i][j]);
        }
    }
    cout<<dp[m][n];
    return 0;
}
