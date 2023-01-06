#include<bits/stdc++.h>
#define LL long long
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    LL n,m;
    cin>>n>>m;
    LL dp[n+1];
    memset(dp,0,sizeof(dp));//记得初始化
    LL v[m+1];
    LL p[m+1];
    for(LL i=1;i<=m;i++){
        cin>>v[i]>>p[i];
    }
    for(LL i=1;i<=m;i++){
        for(LL j=n;j>=0;j--){//注意--,还有必须从容量开始枚举
            if(v[i]<=j)//防止越界
                dp[j]=max(dp[j-v[i]]+v[i]*p[i],dp[j]);
        }
    }
    cout<<dp[n];
    return 0;
}
