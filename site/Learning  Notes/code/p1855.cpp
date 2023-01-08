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
#define MAX 250


LL n,M,T;
LL m[MAX],t[MAX];
LL dp[MAX][MAX][MAX];
bool b[MAX];
LL dfs(LL now,LL nowm,LL nowt){
    if(nowm<0||nowt<0)
        return -1;
    if(dp[now][nowm][nowt]!=-1)
        return dp[now][nowm][nowt];
    if(now>=n)
        return 0;
    return dp[now][nowm][nowt]=max(dfs(now+1,nowm-m[now],nowt-t[now])+1,dfs(now+1,nowm,nowt));
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    memset(dp,-1,sizeof(dp));
    cin>>n>>M>>T;
    for(LL i=0;i<n;i++){
        cin>>m[i]>>t[i];
    }
    cout<<dfs(0,M,T);
    return 0;
}
