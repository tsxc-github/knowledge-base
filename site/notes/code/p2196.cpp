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
#define MAX 100
#ifdef ONLINE_JUDGE
#define MAX 114514
#endif
bool rode[MAX][MAX];
LL n;
LL dp[MAX];
LL l[MAX];
LL r[MAX];
LL dfs(LL now,LL x,LL dilei){
    if(x<=0||x>n)return -1;
    if(dp[x]!=-1)return dp[x];
    dp[x]=l[x];
    for(LL i=1;i<=n;i++){
        if(rode[x][i]){
            LL t=dfs(0,i,dilei)+l[x];
            if(t>dp[x]){
                r[i]=x;
                dp[x]=t;
            }
        }
    }
    return dp[x];
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(0);
    cin>>n;
    memset(dp,-1,sizeof(dp));
    for(LL i=1;i<=n;i++){
        cin>>l[i];
    }
    for(LL i=1;i<=n;i++){
        for(LL j=i+1;j<=n;j++){
            cin>>rode[i][j];
        }
    }
    LL ans=-1;
    LL last=0;
    for(LL i=1;i<=n;i++){
        LL t=dfs(0,i,0);
        if(t>ans){
            ans=t;
            last=i;}
    }
    for(;last!=0;last=r[last]){
        cout<<last<<" ";}
    puts("");
    cout<<ans<<endl;
    return 0;
}
